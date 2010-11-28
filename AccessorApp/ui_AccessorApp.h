/********************************************************************************
** Form generated from reading UI file 'AccessorApp.ui'
**
** Created: Sun Nov 28 17:23:31 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCESSORAPP_H
#define UI_ACCESSORAPP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccessorApp
{
public:
    QAction *actionAbout_AccessorApp;
    QAction *actionHelp;
    QAction *actionNew_Connection;
    QAction *actionExit;
    QAction *actionStart;
    QAction *actionStop;
    QAction *actionFull_Screen;
    QAction *actionDifferent_Window;
    QAction *actionAbout_AccessorApp_2;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuMain_Menu;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AccessorApp)
    {
        if (AccessorApp->objectName().isEmpty())
            AccessorApp->setObjectName(QString::fromUtf8("AccessorApp"));
        AccessorApp->resize(800, 592);
        AccessorApp->setMaximumSize(QSize(1600, 900));
        actionAbout_AccessorApp = new QAction(AccessorApp);
        actionAbout_AccessorApp->setObjectName(QString::fromUtf8("actionAbout_AccessorApp"));
        actionHelp = new QAction(AccessorApp);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionNew_Connection = new QAction(AccessorApp);
        actionNew_Connection->setObjectName(QString::fromUtf8("actionNew_Connection"));
        actionExit = new QAction(AccessorApp);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionStart = new QAction(AccessorApp);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionStop = new QAction(AccessorApp);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionFull_Screen = new QAction(AccessorApp);
        actionFull_Screen->setObjectName(QString::fromUtf8("actionFull_Screen"));
        actionDifferent_Window = new QAction(AccessorApp);
        actionDifferent_Window->setObjectName(QString::fromUtf8("actionDifferent_Window"));
        actionAbout_AccessorApp_2 = new QAction(AccessorApp);
        actionAbout_AccessorApp_2->setObjectName(QString::fromUtf8("actionAbout_AccessorApp_2"));
        centralwidget = new QWidget(AccessorApp);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(800, 547));
        AccessorApp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AccessorApp);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menuMain_Menu = new QMenu(menubar);
        menuMain_Menu->setObjectName(QString::fromUtf8("menuMain_Menu"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        AccessorApp->setMenuBar(menubar);
        statusbar = new QStatusBar(AccessorApp);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AccessorApp->setStatusBar(statusbar);

        menubar->addAction(menuMain_Menu->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuMain_Menu->addAction(actionNew_Connection);
        menuMain_Menu->addSeparator();
        menuMain_Menu->addAction(actionStart);
        menuMain_Menu->addAction(actionStop);
        menuMain_Menu->addSeparator();
        menuMain_Menu->addAction(actionExit);
        menuAbout->addAction(actionAbout_AccessorApp_2);

        retranslateUi(AccessorApp);

        QMetaObject::connectSlotsByName(AccessorApp);
    } // setupUi

    void retranslateUi(QMainWindow *AccessorApp)
    {
        AccessorApp->setWindowTitle(QApplication::translate("AccessorApp", "AccessorApp", 0, QApplication::UnicodeUTF8));
        actionAbout_AccessorApp->setText(QApplication::translate("AccessorApp", "About AccessorApp", 0, QApplication::UnicodeUTF8));
        actionHelp->setText(QApplication::translate("AccessorApp", "Help", 0, QApplication::UnicodeUTF8));
        actionNew_Connection->setText(QApplication::translate("AccessorApp", "New Connection", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("AccessorApp", "Exit", 0, QApplication::UnicodeUTF8));
        actionStart->setText(QApplication::translate("AccessorApp", "Start", 0, QApplication::UnicodeUTF8));
        actionStop->setText(QApplication::translate("AccessorApp", "Stop", 0, QApplication::UnicodeUTF8));
        actionFull_Screen->setText(QApplication::translate("AccessorApp", "Full Screen", 0, QApplication::UnicodeUTF8));
        actionDifferent_Window->setText(QApplication::translate("AccessorApp", "Different Window", 0, QApplication::UnicodeUTF8));
        actionAbout_AccessorApp_2->setText(QApplication::translate("AccessorApp", "About AccessorApp", 0, QApplication::UnicodeUTF8));
        menuMain_Menu->setTitle(QApplication::translate("AccessorApp", "Main Menu", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("AccessorApp", "About", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AccessorApp: public Ui_AccessorApp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCESSORAPP_H
