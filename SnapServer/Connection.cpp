#include "Connection.h"

Connection::Connection()
{
	localServer = new QTcpServer();
	
	localServer -> listen(QHostAddress::Any, 0);

	qDebug()<<"Connection:\tlocalServer:\tisListening:\t"<<localServer->isListening();
	qDebug()<<"Connection:\tlocalServer:\tserverPort:\t"<<localServer->serverPort();
	qDebug()<<"Connection:\tlocalServer:\tremoteHost:\t"<<getRemoteHostAddress();   

	setLocalServerPort(localServer->serverPort());
	connect(localServer, SIGNAL(newConnection()), this, SLOT(processRequest()));
	setState (DISCONNECTED);
	
}

void Connection::setPixmapSize(QSize size)
{
	pixmapSize=size;
}

QSize Connection::getPixmapSize()
{
	return pixmapSize;
}

void Connection::processRequest()
{
	qint64 bytesExpected;	//size of packed specified at sender's end
	qint64 bytesAvailable;  //amount of bytes recieved
	Request request;	//dataType
	QString xPassCode;
	QDataStream in;
	int temp;		//converting request
	int flagSnapTool;

	QWidget widget;
	
	qDebug()<<"SnapServer:\tproccessRequest:\tblockEntered";

	qDebug()<<"SnapServer:\tprocessRequest:\thasPendingConnection?\t"<<localServer->hasPendingConnections();
	QTcpSocket *localSocket = localServer->nextPendingConnection();
	
	in.setDevice (localSocket);

	qDebug()<<"SnapServer:\tprocessRequest:\twaitForReadyRead\t"<<localSocket->waitForReadyRead();
	
	in>>bytesExpected;
	qDebug()<<"SnapServer:\tprocessRequest:\tbytesExpected:\t"<<bytesExpected;
	for(int i=0; i<20; i++)
	{
		if(bytesExpected == localSocket->bytesAvailable())
		{
			break;
		}
		localSocket -> waitForReadyRead();
	}
	in>>temp;
	request = intToRequest(temp);
	qDebug()<<"SnapServer:\tprocessRequest:\tRequest:\t"<<requestToString(request);

	QByteArray byteArray;
	QDataStream out (&byteArray, QIODevice::WriteOnly);

	out<<static_cast<qint64>(0);
	flagSnapTool =0;
	switch (request)
	{
		case REQUEST_CONNECT:
				if(getState() != DISCONNECTED) break;
				//extracting passCode and AccessorApp's Port number
				in>>passCode>>remoteServerPort;
				
				qDebug()<<"SnapServer:\trecieved REQUEST_CONNECT\t";
				bool ok;
				xPassCode = QInputDialog::getText(&widget,"Enter Passcode","Incoming Connection",QLineEdit::Password,"", &ok);
				if(passCode != xPassCode) 
				{
					return;
				}

				setRemoteHostAddress(localSocket->peerAddress());
				localSocket -> disconnectFromHost();

				out<<MESSAGE_CONNECTED;
				setState(CONNECTED);
				break;
				
		case REQUEST_START_SHARING:
				if(getState() != CONNECTED && getState() != STOPPED) break;
				//extracting the size of pixmap to send
				qDebug()<<"SnapServer:\trecieved REQUEST_START\t";
				in>>pixmapSize;

				localSocket -> disconnectFromHost();
				flagSnapTool =1;
				out<<MESSAGE_STARTED;
				setState(STARTED);
				//return;
				break;
				
		case REQUEST_MORE:
				if(getState() !=  STARTED) break;
				qDebug()<<"SnapServer:\trecieved REQUEST_MORE\t";
				in>>pixmapSize;

				//qDebug()<<"SnapServer:\tlocalSocket->disconnect:\t"<<
				localSocket -> disconnectFromHost();
				qDebug()<<"SnapServer:\tlocalSocket->state:\t"<<localSocket->state();
				flagSnapTool =1;
				break;
		case REQUEST_STOP_SHARING:
				if(getState() != STARTED) break;
				//recieved request to stop
				qDebug()<<"SnapServer:\trecieved REQUEST_STOP\t";
				out<<MESSAGE_STOPPED;
				setState(STOPPED);
				break;

		case REQUEST_DISCONNECT:
				//recieved request to terminate
				qDebug()<<"SnapServer:\trecieved REQUEST_TERMINATE\t";
				setState(DISCONNECTED);
				out<<MESSAGE_DISCONNECTED;
				break;
	}
	qDebug()<<"SnapServer:\tlocalSocket:\tstate: "<<localSocket->state();

	out.device()->seek(0);
	out << static_cast <qint64> (byteArray.size() - sizeof (qint64));
	
	QTcpSocket *remoteSocket = new QTcpSocket;
	remoteSocket -> connectToHost(getRemoteHostAddress(), getRemoteServerPort());
	qDebug()<<"SnapServer:\tremoteHostAddress:\t"<<getRemoteHostAddress();
	qDebug()<<"SnapServer:\tremoteServerPort:\t"<<getRemoteServerPort();
	qDebug()<<"SnapServer:\tremoteSocket:\tstate:\t"<< remoteSocket->state();
	qDebug()<<"SnapServer:\tremoteSocket:\twaitForConnected:\t"<< remoteSocket -> waitForConnected();
	qDebug()<<"SnapServer:\tremoteSocket:\tbytesWritten:\t"<<remoteSocket -> write(byteArray);	
	qDebug()<<"SnapServer:\tremoteSocket:\twaitForBytesWritten:\t"<<remoteSocket -> waitForBytesWritten();
//	qDebug()<<"SnapServer:\tremotesocket:\twaitForDisconnected:\t"<<remoteSocket -> waitForDisconnected();

	if(flagSnapTool) invokeSnapTool();
}

void Connection::invokeSnapTool()
{
	QString path (PATH);
	QStringList arguments;

	arguments << QString("%1").arg(pixmapSize.width()) << QString("%1").arg(pixmapSize.height())
			<<QString("%1").arg(getRemoteServerPort())<<getRemoteHostAddress().toString();

	qDebug()<<"SnapServer:\tSize of Pixmap to be sent:\t"<<pixmapSize;

	QProcess *snapTool = new QProcess (this);
	snapTool -> setProcessChannelMode( QProcess::ForwardedChannels);
	snapTool -> start (path, arguments,QIODevice::NotOpen);
	
	qDebug()<<"SnapServer:\tSnapTool:\twaitForStarted:\t"<<snapTool->waitForStarted();
	
	qDebug()<<"SnapServer:\tSnapTool:\twaitForFinished:\t"<<snapTool->waitForFinished();
	
	qDebug()<<"SnapServer:\tisListening:\t"<<localServer->isListening();
}
