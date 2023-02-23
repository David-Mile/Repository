#include "wopenspace.h"
#include "ui_wopenspace.h"

WOpenSpace::WOpenSpace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WOpenSpace)
{
    ui->setupUi(this);

    connect(ui->libUniBtn,SIGNAL(released()),this,SLOT(libuniEmitter()));
}

WOpenSpace::~WOpenSpace()
{
    delete ui;
}
void WOpenSpace::libuniEmitter()
{
    emit libuniSignal();
}
