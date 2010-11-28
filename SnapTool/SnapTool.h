#ifndef _SNAPTOOL_H
#define _SNAPTOOL_H

#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QHostAddress>
#include <QtGui/QApplication>
#include <QtGui/QDesktopWidget>
#include <QtGui/QPixmap>
#include <QString>

#define PIXMAP 100	//instead of passing the value every time, its been #defined

class SnapTool : public QObject
{
	Q_OBJECT
	public:
		SnapTool(int, int, int, QString );

	public slots:
		void snapAndSend();
		void emitDone();
	
	signals: 
		void done();
	
	private:
		QPixmap pixmap;
		QTcpSocket *socket;
		QByteArray byteArray;
		qint64 blockSize;
		int pixWidth;
		int pixHeight;
		
};

#endif 
