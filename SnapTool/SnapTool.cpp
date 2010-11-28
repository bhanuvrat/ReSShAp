#include "SnapTool.h"

SnapTool::SnapTool(int pWidth, int pHeight, int port, QString hostAddress)
{
	pixWidth =pWidth;
	pixHeight=pHeight;

	socket = new QTcpSocket();
	
	socket -> connectToHost(QHostAddress(hostAddress), port);

	qDebug()<<"SnapTool: socketState\t"<<socket->state();
	
	connect(socket, SIGNAL(connected()), this, SLOT(snapAndSend()));
	connect(socket, SIGNAL(disconnected()), this, SLOT(emitDone()));
}

void SnapTool::snapAndSend()
{
	qDebug()<<"SnapTool: codeblock \tsnapAndSend";
	qDebug()<<"SnapTool: \t\t"<<socket->state();

	pixmap = QPixmap::grabWindow(QApplication::desktop()->winId());
	
	qDebug()<<"SnapTool: pixmap\t screenshot taken";
	
	QDataStream out (&byteArray, QIODevice::WriteOnly);
	out<<static_cast<quint64>(0)<<PIXMAP;

			if(pixWidth/pixmap.size().width() > pixHeight/pixmap.size().height())
	{
		out<<pixmap.scaledToWidth(pixWidth);
		qDebug()<<"SnapTool:\tScaledToWidth:"<<pixmap.scaledToWidth (pixWidth).size();
	}
	else
	{
		qDebug()<<"SnapTool:\tScaledToHeight:\t"<<pixmap.scaledToHeight (pixHeight).size();
		out<<pixmap.scaledToHeight(pixHeight);
	}
	out.device()->seek(0);

	out<<static_cast<quint64>(byteArray.size() - sizeof(quint64));


	qDebug()<<"SnapTool: socketState\t"<<socket->state();
	qDebug()<<"SnapTool: size of byteArray\t"<< byteArray.size();

	qDebug()<<"SnapTool: write\t\t"<< socket->write(byteArray);

	qDebug()<<"SnapTool: bytes written\t"<<	socket->waitForBytesWritten();
	
	qDebug()<<"SnapTool: waiting for disconnect:\t"<< socket->waitForDisconnected();
}

void SnapTool::emitDone()
{
	qDebug()<<"SnapTool: codeblock\t emitDone";
	qDebug()<<"SnapTool: socketState:\t"<<socket->state();
	emit done();
}
