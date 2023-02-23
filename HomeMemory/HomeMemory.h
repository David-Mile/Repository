#pragma once

#include <QtWidgets/QWidget>
#include "ui_HomeMemory.h"

class HomeMemory : public QWidget
{
    Q_OBJECT

public:
    HomeMemory(QWidget *parent = nullptr);
    ~HomeMemory();

private:
    Ui::HomeMemoryClass ui;
};
