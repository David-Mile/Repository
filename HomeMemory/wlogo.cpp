#include "wlogo.h"

#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

WLogo::WLogo(QWidget *parent)
    : QWidget{parent}
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    QLabel *logoLabel = new QLabel();
    logoLabel->setText("<html><head/><body><p align='center'><span style=' font-size:22pt; font-weight:700; color:#13b0b8;'>LOGO Fantasy Brain</span></p></body></html>");
    logoLabel->setAlignment(Qt::AlignCenter);
    layout->addWidget(logoLabel);
    resize(1900,967); // -> use this, I can use it including a file where I set the variable using #define statement
}
