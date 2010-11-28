//Connection.h module for AccessorApp

#ifndef _CONNECTION_H_
#define _CONNECTION_H_

#include <QDialog>
#include "ConnectionData.h"
#include "ui_NewConnectionDialog.h"

class Connection : public ConnectionData
{
	Q_OBJECT
	public:
		Connection();
		QSize getPixmapSize();
		void setPixmapSize(QSize);
		void makeObjectConnections();
		bool isSendMoreTrue();
		bool setSendMore(bool);
		QPixmap getPixmap ();

	public slots:
		void sendRequest(enum Request);
		int readData();
		void acquireInfo();
		void establishConnection();
		
		void startSharing();		//starts sharing screen and sets REQUEST_MORE to true
		void requestForMore();
		void stopSharing();		//stops sharing screen and sets REQUEST_MORE to false

		void terminateConnection();
		
		

	signals:
		void pixmapSizeNeeded();
		void mPixmapReceived();
		void mConnectedReceived();
		void mStartedReceived();
		void mStoppedReceived();
		void mDisconnectedReceived();
	
	private:
		QPixmap pixmap;
		QSize 	pixmapSize;

		Ui::NewConnectionDialog newConnectionDialogUi;
		QDialog *newConnectionDialog;
		bool sendMore;
};

#endif
