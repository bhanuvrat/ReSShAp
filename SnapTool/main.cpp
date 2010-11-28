#include <QtGui/QApplication>
#include <QObject>

#include "SnapTool.h"

int main(int argc, char* argv[])
{	
	QApplication app (argc, argv);
	
	qDebug()<<"SnapTool: \trunning";

	SnapTool snapTool (QString(argv[1]).toInt(), QString(argv[2]).toInt(),QString(argv[3]).toInt(), QString(argv[4]));

	qDebug()<<QString(argv[1]).toInt()<<" "<< QString(argv[2]).toInt()<<" "<<QString(argv[3]).toInt()<<" "<< QString(argv[4]);


	QObject::connect( &snapTool, SIGNAL(done()), &app, SLOT(quit()));
	
	return(app.exec());
}
	
