#include "ambienti.h"
#include "wcasa.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QScrollArea>
#include <QStackedLayout>


Ambienti::Ambienti(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *vboxAmb = new QVBoxLayout(this);

    Wcasa *wcasa = new Wcasa();
    wcasa->resize(1800,900); //set the same size in the ui file from QtDesigner.
    QScrollArea *scrollCasa = new QScrollArea();
    scrollCasa->setWidget(wcasa);
    QStackedLayout *stack = new QStackedLayout();
    stack->insertWidget(1,scrollCasa);
    vboxAmb->addLayout(stack);

    QHBoxLayout *hboxBtn = new QHBoxLayout();
    vboxAmb->addLayout(hboxBtn);
    QPushButton *casaBtn = new QPushButton();
    QPushButton *boxBtn = new QPushButton();
    QPushButton *cantBtn = new QPushButton();

    casaBtn->setText("Casa");
    boxBtn->setText("Box");
    cantBtn->setText("Cantina");
    hboxBtn->addWidget(casaBtn);
    hboxBtn->addWidget(boxBtn);
    hboxBtn->addWidget(cantBtn);
}

Ambienti::~Ambienti()
{
}

