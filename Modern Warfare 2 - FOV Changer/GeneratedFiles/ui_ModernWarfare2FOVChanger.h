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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModernWarfare2FOVChangerClass
{
public:
    QWidget *centralWidget;
    QFormLayout *formLayout_2;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *GameStatusLabel;

    void setupUi(QMainWindow *ModernWarfare2FOVChangerClass)
    {
        if (ModernWarfare2FOVChangerClass->objectName().isEmpty())
            ModernWarfare2FOVChangerClass->setObjectName(QStringLiteral("ModernWarfare2FOVChangerClass"));
        ModernWarfare2FOVChangerClass->resize(268, 101);
        centralWidget = new QWidget(ModernWarfare2FOVChangerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        formLayout_2 = new QFormLayout(centralWidget);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy);
        spinBox->setMinimum(50);
        spinBox->setMaximum(120);
        spinBox->setValue(90);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spinBox);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, label_2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, label_3);

        GameStatusLabel = new QLabel(centralWidget);
        GameStatusLabel->setObjectName(QStringLiteral("GameStatusLabel"));
        sizePolicy.setHeightForWidth(GameStatusLabel->sizePolicy().hasHeightForWidth());
        GameStatusLabel->setSizePolicy(sizePolicy);
        GameStatusLabel->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, GameStatusLabel);

        ModernWarfare2FOVChangerClass->setCentralWidget(centralWidget);

        retranslateUi(ModernWarfare2FOVChangerClass);

        QMetaObject::connectSlotsByName(ModernWarfare2FOVChangerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ModernWarfare2FOVChangerClass)
    {
        ModernWarfare2FOVChangerClass->setWindowTitle(QApplication::translate("ModernWarfare2FOVChangerClass", "ModernWarfare2FOVChanger", nullptr));
        label->setText(QApplication::translate("ModernWarfare2FOVChangerClass", "Field of view", nullptr));
        label_2->setText(QApplication::translate("ModernWarfare2FOVChangerClass", "+ FOV  [Numpad +]", nullptr));
        label_3->setText(QApplication::translate("ModernWarfare2FOVChangerClass", "-  FOV  [Numpad -]", nullptr));
        GameStatusLabel->setText(QApplication::translate("ModernWarfare2FOVChangerClass", "Waiting for IW4SP.exe...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModernWarfare2FOVChangerClass: public Ui_ModernWarfare2FOVChangerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODERNWARFARE2FOVCHANGER_H
