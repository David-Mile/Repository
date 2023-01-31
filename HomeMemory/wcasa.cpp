#include "wcasa.h"
#include <QStackedLayout>
#include <openspace.h>
#include <libuni.h>
#include "ui_openspace.h"
#include "ui_libuni.h"


Wcasa::Wcasa(QWidget *parent) :
    QWidget(parent)
{
    openspace = new OpenSpace(this);
    libuni = new LibUni(this);
    // Ui_LibUni *libuni = new Ui_LibUni();
    // Ui_OpenSpace *openspace = new Ui_OpenSpace();
    QStackedLayout *stack = new QStackedLayout(this);
    stack->insertWidget(1,openspace);
    stack->insertWidget(2,libuni);

}

Wcasa::~Wcasa()
{
}


void Wcasa::setstack(QStackedLayout *stack, int index)
{
    stack->setCurrentIndex(index);
}


