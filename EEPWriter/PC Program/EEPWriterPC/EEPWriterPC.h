#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_EEPWriterPC.h"

class EEPWriterPC : public QMainWindow
{
	Q_OBJECT

public:
	EEPWriterPC(QWidget *parent = Q_NULLPTR);

private:
	Ui::EEPWriterPCClass ui;
};
