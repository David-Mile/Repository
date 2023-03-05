#include "wcasa.h"
#include "wsottoambienti.h"

#include <QStackedLayout>


WCasa::WCasa(QWidget *parent)
    : QWidget{parent}
{
    stack = new QStackedLayout(this);
    sottoambienti = new WSottoAmbienti(this);
    sovraposizioni = new WSovraPosizioni(this);
    stack->insertWidget(1,sottoambienti);
    stack->insertWidget(2,sovraposizioni);
    resize(1900,967);

    connect(sottoambienti,SIGNAL(libuniReESignal()),this,SLOT(libuniSignalIn()));
    connect(this,SIGNAL(libuniSignal()),sovraposizioni,SLOT(libuniEmitter()));
}

void WCasa::libuniSignalIn()
{
    stack->setCurrentWidget(sovraposizioni);
    emit libuniSignal();
}
