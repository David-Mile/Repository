#ifndef LIBUNI_H
#define LIBUNI_H

#include <QWidget>

namespace Ui {
class LibUni;
}

class LibUni : public QWidget
{
    Q_OBJECT

public:
    explicit LibUni(QWidget *parent = nullptr);
    ~LibUni();

private:
    Ui::LibUni *ui;
};

#endif // LIBUNI_H
