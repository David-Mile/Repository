#include "ambienti.h"
#include "wcasa.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QScrollArea>
#include <QStackedLayout>
#include <QtUiTools>

static QWidget *loadUiLogo(QWidget *parent)
{
    QFile file(":/forms/logo.ui");
    file.open(QIODevice::ReadWrite);

    QUiLoader loader;
    return loader.load(&file, parent);
}

Ambienti::Ambienti(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *vboxAmb = new QVBoxLayout(this);

    Wcasa *wcasa = new Wcasa();
    QWidget *logo = loadUiLogo(this);
    wcasa->resize(1800,900); //set the same size in the ui file from QtDesigner.
    logo->resize(1800,900);
    QScrollArea *scrollCasa = new QScrollArea();
    QScrollArea *scrollLogo = new QScrollArea();
    scrollCasa->setWidget(wcasa);
    scrollLogo->setWidget(logo);
    QStackedLayout *stack = new QStackedLayout();
    stack->addWidget(scrollCasa);
    stack->addWidget(scrollLogo);
    stack->setCurrentWidget(scrollLogo);
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

    connect(casaBtn,SIGNAL(released()),this,SLOT(setstack(scrollCasa,stack)));


}

Ambienti::~Ambienti()
{
}

void Ambienti::setstack(QScrollArea *scrollA, QStackedLayout *stack)
{
     stack->setCurrentWidget(scrollA);
}
