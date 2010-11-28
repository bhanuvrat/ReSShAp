#include "SnapServer.h"

SnapServer::SnapServer()
{
        widget = new QWidget;
        snapServerView.setupUi(widget);
        widget->show();

        connect(snapServerView.quitButton, SIGNAL(clicked()), this, SLOT(handleExitAction()));
        connection = new Connection;
	snapServerView.portLineEdit->setText(QString::number(connection->getLocalServerPort()));
	connect(connection, SIGNAL(stateChanged()), this, SLOT(updateState()));
}

void SnapServer::handleExitAction()
{
        emit wantsToExit();
}

void SnapServer::updateState()
{
	snapServerView.stateLineEdit->setText((connection->stateToString(
		connection->intToState(connection->getState()))));
}
