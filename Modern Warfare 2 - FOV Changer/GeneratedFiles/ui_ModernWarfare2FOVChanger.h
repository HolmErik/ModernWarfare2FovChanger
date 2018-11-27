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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModernWarfare2FOVChangerClass
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSlider *horizontalSlider;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ModernWarfare2FOVChangerClass)
    {
        if (ModernWarfare2FOVChangerClass->objectName().isEmpty())
            ModernWarfare2FOVChangerClass->setObjectName(QStringLiteral("ModernWarfare2FOVChangerClass"));
        ModernWarfare2FOVChangerClass->resize(435, 361);
        centralWidget = new QWidget(ModernWarfare2FOVChangerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 145, 301, 75));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSlider = new QSlider(verticalLayoutWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider);

        plainTextEdit = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setEnabled(true);
        plainTextEdit->setMaximumSize(QSize(30, 30));

        horizontalLayout->addWidget(plainTextEdit);


        verticalLayout->addLayout(horizontalLayout);

        ModernWarfare2FOVChangerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ModernWarfare2FOVChangerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 435, 21));
        ModernWarfare2FOVChangerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ModernWarfare2FOVChangerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ModernWarfare2FOVChangerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
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
