#ifndef _CONNECTION_H_
#define _CONNECTION_H_

#include <QPixmap>
#include <QProcess>
#include <QString>
#include <QStringList>
#include <QInputDialog>
#include <QLineEdit>
#include <QSize>
#include <QWidget>
#include "ConnectionData.h"

#define PATH "../SnapTool/SnapTool"

class Connection : public ConnectionData
{
	Q_OBJECT
	public:
		Connection();
		QSize getPixmapSize();
	
	public slots:
		void processRequest();
		void invokeSnapTool();
		void setPixmapSize(QSize);
	
	signals:
		void rConnectRecieved();
		void rStartSharingRecieved();
		void rSendMoreRecieved();
		void rStopSharingRecieved();
		void rDisconnectRecieved();

	private:
		QPixmap pixmap;
		QSize pixmapSize;
	
		bool sendMore;
};

#endif
