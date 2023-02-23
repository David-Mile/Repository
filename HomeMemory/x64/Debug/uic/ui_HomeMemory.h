/********************************************************************************
** Form generated from reading UI file 'HomeMemory.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEMEMORY_H
#define UI_HOMEMEMORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeMemoryClass
{
public:

    void setupUi(QWidget *HomeMemoryClass)
    {
        if (HomeMemoryClass->objectName().isEmpty())
            HomeMemoryClass->setObjectName(QString::fromUtf8("HomeMemoryClass"));
        HomeMemoryClass->resize(600, 400);

        retranslateUi(HomeMemoryClass);

        QMetaObject::connectSlotsByName(HomeMemoryClass);
    } // setupUi

    void retranslateUi(QWidget *HomeMemoryClass)
    {
        HomeMemoryClass->setWindowTitle(QCoreApplication::translate("HomeMemoryClass", "HomeMemory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomeMemoryClass: public Ui_HomeMemoryClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEMEMORY_H
