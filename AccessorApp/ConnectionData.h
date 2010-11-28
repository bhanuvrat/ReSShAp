#ifndef _CONNECTIONDATA_H_
#define _CONNECTIONDATA_H_


#include <QObject>
#include <QString>
#include <QHostAddress>
#include <QTcpServer>
#include <QTcpSocket>

class ConnectionData : public QObject
{
	Q_OBJECT
	public:

		enum State 	
			{
				CONNECTING	= 1,
				CONNECTED	= 2,
				STARTING	= 3,
				STARTED		= 4,
				STOPPING	= 5,
				STOPPED		= 6,
				DISCONNECTING	= 7,
				DISCONNECTED	= 8
			};

		enum Message
			{
				PIXMAP			=100,
				MESSAGE_CONNECTED	=101,
				MESSAGE_STARTED		=102,
				MESSAGE_STOPPED		=103,
				MESSAGE_DISCONNECTED	=104
			};
		
		enum Request
			{
				REQUEST_CONNECT		=201,
				REQUEST_START_SHARING	=202,
				REQUEST_MORE		=203,
				REQUEST_STOP_SHARING	=204,
				REQUEST_DISCONNECT	=205
			};
				
		ConnectionData();
		
		QHostAddress getRemoteHostAddress();
		void setRemoteHostAddress (QString);
		void setRemoteHostAddress (QHostAddress);
		
		qint64 getRemoteServerPort();
		void setRemoteServerPort(QString);
		void setRemoteServerPort(int);

		qint64 getLocalServerPort();
		void setLocalServerPort(QString);
		void setLocalServerPort(int);

		void setPassCode (QString);
		QString getPassCode();

		void setState(State);
		qint64 getState();
/*
		friend std::istream& operator>> (std::istream &, enum State&);
		friend std::ostream& operator<< (std::ostream &, enum State&);
		
		friend std::istream& operator>> (std::istream &, enum Message&);
		friend std::ostream& operator<< (std::ostream &, enum Message&);
		
		friend std::istream& operator>> (std::istream &, enum Request&);
		friend std::ostream& operator<< (std::ostream &, enum Request&);


		friend QDataStream& operator>> (QDataStream &, enum State&);
		friend QDataStream& operator<< (QDataStream &, enum State&);
		
		friend QDataStream& operator>> (QDataStream &, enum Message&);
		friend QDataStream& operator<< (QDataStream &, enum Message&);
		
		friend QDataStream& operator>> (QDataStream &, enum Request&);
		friend QDataStream& operator<< (QDataStream &, enum Request&);
*/
		enum State intToState(int);
		QString stateToString(enum State);
		
		enum Message intToMessage(int);
		QString messageToString(enum Message);
	
		enum Request intToRequest(int);
		QString requestToString(enum Request);	

	public slots:
	
	signals:
		void stateChanged();		

	protected:
		QTcpServer *localServer;
		//QTcpSocket localSocket;
		//QTcpSocket remoteSocket;

		QHostAddress remoteHostAddress;
		
		qint64 remoteServerPort;
		qint64 localServerPort;

		QString passCode;

		enum State state;
};

#endif
