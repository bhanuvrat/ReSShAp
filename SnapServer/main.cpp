#include <QtGui/QApplication>

#include "SnapServer.h"

int main ( int argc, char* argv[])
{
	QApplication app (argc, argv);
	
	SnapServer snapServer ;
	QObject::connect(&snapServer, SIGNAL(wantsToExit()), &app, SLOT(quit()));

	return app.exec();
}
