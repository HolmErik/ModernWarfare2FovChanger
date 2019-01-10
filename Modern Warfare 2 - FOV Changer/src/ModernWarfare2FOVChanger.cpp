#include "ModernWarfare2FOVChanger.h"
ModernWarfare2FOVChanger::ModernWarfare2FOVChanger(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setWindowTitle("MW2 FOV changer");
	mem.open("Untitled - Notepad");


	//make sure the game status is updated every second
	GameStatusLabel = findChild<QLabel*>("GameStatusLabel");
	connect(GameStatusTimer, SIGNAL(timeout()), this, SLOT(updateGameStatus()));
	GameStatusTimer->start(500);
}

ModernWarfare2FOVChanger::~ModernWarfare2FOVChanger()
{
	delete exitCode;
}

void ModernWarfare2FOVChanger::updateGameStatus()
{
	//i have no idea what im doing when it comes to handles
	GetExitCodeProcess(mem.getHandle(), exitCode);

	if (*exitCode == PROCESSRUNNING)
	{
		GameStatusLabel->setText("IW4SP.exe is running.");
		GameStatusLabel->setStyleSheet("color: rgb(0, 255, 0);"); //hardcode

	}
	else
	{
		GameStatusLabel->setText("Waiting for IW4SP.exe...");
		GameStatusLabel->setStyleSheet("color: rgb(255, 0, 0);");//hardcode
		mem.open(windowName);
	}
}