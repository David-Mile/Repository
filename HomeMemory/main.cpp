#include "ambienti.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Ambienti w;
    w.show();
    w.resize(1200, 800);
    return a.exec();
}
