#ifndef WLIBUNI_H
#define WLIBUNI_H

#include <QWidget>

namespace Ui {
class WLibUni;
}

class WLibUni : public QWidget
{
    Q_OBJECT

public:
    explicit WLibUni(QWidget *parent = nullptr);
    ~WLibUni();

private:
    Ui::WLibUni *ui;
};

#endif // WLIBUNI_H
