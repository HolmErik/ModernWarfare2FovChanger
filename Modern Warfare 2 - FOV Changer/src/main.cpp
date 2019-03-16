#include "ModernWarfare2FOVChanger.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ModernWarfare2FOVChanger w;


	w.show();
	return a.exec();
}
