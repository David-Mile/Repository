#ifndef AMBIENTI_H
#define AMBIENTI_H

#include <QWidget>
#include <QStackedLayout>
#include <QPushButton>
#include <QScrollArea>

class Ambienti : public QWidget
{
    Q_OBJECT

public:
    Ambienti(QWidget *parent = nullptr);
    ~Ambienti();

private slots:
    void setstack(QScrollArea *srollA, QStackedLayout *stack);

private:
    QPushButton *casaBtn;
};
#endif // AMBIENTI_H
