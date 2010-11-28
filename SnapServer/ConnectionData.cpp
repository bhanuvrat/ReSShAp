#include <QTextStream>

#include "ConnectionData.h"


ConnectionData::ConnectionData()
{
	qDebug()<<"ConnectionData:\tObject Created";
}

QHostAddress ConnectionData::getRemoteHostAddress()
{
	return remoteHostAddress;
}
                
void ConnectionData::setRemoteHostAddress (QString hostAddress)
{
	remoteHostAddress = QHostAddress(hostAddress);
}
                
void ConnectionData::setRemoteHostAddress (QHostAddress hostAddress)
{
	remoteHostAddress = hostAddress;
}

                
qint64 ConnectionData::getRemoteServerPort()
{
	return remoteServerPort;
}
                
void ConnectionData::setRemoteServerPort(QString port)
{
	remoteServerPort = port.toInt();
}
                
void ConnectionData::setRemoteServerPort(int port)
{
	remoteServerPort = port;
}

                
qint64 ConnectionData::getLocalServerPort()
{
	return localServerPort;
}
                
void ConnectionData::setLocalServerPort(QString port)
{
	localServerPort = port.toInt();
}
                
void ConnectionData::setLocalServerPort(int port)
{
	localServerPort = port;
}

void ConnectionData::setPassCode (QString passCode)
{
	this->passCode = passCode;
}

QString ConnectionData::getPassCode()
{
	return passCode;
}
                
void ConnectionData::setState( enum State state)
{
	this->state = state;
	emit stateChanged();
}
                
qint64 ConnectionData:: getState()
{
	return state;
}                

ConnectionData::State ConnectionData:: intToState (int intState)
{
	return (State) intState;
}

ConnectionData::Message ConnectionData:: intToMessage ( int intMessage)
{
	return (Message) intMessage;
}


ConnectionData::Request ConnectionData:: intToRequest (int intRequest)
{
	return (Request) intRequest;
}


QString ConnectionData::stateToString (ConnectionData::State state)
{
	switch (state)
	{
		case CONNECTING:	return QString("ConnectionData::CONNECTING");
		case CONNECTED:		return QString("ConnectionData::CONNECTED");
		case STARTING:		return QString("ConnectionData::STARTING");
		case STARTED:		return QString("ConnectionData::STARTED");	
		case STOPPING:		return QString("ConnectionData::STOPPING");	
		case STOPPED:		return QString("ConnectionData::STOPPED");	
		case DISCONNECTING:	return QString("ConnectionData::DISCONNECTING");	
		case DISCONNECTED:	return QString("ConnectionData::DISCONNECTED");	
	}
	return QString("");
}                

QString ConnectionData:: messageToString(enum Message message)
{
	switch(message)
	{
		case PIXMAP:			return QString ("ConnectionData::PIXMAP");
		case MESSAGE_CONNECTED:		return QString ("ConnectionData::MESSAGE_CONNECTED");
		case MESSAGE_STARTED:		return QString ("ConnectionData::MESSAGE_STARTED");	
		case MESSAGE_STOPPED:	 	return QString ("ConnectionData::MESSAGE_STOPPED");
		case MESSAGE_DISCONNECTED:	return QString ("ConnectionData::Message_DISCONNECTED");
	}
	return QString ("");
}
                
QString ConnectionData:: requestToString (enum Request request)
{
	switch(request)
	{
		case REQUEST_CONNECT:		return QString ("ConnectionData::REQUEST_CONNECT");
		case REQUEST_START_SHARING:	return QString ("ConnectionData::REQUEST_START_SHARING");
		case REQUEST_MORE:		return QString ("ConnectionData::REQUEST_MORE");
		case REQUEST_STOP_SHARING:	return QString ("ConnectionData::REQUEST_STOP_SHARING");
		case REQUEST_DISCONNECT:	return QString ("ConnectionData::REQUEST_DISCONNECT");
	}
	
	return QString ("");
}

