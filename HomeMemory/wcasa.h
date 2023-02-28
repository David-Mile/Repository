#ifndef WCASA_H
#define WCASA_H

#include <QWidget>
#include <QStackedLayout>

#include "wsottoambienti.h"
#include "wlibuni.h"

class WCasa : public QWidget
{
    Q_OBJECT
public:
    explicit WCasa(QWidget *parent = nullptr);

private slots:
    void libuniSignalIn();

private:
    QStackedLayout *stack;
    WSottoAmbienti *sottoambienti;
    WLibUni *libuni;

};

#endif // WCASA_H
