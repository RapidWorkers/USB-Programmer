USB Blaster using FT245BM(L) and CPLD
----
```
        _________
       |         |
       | **93C46 |
       |_________|
        __|__________    _________
       |             |  |  CPLD   |
  USB__| FTDI 245BM  |__|  MAX II |__JTAG (B_TDO,B_TDI,B_TMS,B_TCK)
       |_____________|  |_________|
        __|__________    _|___________
       |             |  |             |
       | 6 MHz XTAL  |  | 24 MHz Osc. |
       |_____________|  |_____________|
```

WHAT IS HERE
----
  - Schematics of USB Blaster (Preparing)
  - PCB of Blaster (Preparing)
  - FTDI 245BM(L) Configuration XML for Programming attached EEPROM
  - Quartus II Project / Verilog code for CPLD Chip
