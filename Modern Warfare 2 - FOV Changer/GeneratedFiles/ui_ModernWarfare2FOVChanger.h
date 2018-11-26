/********************************************************************************
** Form generated from reading UI file 'ModernWarfare2FOVChanger.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODERNWARFARE2FOVCHANGER_H
#define UI_MODERNWARFARE2FOVCHANGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModernWarfare2FOVChangerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ModernWarfare2FOVChangerClass)
    {
        if (ModernWarfare2FOVChangerClass->objectName().isEmpty())
            ModernWarfare2FOVChangerClass->setObjectName(QStringLiteral("ModernWarfare2FOVChangerClass"));
        ModernWarfare2FOVChangerClass->resize(600, 400);
        menuBar = new QMenuBar(ModernWarfare2FOVChangerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ModernWarfare2FOVChangerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ModernWarfare2FOVChangerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ModernWarfare2FOVChangerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ModernWarfare2FOVChangerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ModernWarfare2FOVChangerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ModernWarfare2FOVChangerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ModernWarfare2FOVChangerClass->setStatusBar(statusBar);

        retranslateUi(ModernWarfare2FOVChangerClass);

        QMetaObject::connectSlotsByName(ModernWarfare2FOVChangerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ModernWarfare2FOVChangerClass)
    {
        ModernWarfare2FOVChangerClass->setWindowTitle(QApplication::translate("ModernWarfare2FOVChangerClass", "ModernWarfare2FOVChanger", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModernWarfare2FOVChangerClass: public Ui_ModernWarfare2FOVChangerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODERNWARFARE2FOVCHANGER_H
