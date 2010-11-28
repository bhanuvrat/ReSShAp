//Connection.cpp attempt10
//
#include "Connection.h"

#define MAX_TRY 500

Connection::Connection() : ConnectionData()
{
        newConnectionDialog = new QDialog;
        newConnectionDialogUi.setupUi(newConnectionDialog);
        newConnectionDialog->show();
        localServer = new QTcpServer();
	makeObjectConnections();
        //connect(newConnectionDialogUi.buttonBox,SIGNAL(accepted()),  this, SLOT(acquireInfo()));
	setState(DISCONNECTED);
}

void Connection::makeObjectConnections()
{
        connect(newConnectionDialogUi.buttonBox,SIGNAL(accepted()),  this, SLOT(acquireInfo()));
}

QSize Connection::getPixmapSize()
{	
	return pixmapSize;
}

void Connection::setPixmapSize(QSize size)
{
	pixmapSize = size;
}

QPixmap Connection::getPixmap()
{
	return pixmap;
}

void Connection::acquireInfo()
{
        setRemoteHostAddress(newConnectionDialogUi.addressLineEdit->text());
        setRemoteServerPort (newConnectionDialogUi.portLineEdit->text());
        setPassCode(newConnectionDialogUi.passCodeLineEdit->text());

        establishConnection();
}

void Connection::establishConnection()
{
        localServer->listen(QHostAddress::Any, 0);

	//settign localServerPort .. this will be sent over network to snapServer
	//and this is where AccessorApp's localServer is listening
	
        setLocalServerPort (localServer->serverPort());
        qDebug()<<"AccessorApp:\tConnection:\tisListening:\t"<<localServer->isListening();
	qDebug()<<"AccessorApp:\tConnection:\tlocalServerPort"<<getLocalServerPort();
	qDebug()<<"AccessorApp:\tConnection:\tremoteHostAddress"<<getRemoteHostAddress(); 

        connect(localServer, SIGNAL(newConnection()), this, SLOT(readData()));
        connect(this, SIGNAL(mConnectedReceived()),this, SLOT(processMConnectedReceived()));
	connect(this, SIGNAL(mPixmapReceived()), this, SLOT(requestForMore()));
        sendRequest(REQUEST_CONNECT);
}

void Connection::startSharing()
{
	sendRequest(REQUEST_START_SHARING);
}

void Connection::requestForMore()
{
	if (getState() != STOPPING && getState() != STOPPED)
	{
		sendRequest(REQUEST_MORE);
	}
}

void Connection::stopSharing()
{
	sendRequest(REQUEST_STOP_SHARING);
}

void Connection::terminateConnection()
{

}

int Connection::readData()
{

	//invoked upon newConnection() event 
	//i.e whenever SnapServer tries to contact AccessorApp
	//and send some data .... this block reads it and processes it

	QTcpSocket *remoteSocket;	//socket for reading stuff off local tcpServer
	qint64 bytesAvailable; 	// local variable for keeping a track of bytes Available
	qint64 bytesExpected;	// local variable for keeping track of bytes Expected
	QDataStream in;
	enum Message message;

	int temp; 		//converting enums

	qDebug()<<"AccessorApp:\tConnection:\thasPendingConnections:\t"<<localServer->hasPendingConnections();
	
	remoteSocket = localServer->nextPendingConnection();

	qDebug()<<"AccessorApp:\tConnection:\tserverSocket:\t" << remoteSocket -> state();
	qDebug()<<"AccessorApp:\tConnection:\tserverSocket:\twaitForReadyRead()" << remoteSocket->waitForReadyRead();

	if( remoteSocket->bytesAvailable() > 0)
	{		
		qDebug()<<"AccessorApp:\tConnection:\tbytesAvailable > 0";
		in.setDevice (remoteSocket);
	}
	else
	{
		qDebug()<<"AccessorApp:\tConnection:\tNO DATA TO READ -- ERROR";
		remoteSocket->disconnectFromHost();
		qDebug()<<"AccessorApp:\tConnection:\t remoteSocket\t"<<remoteSocket->state();
		return -1;
	}

	in>>bytesExpected;		//extracting the amount of bytes to be expected;
	
	for(int ctr =0; ctr< MAX_TRY ; ctr++) //check 20 times before quitting
	{
		bytesAvailable=remoteSocket->bytesAvailable();
		qDebug()<<"\t\t\tbytesAvailable: "<<bytesAvailable<<"\tbytesExpected: "<<bytesExpected;
		if( bytesAvailable < bytesExpected )
		{
			if(ctr == MAX_TRY-1)
			{
				qDebug()<<"AccessorApp:\tConnection:\tNever Received Expected Bytes :(";
				return -1;
			}
			
			qDebug()<<"AccessorApp:\tConnection:\tLess Bytes Available";
			remoteSocket->waitForReadyRead();
		}
		else
		{
			qDebug()<<"AccessorApp:\tConnection:\tReceived Expected bytes";
			break;
		}
	}
	
	in >> temp;
	message = intToMessage(temp);
	qDebug()<<"AccessorApp:\tConnection\t:Message:\t" << messageToString(message);

	switch(message)
	{
		case PIXMAP:	
			in>>pixmap;
			qDebug()<<"AccessorApp:\tConnection:\tCASEPIXMAPENCOUNTERED";
			remoteSocket->disconnectFromHost();
			emit mPixmapReceived();
			setState(STARTED);
			break;
			
		case MESSAGE_CONNECTED:
			//to do add the code here;
			//
			setState(CONNECTED);
			emit mConnectedReceived();

			remoteSocket->disconnectFromHost();
			break;
		
		case MESSAGE_STARTED:
			//to do add the code here;
			//
			setState(STARTED);
			emit mStartedReceived();

			remoteSocket->disconnectFromHost();
			break;

		case MESSAGE_STOPPED:
			//to do - add the code here;
			//
			setState(STOPPED);
			emit mStoppedReceived();

			remoteSocket->disconnectFromHost();
			break;

		case MESSAGE_DISCONNECTED:
			//to do - add the code here;
			//
			setState(DISCONNECTED);
			emit mDisconnectedReceived();

			remoteSocket->disconnectFromHost();
			break;
	}
	qDebug()<<"AccessorApp:\treadData\t:remoteSocket"<<remoteSocket->state();
}


