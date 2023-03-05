#ifndef WCASA_H
#define WCASA_H

#include <QWidget>
#include <QStackedLayout>

#include "wsottoambienti.h"
#include "wsovraposizioni.h"

class WCasa : public QWidget
{
    Q_OBJECT
public:
    explicit WCasa(QWidget *parent = nullptr);

private slots:
    void libuniSignalIn();

signals:
    void libuniSignal();


private:
    QStackedLayout *stack;
    WSottoAmbienti *sottoambienti;
    WSovraPosizioni *sovraposizioni;

};

#endif // WCASA_H
