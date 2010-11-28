/********************************************************************************
** Form generated from reading UI file 'AccessorView.ui'
**
** Created: Sun Nov 28 17:23:31 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCESSORVIEW_H
#define UI_ACCESSORVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccessorView
{
public:
    QGridLayout *gridLayout;
    QLabel *imageLabel;

    void setupUi(QWidget *AccessorView)
    {
        if (AccessorView->objectName().isEmpty())
            AccessorView->setObjectName(QString::fromUtf8("AccessorView"));
        AccessorView->resize(513, 347);
        AccessorView->setMaximumSize(QSize(1600, 900));
        gridLayout = new QGridLayout(AccessorView);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        imageLabel = new QLabel(AccessorView);
        imageLabel->setObjectName(QString::fromUtf8("imageLabel"));
        imageLabel->setMinimumSize(QSize(640, 480));
        imageLabel->setMaximumSize(QSize(1600, 900));

        gridLayout->addWidget(imageLabel, 0, 0, 1, 1);


        retranslateUi(AccessorView);

        QMetaObject::connectSlotsByName(AccessorView);
    } // setupUi

    void retranslateUi(QWidget *AccessorView)
    {
        AccessorView->setWindowTitle(QApplication::translate("AccessorView", "AccessorView", 0, QApplication::UnicodeUTF8));
        imageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AccessorView: public Ui_AccessorView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCESSORVIEW_H
