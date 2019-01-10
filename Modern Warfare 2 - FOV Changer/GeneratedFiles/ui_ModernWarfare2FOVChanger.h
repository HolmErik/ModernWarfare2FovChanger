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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModernWarfare2FOVChangerClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *fovincrementlabel;
    QSpinBox *spinBox;
    QLabel *fovdecrementlabel;
    QLabel *GameStatusLabel;
    QLabel *fovlabel;
    QLabel *MW2;
    QPushButton *Exit;

    void setupUi(QMainWindow *ModernWarfare2FOVChangerClass)
    {
        if (ModernWarfare2FOVChangerClass->objectName().isEmpty())
            ModernWarfare2FOVChangerClass->setObjectName(QStringLiteral("ModernWarfare2FOVChangerClass"));
        ModernWarfare2FOVChangerClass->resize(282, 101);
        centralWidget = new QWidget(ModernWarfare2FOVChangerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        fovincrementlabel = new QLabel(centralWidget);
        fovincrementlabel->setObjectName(QStringLiteral("fovincrementlabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fovincrementlabel->sizePolicy().hasHeightForWidth());
        fovincrementlabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(fovincrementlabel, 2, 0, 1, 3);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        sizePolicy.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy);
        spinBox->setMinimum(50);
        spinBox->setMaximum(120);
        spinBox->setValue(90);

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        fovdecrementlabel = new QLabel(centralWidget);
        fovdecrementlabel->setObjectName(QStringLiteral("fovdecrementlabel"));
        sizePolicy.setHeightForWidth(fovdecrementlabel->sizePolicy().hasHeightForWidth());
        fovdecrementlabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(fovdecrementlabel, 3, 0, 1, 3);

        GameStatusLabel = new QLabel(centralWidget);
        GameStatusLabel->setObjectName(QStringLiteral("GameStatusLabel"));
        sizePolicy.setHeightForWidth(GameStatusLabel->sizePolicy().hasHeightForWidth());
        GameStatusLabel->setSizePolicy(sizePolicy);
        GameStatusLabel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        gridLayout->addWidget(GameStatusLabel, 4, 0, 1, 3);

        fovlabel = new QLabel(centralWidget);
        fovlabel->setObjectName(QStringLiteral("fovlabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fovlabel->sizePolicy().hasHeightForWidth());
        fovlabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(fovlabel, 1, 0, 1, 1);

        MW2 = new QLabel(centralWidget);
        MW2->setObjectName(QStringLiteral("MW2"));
        QSizePolicy sizePolicy2(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(MW2->sizePolicy().hasHeightForWidth());
        MW2->setSizePolicy(sizePolicy2);
        MW2->setStyleSheet(QStringLiteral("font: 36pt \"MS Shell Dlg 2\";"));
        MW2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(MW2, 1, 2, 2, 3);

        Exit = new QPushButton(centralWidget);
        Exit->setObjectName(QStringLiteral("Exit"));

        gridLayout->addWidget(Exit, 4, 3, 1, 1);

        ModernWarfare2FOVChangerClass->setCentralWidget(centralWidget);

        retranslateUi(ModernWarfare2FOVChangerClass);

        QMetaObject::connectSlotsByName(ModernWarfare2FOVChangerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ModernWarfare2FOVChangerClass)
    {
        ModernWarfare2FOVChangerClass->setWindowTitle(QApplication::translate("ModernWarfare2FOVChangerClass", "ModernWarfare2FOVChanger", nullptr));
        fovincrementlabel->setText(QApplication::translate("ModernWarfare2FOVChangerClass", "+ FOV  [Numpad +]", nullptr));
        fovdecrementlabel->setText(QApplication::translate("ModernWarfare2FOVChangerClass", "-  FOV  [Numpad -]", nullptr));
        GameStatusLabel->setText(QApplication::translate("ModernWarfare2FOVChangerClass", "Waiting for IW4SP.exe...", nullptr));
        fovlabel->setText(QApplication::translate("ModernWarfare2FOVChangerClass", "Field of view", nullptr));
        MW2->setText(QApplication::translate("ModernWarfare2FOVChangerClass", "MW2", nullptr));
        Exit->setText(QApplication::translate("ModernWarfare2FOVChangerClass", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModernWarfare2FOVChangerClass: public Ui_ModernWarfare2FOVChangerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODERNWARFARE2FOVCHANGER_H
