#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ModernWarfare2FOVChanger.h"
#include "QtWidgets/qlabel.h"
#include "qtimer.h"
#include "MemoryManager.h"

#define PROCESSRUNNING 259

class ModernWarfare2FOVChanger : public QMainWindow
{
	Q_OBJECT

public:
	ModernWarfare2FOVChanger(QWidget *parent = Q_NULLPTR);
	~ModernWarfare2FOVChanger();


public slots:
	void updateGameStatus();

private:
	Ui::ModernWarfare2FOVChangerClass ui;
	std::string gameStatusLabelGameRunningText = "IW4SP.exe is running!";
	std::string gameStatusLabelGameNotRunningText = "Waiting for IW4SP.exe...";
	std::string windowName = "Modern Warfare 2";
	QLabel *GameStatusLabel;
	QTimer *GameStatusTimer = new QTimer(this);
	MemoryManager mem;
	unsigned long* exitCode = new unsigned long;
	int updateGameStatusTime = 500;

};
