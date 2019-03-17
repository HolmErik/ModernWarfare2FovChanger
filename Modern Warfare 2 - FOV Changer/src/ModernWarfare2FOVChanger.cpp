#include "ModernWarfare2FOVChanger.h"
#include <iostream>

ModernWarfare2FOVChanger::ModernWarfare2FOVChanger(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowFlag(Qt::MSWindowsFixedSizeDialogHint);
	setWindowTitle("MW2");
	//make sure the game status is updated every half second
	GameStatusLabel = findChild<QLabel*>("GameStatusLabel");
	connect(GameStatusTimer, SIGNAL(timeout()), this, SLOT(updateGameStatus()));
	connect(ui.spinBox, SIGNAL(valueChanged(double)), this, SLOT(updateFov(double)));
	connect(FovCheckTimer, SIGNAL(timeout()), this, SLOT(FovCheck()));
	updateFov(ui.spinBox->value());
	GameStatusTimer->start(updateGameStatusTime);
	FovCheckTimer->start(FovCheckTime);
}

ModernWarfare2FOVChanger::~ModernWarfare2FOVChanger()
{
	delete exitCode;
	delete GameStatusTimer;
	delete FovCheckTimer;
}

void ModernWarfare2FOVChanger::updateFov(double fov)
{
	mem.write<float>((float)fov);
}

void ModernWarfare2FOVChanger::FovCheck()
{
	float tmp;
	mem.read<float>(tmp);
	float diff = tmp - ui.spinBox->value();
	if (abs(diff) > 0.1)
	{
		updateFov(ui.spinBox->value());
	}
}


void ModernWarfare2FOVChanger::updateGameStatus()
{
	GetExitCodeProcess(mem.getHandle(), exitCode);

	if (*exitCode == PROCESSRUNNING)
	{
		GameStatusLabel->setText("IW4SP.exe is running.");
		GameStatusLabel->setStyleSheet("color: rgb(0, 255, 0);"); //hardcode
		if (!isGameRunning)
			isGameRunning = true;

	}
	else
	{
		GameStatusLabel->setText("Waiting for IW4SP.exe...");
		GameStatusLabel->setStyleSheet("color: rgb(255, 0, 0);");//hardcode
		mem.open(windowName);
		if (isGameRunning)
			isGameRunning = false;
	}
}