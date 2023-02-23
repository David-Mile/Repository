#include "wlogo.h"

#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

WLogo::WLogo(QWidget *parent)
    : QWidget{parent}
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *logoLabel = new QLabel();
    logoLabel->setText("Fantasy Brain Logo");
    logoLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(logoLabel);
    resize(1900,967); // -> use this
}
