#ifndef WSOVRAPOSIZIONI_H
#define WSOVRAPOSIZIONI_H

#include "wlibuni.h"
#include "wlogo.h"

#include <QWidget>
#include <QStackedLayout>

class WSovraPosizioni : public QWidget
{
    Q_OBJECT
public:
    explicit WSovraPosizioni(QWidget *parent = nullptr);

private slots:
    void setLibUni();
    void libuniEmitter();

signals:
    void libuniSignal();

private:
    QStackedLayout *stack;
    WLibUni *libuni;
    WLogo *logo;


};

#endif // WSOVRAPOSIZIONI_H
