#include "wlibuni.h"
#include "ui_wlibuni.h"

WLibUni::WLibUni(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WLibUni)
{
    ui->setupUi(this);
}

WLibUni::~WLibUni()
{
    delete ui;
}
