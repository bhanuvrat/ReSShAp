#ifndef __ACCESSORAPP_H_
#define __ACCESSORAPP_H_

#include <QMainWindow>
#include <QWidget>
#include <QObject>
#include <QMessageBox>

#include "Connection.h"
#include "ui_AccessorApp.h"
#include "ui_NewConnectionDialog.h"
#include "ui_AccessorView.h"

class AccessorApp: public QMainWindow
{
	Q_OBJECT
	public:
		AccessorApp();
		
	public slots:
		void handleNewConnection();
		void handleStartAction();
		void saveImageLabelSize();
		void handleStopAction();
		void showPixmap();
		void handleExitAction();
		void displayAboutBox();

	signals:
		void wantsToExit();		//signal emitted when Exit is pressed;

	private:
		Connection *connection;

		Ui::AccessorApp ui_AccessorApp;
		Ui::AccessorView *ui_AccessorView;
		Ui::NewConnectionDialog *ui_NewConnectionDialog;
		QWidget *widget;
		
};


#endif
