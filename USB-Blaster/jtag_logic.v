/*

Serial/Parallel converter, interfacing JTAG chain with FTDI FT245BM
-------------------------------------------------------------------------

-- Original Work 
	Copyright (C) 2005-2007 Kolja Waschk, ixo.de
	Original code is part of usbjtag and it is distributed under GPLv2 License.
	(https://sourceforge.net/p/ixo-jtag/code/HEAD/tree/usb_jtag/trunk/device/cpld/)
	
-- VHDL to Verilog Converting
	Copyright (C) 2019 S.H Kim, shkim@thesoohyun.kim
	(https://github.com/RapidWorkers/USB-Programmer)
	
-------------------------------------------------------------------------
This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR 
A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License 
along with this program; if not, write to the Free Software Foundation, Inc.,
 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
-------------------------------------------------------------------------
*/

/*
2019-09-02 Note:
	This code is NOT Verified which means 
	THERE IS NO GUARANTEE THAT THIS CODE WILL PERFORM AS JTAG DOWNLOADER
	So, I don't recommend this design till this note is deleted.
*/


module jtag_logic(
	input CLK, 			// external 24/25 MHz oscillator
	input nRXF,			// FT245BM nRXF
	input nTXE,			// FT245BM nTXE
	input B_TDO,		// JTAG input: TDO, AS/PS input: CONF_DONE
	input B_ASDO,		// AS input: DATAOUT, PS input: nSTATUS
	output reg B_TCK,	// JTAG output: TCK to chain, AS/PS DCLK
	output reg B_TMS,	// JTAG output: TMS to chain, AS/PS nCONFIG
	output reg B_NCE,	// AS output: nCE
	output reg B_NCS,	// AS output: nCS
	output reg B_TDI,	// JTAG output: TDI to chain, AS: ASDI, PS: DATA0
	output reg B_OE,	// LED output/output driver enable 
	output reg nRD,	// FT245BM nRD
	output reg WR,		// FT245BM WR
	inout reg [7:0]D	// FT245BM D[7..0]
);
	
	reg carry;
	reg do_output;
	reg [7:0]ioshifter;
	reg [8:0]bitcount;
	reg [3:0]state;
	reg [3:0]next_state;
	
////////////////////////////////////////////////
//                                            //
//             State Definition               //
//                                            //
////////////////////////////////////////////////
	
	/*
		There are exactly 16 states. If this is encoded using 4 bits, there will
		be no unknown/undefined state. The host will send us 64 times "0" to move
		the state machine to a known state. We don't need a power-on reset.
	*/
	localparam [3:0] wait_for_nRXF_low = 4'b0000;
	localparam [3:0] set_nRD_low = 4'b0001;
	localparam [3:0] keep_nRD_low = 4'b0010;
	localparam [3:0] latch_data_from_host = 4'b0011;
	localparam [3:0] set_nRD_high = 4'b0100;
	localparam [3:0] bits_set_pins_from_data = 4'b0101;
	localparam [3:0] bytes_set_bitcount = 4'b0110;
	localparam [3:0] bytes_get_tdo_set_tdi = 4'b0111;
	localparam [3:0] bytes_clock_high_and_shift = 4'b1000;
	localparam [3:0] bytes_keep_clock_high = 4'b1001;
	localparam [3:0] bytes_clock_finish = 4'b1010;
	localparam [3:0] wait_for_nTXE_low = 4'b1011;
	localparam [3:0] set_WR_high = 4'b1100;
	localparam [3:0] output_enable = 4'b1101;
	localparam [3:0] set_WR_low = 4'b1110;
	localparam [3:0] output_disable = 4'b1111;
	
	