void Connection::sendRequest(Request request)
{
	qDebug() << "AccessorApp:\tsendRequest:\tEnteringBlock";
	QByteArray byteArray;
	QDataStream out ( &byteArray, QIODevice::WriteOnly);
	
	QTcpSocket* localSocket = new QTcpSocket;	//localSocket for writing data

	localSocket -> connectToHost(this->getRemoteHostAddress(), this->getRemoteServerPort());

	qDebug()<<"AccessorApp:\tsendRequest:\tlocalSocket\tremoteHostAddress:\t"<<getRemoteHostAddress();
	qDebug()<<"AccessorApp:\tsendRequest:\tlocalSocket\tRemoteServerPort:\t"<<this->getRemoteServerPort();
	
	qDebug()<<"AccessorApp:\tsendRequest:\tlocalSocket\t"<<localSocket->state();
	
	out<<static_cast <qint64>(0);

	switch (request)
	{
		case REQUEST_CONNECT:
			if(getState() != DISCONNECTED) break;
			// sending the dataType the passCode and AccessorApp's serverPort address
			out<< REQUEST_CONNECT << getPassCode() << getLocalServerPort();
			break;

		case REQUEST_START_SHARING:
			if(getState() != CONNECTED && getState() != STOPPED) break;
			emit pixmapSizeNeeded();
			out<< REQUEST_START_SHARING<<getPixmapSize();
			
			qDebug()<<"delete this code:" <<getPixmapSize();
			setState (STARTING);
			break;
		
		case REQUEST_MORE:
			if(getState() != STARTED) break;
			emit pixmapSizeNeeded();
			out<< REQUEST_MORE<<getPixmapSize();
			qDebug()<<"delete this code:"<<getPixmapSize();
			break;

		case REQUEST_STOP_SHARING:
			if(getState() != STARTED && getState() != CONNECTED) break;
			out<< REQUEST_STOP_SHARING;
			setState(STOPPING);
			break;

		case REQUEST_DISCONNECT:
			out<< REQUEST_DISCONNECT;
			break;
		default: break;
	}
	
	out.device() -> seek (0);
	out << static_cast <qint64> (byteArray.size() - sizeof (qint64));

	qDebug()<<"AccessorApp:\tsendRequest\tlocalSocket\twaitForConnected:\t" <<localSocket->waitForConnected();
	qDebug()<<"AccessorApp:\tsendRequest\tlocalSocket\tstate:\t" <<localSocket -> state();
	qDebug()<<"AccessorApp:\tsendRequest\tlocalSocket\twrite:\t" <<localSocket -> write (byteArray);
	qDebug()<<"AccessorApp:\tsendRequest\tlocalSocket\tstate:\t" <<localSocket -> state();
//	qDebug()<<"AccessorApp:\tsendRequest\tlocalSocket\twaitForDisconnected:\t" <<localSocket -> waitForDisconnected();
	
	qDebug()<<"AccessorApp:\tsendRequest\tleavingBlock";
}

