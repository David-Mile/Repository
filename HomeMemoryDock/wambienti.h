#ifndef WAMBIENTI_H
#define WAMBIENTI_H

#include <QWidget>
#include <QStackedLayout>
#include <QScrollArea>
#include <QHBoxLayout>
#include <QPushButton>
#include <wcasa.h>
#include <wlogo.h>

class WAmbienti : public QWidget
{
    Q_OBJECT
public:
    explicit WAmbienti(QWidget *parent = nullptr);

private slots:
    void casaBtn_released();

signals:

private:
    WCasa *wcasa;
    WLogo *wlogo;
    QScrollArea *scrollCasa;
    QScrollArea *scrollLogo;
    QStackedLayout *stack;
    QHBoxLayout *hboxBtn;
    QPushButton *casaBtn;
    QPushButton *boxBtn;
    QPushButton *cantBtn;
};

#endif // WAMBIENTI_H
