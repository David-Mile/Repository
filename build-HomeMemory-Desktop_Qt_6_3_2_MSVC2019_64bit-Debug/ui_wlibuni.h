/********************************************************************************
** Form generated from reading UI file 'wlibuni.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WLIBUNI_H
#define UI_WLIBUNI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WLibUni
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *scaf1Btn;
    QPushButton *ant1Btn;
    QPushButton *scaf2Btn;
    QPushButton *scaf3Btn;
    QPushButton *ant2Btn;
    QPushButton *ant3Btn;

    void setupUi(QWidget *WLibUni)
    {
        if (WLibUni->objectName().isEmpty())
            WLibUni->setObjectName(QString::fromUtf8("WLibUni"));
        WLibUni->resize(400, 428);
        verticalLayout = new QVBoxLayout(WLibUni);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(WLibUni);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(20, 70));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        label->setFont(font);
        label->setFrameShadow(QFrame::Plain);

        verticalLayout->addWidget(label);

        scaf1Btn = new QPushButton(WLibUni);
        scaf1Btn->setObjectName(QString::fromUtf8("scaf1Btn"));

        verticalLayout->addWidget(scaf1Btn);

        ant1Btn = new QPushButton(WLibUni);
        ant1Btn->setObjectName(QString::fromUtf8("ant1Btn"));

        verticalLayout->addWidget(ant1Btn);

        scaf2Btn = new QPushButton(WLibUni);
        scaf2Btn->setObjectName(QString::fromUtf8("scaf2Btn"));

        verticalLayout->addWidget(scaf2Btn);

        scaf3Btn = new QPushButton(WLibUni);
        scaf3Btn->setObjectName(QString::fromUtf8("scaf3Btn"));

        verticalLayout->addWidget(scaf3Btn);

        ant2Btn = new QPushButton(WLibUni);
        ant2Btn->setObjectName(QString::fromUtf8("ant2Btn"));

        verticalLayout->addWidget(ant2Btn);

        ant3Btn = new QPushButton(WLibUni);
        ant3Btn->setObjectName(QString::fromUtf8("ant3Btn"));

        verticalLayout->addWidget(ant3Btn);


        retranslateUi(WLibUni);

        QMetaObject::connectSlotsByName(WLibUni);
    } // setupUi

    void retranslateUi(QWidget *WLibUni)
    {
        WLibUni->setWindowTitle(QCoreApplication::translate("WLibUni", "Form", nullptr));
        label->setText(QCoreApplication::translate("WLibUni", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700;\">Libreria Universit\303\240 </span></p></body></html>", nullptr));
        scaf1Btn->setText(QCoreApplication::translate("WLibUni", "Primo Scaffale", nullptr));
        ant1Btn->setText(QCoreApplication::translate("WLibUni", "Prima Anta", nullptr));
        scaf2Btn->setText(QCoreApplication::translate("WLibUni", "Secondo Scaffale", nullptr));
        scaf3Btn->setText(QCoreApplication::translate("WLibUni", "Terzo Scaffale", nullptr));
        ant2Btn->setText(QCoreApplication::translate("WLibUni", "Seconda Anta", nullptr));
        ant3Btn->setText(QCoreApplication::translate("WLibUni", "Terza Anta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WLibUni: public Ui_WLibUni {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WLIBUNI_H
