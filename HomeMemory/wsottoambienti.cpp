#include "wsottoambienti.h"
#include "wopenspace.h"

#include <QStackedLayout>

WSottoAmbienti::WSottoAmbienti(QWidget *parent)
    : QWidget{parent}
{
    stack = new QStackedLayout(this);
    openspace = new WOpenSpace(this);
    stack->addWidget(openspace);

    connect(openspace,SIGNAL(libuniSignal()),this,SLOT(libuniReEmitter()));

}

void WSottoAmbienti::libuniReEmitter()
{
    emit libuniReESignal();
}

