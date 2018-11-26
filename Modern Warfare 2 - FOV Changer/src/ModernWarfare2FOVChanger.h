#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ModernWarfare2FOVChanger.h"

class ModernWarfare2FOVChanger : public QMainWindow
{
	Q_OBJECT

public:
	ModernWarfare2FOVChanger(QWidget *parent = Q_NULLPTR);

private:
	Ui::ModernWarfare2FOVChangerClass ui;
};
