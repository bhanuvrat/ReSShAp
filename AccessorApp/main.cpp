#include <QtGui/QApplication>

#include "AccessorApp.h"
//#include "AccessorView.h"

int main (int argc, char* argv[])
{
	qDebug()<<"AccessorApp: \t Started.";
	QApplication app ( argc, argv);
	
	AccessorApp accessorApp;// = new AccessorApp;
	accessorApp.show();

	QObject::connect( &accessorApp, SIGNAL(wantsToExit()), &app, SLOT (quit()));
	
	return app.exec();
}