////////////////////////////////////////////////
//                                            //
//             State Calculation              //
//                                            //
////////////////////////////////////////////////

	always @(nRXF, nTXE, state, bitcount, ioshifter, do_output)
	begin
		case (state)
		
		/* Input */
			wait_for_nRXF_low:
			begin
				if (nRXF == 1'b0) next_state <= set_nRD_low;
				else next_state <= wait_for_nRXF_low;
			end
			
			set_nRD_low:
				next_state <= keep_nRD_low;
			
			keep_nRD_low:
				next_state <= latch_data_from_host;
			
			latch_data_from_host:
				next_state <= set_nRD_high;		
				
			set_nRD_high:
			begin
				if (bitcount[8:3] != 6'b000000) begin
					next_state <= bytes_get_tdo_set_tdi;
				end
				else if (ioshifter[7] == 1'b1) begin
					next_state <= bytes_set_bitcount;
				end
				else begin
					next_state <= bits_set_pins_from_data;
				end
			end
			
			bytes_set_bitcount:
				next_state <= wait_for_nRXF_low;
			
			
		/* Bit Banging */
			bits_set_pins_from_data:
			begin
				if (ioshifter[6] == 1'b0) begin
					next_state <= wait_for_nRXF_low; // read next byte from host
				end
				else begin
					next_state <= wait_for_nTXE_low; // output byte to host
				end
			end
			

		/* Byte Output*/
			bytes_get_tdo_set_tdi:
				next_state <= bytes_clock_high_and_shift;
			
			bytes_clock_high_and_shift:
				next_state <= bytes_keep_clock_high;
			
			bytes_keep_clock_high:
				next_state <= bytes_clock_finish;
			
			bytes_clock_finish:
			begin
				if (bitcount[2:0] != 3'b111) begin
					next_state <= bytes_get_tdo_set_tdi; // clock next bit
				end
				else if (do_output == 1'b1) begin
					next_state <= wait_for_nTXE_low; // output byte to host
				end
				else begin
					next_state <= wait_for_nRXF_low; // read next byte from host
				end
			end
			
		/* Output to Host */
			wait_for_nTXE_low:
			begin
				if (nTXE == 1'b0)
					next_state <= set_WR_high;
				else
					next_state <= wait_for_nTXE_low;
			end
			
			set_WR_high:
				next_state <= output_enable;
			
			output_enable:
				next_state <= set_WR_low;
			
			set_WR_low:
				next_state <= output_disable;
			
			output_disable:
				next_state <= wait_for_nRXF_low; // read next byte from host
			
			default:
				next_state <= wait_for_nRXF_low;
				
		endcase
	end
	
////////////////////////////////////////////////
//                                            //
//              State to Output               //
//                                            //
////////////////////////////////////////////////
	always @(posedge CLK)
	begin
			
		if (state == set_nRD_low || state == keep_nRD_low || state == latch_data_from_host)
			nRD <= 1'b0;
		else
			nRD <= 1'b1;
		
		if (state == latch_data_from_host)
			ioshifter <= D;
		
		if (state == set_WR_high || state == output_enable)
			WR <= 1'b1;
		else
			WR <= 1'b0;
				
		if (state == output_enable || state == set_WR_low)
			D <= ioshifter;
		else
			D <= 8'bzzzzzzzz;
		
		if (state == bits_set_pins_from_data) begin
				B_TCK <= ioshifter[0];
				B_TMS <= ioshifter[1];
				B_NCE <= ioshifter[2];
				B_NCS <= ioshifter[3];
				B_TDI <= ioshifter[4];
				B_OE  <= ioshifter[5];
				ioshifter <= {6'b000000, B_ASDO, B_TDO};
		end
		
		if (state == bytes_set_bitcount) begin
				bitcount <= {ioshifter[5:0], 3'b111};
				do_output <= ioshifter[6];
		end
			
		if (state == bytes_get_tdo_set_tdi) begin
			if (B_NCS == 1'b1)
				carry <= B_TDO; 	//JTAG mode (nCS=1)
			else
				carry <= B_ASDO; 	//Active Serial mode (nCS=0)

			B_TDI <= ioshifter[0];
			bitcount <= bitcount - 1'b1;
		end
			
		if (state == bytes_clock_high_and_shift || state == bytes_keep_clock_high)
			B_TCK <= 1'b1;
			
		if (state == bytes_clock_high_and_shift)
			ioshifter <= {carry, ioshifter[7:1]};
			
		if (state == bytes_clock_finish)
			B_TCK <= 1'b0;
		
		state <= next_state;
	end
	
endmodule
