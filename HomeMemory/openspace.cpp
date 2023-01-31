#include "openspace.h"
#include "ui_openspace.h"

OpenSpace::OpenSpace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OpenSpace)
{
    ui->setupUi(this);
}

OpenSpace::~OpenSpace()
{
    delete ui;
}



