/********************************************************************************
** Form generated from reading UI file 'motorui2015.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTORUI2015_H
#define UI_MOTORUI2015_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_motorUI2015
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *motorUI2015)
    {
        if (motorUI2015->objectName().isEmpty())
            motorUI2015->setObjectName(QStringLiteral("motorUI2015"));
        motorUI2015->resize(400, 300);
        menuBar = new QMenuBar(motorUI2015);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        motorUI2015->setMenuBar(menuBar);
        mainToolBar = new QToolBar(motorUI2015);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        motorUI2015->addToolBar(mainToolBar);
        centralWidget = new QWidget(motorUI2015);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        motorUI2015->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(motorUI2015);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        motorUI2015->setStatusBar(statusBar);

        retranslateUi(motorUI2015);

        QMetaObject::connectSlotsByName(motorUI2015);
    } // setupUi

    void retranslateUi(QMainWindow *motorUI2015)
    {
        motorUI2015->setWindowTitle(QApplication::translate("motorUI2015", "motorUI2015", 0));
    } // retranslateUi

};

namespace Ui {
    class motorUI2015: public Ui_motorUI2015 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTORUI2015_H
