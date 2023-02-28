#include "wcasa.h"
#include "wsottoambienti.h"
#include "wlibuni.h"

#include <QStackedLayout>


WCasa::WCasa(QWidget *parent)
    : QWidget{parent}
{
    stack = new QStackedLayout(this);
    sottoambienti = new WSottoAmbienti(this);
    libuni = new WLibUni(this);
    stack->insertWidget(1,sottoambienti);
    stack->insertWidget(2,libuni);
    resize(1900,967);

    connect(sottoambienti,SIGNAL(libuniReESignal()),this,SLOT(libuniSignalIn()));
}

void WCasa::libuniSignalIn()
{
    stack->setCurrentWidget(libuni);
}
