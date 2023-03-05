#include "wsovraposizioni.h"
#include "wlibuni.h"
#include "wlogo.h"

#include <QStackedLayout>

WSovraPosizioni::WSovraPosizioni(QWidget *parent)
    : QWidget{parent}
{
    stack = new QStackedLayout(this);
    logo = new WLogo(this);
    libuni = new WLibUni(this);
    stack->addWidget(libuni);
    stack->addWidget(logo);

    //connect(this,SIGNAL(libuniSignal()),this,SLOT(setLibUni())); //ma perchè no richiamo semplicemente lo slot set

}

void WSovraPosizioni::setLibUni()
{
    stack->setCurrentWidget(logo);
}

void WSovraPosizioni::libuniEmitter()
{
    emit libuniSignal();
}
