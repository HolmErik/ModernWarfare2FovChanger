#include "ModernWarfare2FOVChanger.h"
#include <iostream>

ModernWarfare2FOVChanger::ModernWarfare2FOVChanger(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowTitle("MW2 FoV Changer");

	AllocConsole();
	freopen("CONOUT$", "w", stdout);
	//make sure the game status is updated every half second
	GameStatusLabel = findChild<QLabel*>("GameStatusLabel");
	connect(GameStatusTimer, SIGNAL(timeout()), this, SLOT(updateGameStatus()));
	connect(ui.spinBox, SIGNAL(valueChanged(int)), this, SLOT(updateFov(int)));
	GameStatusTimer->start(updateGameStatusTime);
}

ModernWarfare2FOVChanger::~ModernWarfare2FOVChanger()
{
	FreeConsole();
	delete exitCode;
}



void ModernWarfare2FOVChanger::updateFov(int fov)
{
	std::cout << "REE" << std::endl;
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