#include "wcasa.h"
#include <QStackedLayout>
//#include <openspace.h>
//#include <libuni.h>
#include <QtUiTools>


static QWidget *loadUiOpenSpace(QWidget *parent)
{
    QFile file(":/forms/openspace.ui");
    file.open(QIODevice::ReadWrite);

    QUiLoader loader;
    return loader.load(&file, parent);
}

static QWidget *loadUiLibUni(QWidget *parent)
{
    QFile file(":/forms/libuni.ui");
    file.open(QIODevice::ReadWrite);

    QUiLoader loader;
    return loader.load(&file, parent);
}

Wcasa::Wcasa(QWidget *parent) :
    QWidget(parent)
    
{

    QWidget *openspace = loadUiOpenSpace(this);
    QWidget *libuni = loadUiLibUni(this);

    QStackedLayout *stack = new QStackedLayout(this);
    stack->insertWidget(0,openspace);
    stack->insertWidget(1,libuni);
    //stack->setCurrentWidget(libuni);

    QPushButton *ui_libUniBtn = findChild<QPushButton*>("libUniBtn");
    //QMetaObject::connectSlotsByName(openspace);
    connect(ui_libUniBtn,SIGNAL(clicked()),this,SLOT(setstack(libuni,stack)));
    //connect(libuni->findChild<QPushButton*>("scaf1Btn"),SIGNAL(released()),this,SLOT(setstack(openspace,stack)));


}

Wcasa::~Wcasa()
{
}


void Wcasa::setstack(QWidget *widget, QStackedLayout *stack)
{
    stack->setCurrentWidget(widget);
}


