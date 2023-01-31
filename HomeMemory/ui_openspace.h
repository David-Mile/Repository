/********************************************************************************
** Form generated from reading UI file 'openspace.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENSPACE_H
#define UI_OPENSPACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenSpace
{
public:
    QPushButton *libUniBtn;

    void setupUi(QWidget *OpenSpace)
    {
        if (OpenSpace->objectName().isEmpty())
            OpenSpace->setObjectName(QStringLiteral("OpenSpace"));
        OpenSpace->resize(1800, 9004);
        libUniBtn = new QPushButton(OpenSpace);
        libUniBtn->setObjectName(QStringLiteral("libUniBtn"));
        libUniBtn->setGeometry(QRect(170, 110, 80, 24));

        retranslateUi(OpenSpace);

        QMetaObject::connectSlotsByName(OpenSpace);
    } // setupUi

    void retranslateUi(QWidget *OpenSpace)
    {
        OpenSpace->setWindowTitle(QApplication::translate("OpenSpace", "Form", nullptr));
        libUniBtn->setText(QApplication::translate("OpenSpace", "Libreria Uni", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpenSpace: public Ui_OpenSpace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENSPACE_H
