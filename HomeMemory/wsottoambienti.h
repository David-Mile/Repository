#ifndef WSOTTOAMBIENTI_H
#define WSOTTOAMBIENTI_H

#include "wopenspace.h"

#include <QWidget>
#include <QStackedLayout>

class WSottoAmbienti : public QWidget
{
    Q_OBJECT
public:
    explicit WSottoAmbienti(QWidget *parent = nullptr);

signals:
    void libuniReESignal(); //ReE stands for re-emitted signal, since it is first emitted by openspace and then by sottoamienti to wcasa

private slots:
    void libuniReEmitter();

private:
     QStackedLayout *stack;
     WOpenSpace *openspace;

};

#endif // WSOTTOAMBIENTI_H
