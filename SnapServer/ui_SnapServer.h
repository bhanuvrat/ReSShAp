/********************************************************************************
** Form generated from reading ui file 'SnapServer.ui'
**
** Created: Tue Aug 17 08:42:35 2010
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SNAPSERVER_H
#define UI_SNAPSERVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SnapServerView
{
public:
    QLabel *label;
    QLineEdit *portLineEdit;
    QLineEdit *stateLineEdit;
    QLabel *label_2;
    QPushButton *quitButton;

    void setupUi(QWidget *SnapServerView)
    {
        if (SnapServerView->objectName().isEmpty())
            SnapServerView->setObjectName(QString::fromUtf8("SnapServerView"));
        SnapServerView->resize(428, 239);
        label = new QLabel(SnapServerView);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 111, 18));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        portLineEdit = new QLineEdit(SnapServerView);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        portLineEdit->setEnabled(false);
        portLineEdit->setGeometry(QRect(170, 60, 231, 26));
        stateLineEdit = new QLineEdit(SnapServerView);
        stateLineEdit->setObjectName(QString::fromUtf8("stateLineEdit"));
        stateLineEdit->setEnabled(false);
        stateLineEdit->setGeometry(QRect(170, 110, 231, 26));
        label_2 = new QLabel(SnapServerView);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 110, 61, 18));
        quitButton = new QPushButton(SnapServerView);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));
        quitButton->setGeometry(QRect(290, 200, 91, 28));

        retranslateUi(SnapServerView);

        QMetaObject::connectSlotsByName(SnapServerView);
    } // setupUi

    void retranslateUi(QWidget *SnapServerView)
    {
        SnapServerView->setWindowTitle(QApplication::translate("SnapServerView", "SnapServer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SnapServerView", "Listening to port", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SnapServerView", "Status", 0, QApplication::UnicodeUTF8));
        quitButton->setText(QApplication::translate("SnapServerView", "Quit", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SnapServerView);
    } // retranslateUi

};

namespace Ui {
    class SnapServerView: public Ui_SnapServerView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNAPSERVER_H
