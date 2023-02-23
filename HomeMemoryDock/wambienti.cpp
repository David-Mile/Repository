    #include "wambienti.h"
#include "wcasa.h"
#include "wlogo.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QScrollArea>
#include <QStackedLayout>
#include <QPushButton>

WAmbienti::WAmbienti(QWidget *parent)
    : QWidget{parent}
{
    QVBoxLayout *vboxAmb = new QVBoxLayout(this);

    wcasa = new WCasa(this);
    wlogo = new WLogo(this);
    scrollCasa = new QScrollArea(this);
    scrollLogo = new QScrollArea(this);
    scrollCasa->setWidget(wcasa);
    scrollLogo->setWidget(wlogo);
    stack = new QStackedLayout(this);
    stack->addWidget(scrollCasa);
    stack->addWidget(scrollLogo);
    stack->setCurrentWidget(scrollLogo);
    vboxAmb->addLayout(stack);

    hboxBtn = new QHBoxLayout(this);
    vboxAmb->addLayout(hboxBtn);
    casaBtn = new QPushButton(this);
    boxBtn = new QPushButton(this);
    cantBtn = new QPushButton(this);

    casaBtn->setText("Casa");
    boxBtn->setText("Box");
    cantBtn->setText("Cantina");
    hboxBtn->addWidget(casaBtn);
    hboxBtn->addWidget(boxBtn);
    hboxBtn->addWidget(cantBtn);

    connect(casaBtn,SIGNAL(released()),this, SLOT(casaBtn_released())); //-> Qui devo fare uno slot che inserisce WCasa come attivo nello stack, perchè non lo riconosce? Devo passare a casaBtn il Qwidget su cui voglio che agisca!

}

void WAmbienti::casaBtn_released()
{
    stack->setCurrentWidget(scrollCasa);
}
