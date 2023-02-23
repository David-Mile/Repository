/********************************************************************************
** Form generated from reading UI file 'WidCasa.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDCASA_H
#define UI_WIDCASA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidCasaClass
{
public:

    void setupUi(QWidget *WidCasaClass)
    {
        if (WidCasaClass->objectName().isEmpty())
            WidCasaClass->setObjectName(QString::fromUtf8("WidCasaClass"));
        WidCasaClass->resize(600, 400);

        retranslateUi(WidCasaClass);

        QMetaObject::connectSlotsByName(WidCasaClass);
    } // setupUi

    void retranslateUi(QWidget *WidCasaClass)
    {
        WidCasaClass->setWindowTitle(QCoreApplication::translate("WidCasaClass", "WidCasa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WidCasaClass: public Ui_WidCasaClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDCASA_H
