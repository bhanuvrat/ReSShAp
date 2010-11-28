#ifndef _SNAPSERVER_H_
#define _SNAPSERVER_H_

#include <QWidget>
#include "ui_SnapServer.h"
#include "Connection.h"


class SnapServer: public QObject
{
	Q_OBJECT
	public:
		SnapServer();

	public slots:
		void handleExitAction();
		void updateState();
		
	signals:
		void wantsToExit();
		
	private:
		Ui::SnapServerView snapServerView;
		Connection *connection;
		QWidget * widget;
		
};

#endif
