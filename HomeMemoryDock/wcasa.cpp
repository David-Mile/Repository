#include "wcasa.h"
#include "wopenspace.h"
#include "wlibuni.h"

#include <QStackedLayout>
#include <QLabel>

WCasa::WCasa(QWidget *parent)
    : QWidget{parent}
{
    stack = new QStackedLayout(this);
    openspace = new WOpenSpace(this);
    libuni = new WLibUni(this);
    stack->insertWidget(1,openspace);
    stack->insertWidget(2,libuni);
    resize(1900,967);

    connect(openspace,SIGNAL(libuniSignal()),this,SLOT(libuniSignalIn()));
}

void WCasa::libuniSignalIn()
{
    stack->setCurrentWidget(libuni);
}
