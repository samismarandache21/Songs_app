/********************************************************************************
** Form generated from reading UI file 'melodii2.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MELODII2_H
#define UI_MELODII2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_melodii2Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *melodii2Class)
    {
        if (melodii2Class->objectName().isEmpty())
            melodii2Class->setObjectName("melodii2Class");
        melodii2Class->resize(600, 400);
        menuBar = new QMenuBar(melodii2Class);
        menuBar->setObjectName("menuBar");
        melodii2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(melodii2Class);
        mainToolBar->setObjectName("mainToolBar");
        melodii2Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(melodii2Class);
        centralWidget->setObjectName("centralWidget");
        melodii2Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(melodii2Class);
        statusBar->setObjectName("statusBar");
        melodii2Class->setStatusBar(statusBar);

        retranslateUi(melodii2Class);

        QMetaObject::connectSlotsByName(melodii2Class);
    } // setupUi

    void retranslateUi(QMainWindow *melodii2Class)
    {
        melodii2Class->setWindowTitle(QCoreApplication::translate("melodii2Class", "melodii2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class melodii2Class: public Ui_melodii2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MELODII2_H
