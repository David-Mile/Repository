/********************************************************************************
** Form generated from reading UI file 'libuni.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBUNI_H
#define UI_LIBUNI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LibUni
{
public:
    QPushButton *Scaf1Btn;

    void setupUi(QWidget *LibUni)
    {
        if (LibUni->objectName().isEmpty())
            LibUni->setObjectName(QStringLiteral("LibUni"));
        LibUni->resize(478, 391);
        Scaf1Btn = new QPushButton(LibUni);
        Scaf1Btn->setObjectName(QStringLiteral("Scaf1Btn"));
        Scaf1Btn->setGeometry(QRect(130, 130, 80, 24));

        retranslateUi(LibUni);

        QMetaObject::connectSlotsByName(LibUni);
    } // setupUi

    void retranslateUi(QWidget *LibUni)
    {
        LibUni->setWindowTitle(QApplication::translate("LibUni", "Form", nullptr));
        Scaf1Btn->setText(QApplication::translate("LibUni", "Scaffale 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LibUni: public Ui_LibUni {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBUNI_H
