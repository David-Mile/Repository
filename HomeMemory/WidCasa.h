#pragma once

#include <QWidget>
#include "ui_WidCasa.h"

class WidCasa : public QWidget
{
	Q_OBJECT

public:
	WidCasa(QWidget *parent = nullptr);
	~WidCasa();

private:
	Ui::WidCasaClass ui;
};
