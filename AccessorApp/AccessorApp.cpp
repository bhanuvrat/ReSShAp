#include "AccessorApp.h"

AccessorApp::AccessorApp()
{
	ui_AccessorApp.setupUi(this);

	this->resize (QSize(1280,800));

	QWidget *blankWidget = new QWidget;
	setCentralWidget(blankWidget);

	connect (this->ui_AccessorApp.actionNew_Connection, SIGNAL(triggered()), this, SLOT ( handleNewConnection()));
	connect (this->ui_AccessorApp.actionStart, SIGNAL(triggered()), this, SLOT(handleStartAction()));
	connect (this->ui_AccessorApp.actionStop, SIGNAL (triggered()), this, SLOT(handleStopAction()));
	connect (this->ui_AccessorApp.actionExit, SIGNAL (triggered()), this, SLOT(handleExitAction()));
	connect (this->ui_AccessorApp.actionAbout_AccessorApp_2, SIGNAL(triggered()),this, SLOT(displayAboutBox()));
}

void AccessorApp::handleNewConnection()
{
	connection = new Connection;
}

void AccessorApp::handleStartAction()
{
	widget = new QWidget;	
	ui_AccessorView = new Ui::AccessorView;
	ui_AccessorView->setupUi(widget);
	setCentralWidget (widget);

	qDebug()<<"AccessorApp:\tsizeof widget:\t"<<widget->size();
	

	connect(connection,SIGNAL(pixmapSizeNeeded()),this, SLOT(saveImageLabelSize()));
	connect(connection,SIGNAL(mPixmapReceived()),this,SLOT(showPixmap()));

	connection -> startSharing();
}

void AccessorApp::handleStopAction()
{
	connection->stopSharing();
}

void AccessorApp::saveImageLabelSize()
{
	connection->setPixmapSize(ui_AccessorView->imageLabel->size());
//	connection->setPixmapSize(this->size()i);
//	connection ->setPixmapSize(QSize(1280,800));
//	qDebug()<<"AccessorApp:\tSize of widget:\t"<<QSize(this->size().width(), this->size().height()-100);
}

void AccessorApp::showPixmap()
{
	qDebug()<<"AccessorApp: Dislpaying Recieved Pixmap";
	ui_AccessorView->imageLabel->setPixmap(connection->getPixmap());
}

void AccessorApp::handleExitAction()
{
	connection->stopSharing();
	if(connection)	delete connection;

	emit wantsToExit();
}

void AccessorApp::displayAboutBox()
{
	QMessageBox::about( this, "About AccessorApp",
        "AccessorApp is a Remote Screen Access Application\n\n"
        "It is an Open Source Software "
        "Refer to GNU/GPL for lisencing information\n\n"
        "Developer: Anuvrat Parashar\n"
        "Contact: bhanuvrat@gmail.com" );
}

