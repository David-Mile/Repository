/********************************************************************************
** Form generated from reading UI file 'wopenspace.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WOPENSPACE_H
#define UI_WOPENSPACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WOpenSpace
{
public:
    QPushButton *libUniBtn;

    void setupUi(QWidget *WOpenSpace)
    {
        if (WOpenSpace->objectName().isEmpty())
            WOpenSpace->setObjectName(QString::fromUtf8("WOpenSpace"));
        WOpenSpace->resize(400, 300);
        libUniBtn = new QPushButton(WOpenSpace);
        libUniBtn->setObjectName(QString::fromUtf8("libUniBtn"));
        libUniBtn->setGeometry(QRect(90, 110, 80, 24));

        retranslateUi(WOpenSpace);

        QMetaObject::connectSlotsByName(WOpenSpace);
    } // setupUi

    void retranslateUi(QWidget *WOpenSpace)
    {
        WOpenSpace->setWindowTitle(QCoreApplication::translate("WOpenSpace", "Form", nullptr));
        libUniBtn->setText(QCoreApplication::translate("WOpenSpace", "Libreria Uni", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WOpenSpace: public Ui_WOpenSpace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WOPENSPACE_H
