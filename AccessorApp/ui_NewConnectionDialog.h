/********************************************************************************
** Form generated from reading UI file 'NewConnectionDialog.ui'
**
** Created: Sun Nov 28 17:23:31 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCONNECTIONDIALOG_H
#define UI_NEWCONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_NewConnectionDialog
{
public:
    QDialogButtonBox *buttonBox;
    QFrame *frame;
    QLabel *addressLabel;
    QLabel *portLabel;
    QLineEdit *addressLineEdit;
    QLineEdit *portLineEdit;
    QLabel *passCodeLabel;
    QLineEdit *passCodeLineEdit;

    void setupUi(QDialog *NewConnectionDialog)
    {
        if (NewConnectionDialog->objectName().isEmpty())
            NewConnectionDialog->setObjectName(QString::fromUtf8("NewConnectionDialog"));
        NewConnectionDialog->resize(491, 217);
        buttonBox = new QDialogButtonBox(NewConnectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(130, 180, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        frame = new QFrame(NewConnectionDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 471, 151));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        addressLabel = new QLabel(frame);
        addressLabel->setObjectName(QString::fromUtf8("addressLabel"));
        addressLabel->setGeometry(QRect(10, 20, 121, 17));
        portLabel = new QLabel(frame);
        portLabel->setObjectName(QString::fromUtf8("portLabel"));
        portLabel->setGeometry(QRect(10, 60, 111, 17));
        addressLineEdit = new QLineEdit(frame);
        addressLineEdit->setObjectName(QString::fromUtf8("addressLineEdit"));
        addressLineEdit->setGeometry(QRect(160, 20, 291, 27));
        portLineEdit = new QLineEdit(frame);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        portLineEdit->setGeometry(QRect(160, 60, 291, 27));
        passCodeLabel = new QLabel(frame);
        passCodeLabel->setObjectName(QString::fromUtf8("passCodeLabel"));
        passCodeLabel->setGeometry(QRect(10, 100, 111, 17));
        passCodeLineEdit = new QLineEdit(frame);
        passCodeLineEdit->setObjectName(QString::fromUtf8("passCodeLineEdit"));
        passCodeLineEdit->setGeometry(QRect(160, 100, 291, 27));
        passCodeLineEdit->setEchoMode(QLineEdit::Password);

        retranslateUi(NewConnectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewConnectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewConnectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *NewConnectionDialog)
    {
        NewConnectionDialog->setWindowTitle(QApplication::translate("NewConnectionDialog", "New Connection", 0, QApplication::UnicodeUTF8));
        addressLabel->setText(QApplication::translate("NewConnectionDialog", "Remote Address", 0, QApplication::UnicodeUTF8));
        portLabel->setText(QApplication::translate("NewConnectionDialog", "Port Number", 0, QApplication::UnicodeUTF8));
        passCodeLabel->setText(QApplication::translate("NewConnectionDialog", "Pass Code", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewConnectionDialog: public Ui_NewConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCONNECTIONDIALOG_H
