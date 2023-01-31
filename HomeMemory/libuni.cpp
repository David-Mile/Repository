#include "libuni.h"
#include "ui_libuni.h"

LibUni::LibUni(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LibUni)
{
    ui->setupUi(this);
}

LibUni::~LibUni()
{
    delete ui;
}
