#ifndef WOPENSPACE_H
#define WOPENSPACE_H

#include <QWidget>

namespace Ui {
class WOpenSpace;
}

class WOpenSpace : public QWidget
{
    Q_OBJECT

public:
    explicit WOpenSpace(QWidget *parent = nullptr);
    ~WOpenSpace();

signals:
    void libuniSignal();

private slots:
    void libuniEmitter();

private:
    Ui::WOpenSpace *ui;
};

#endif // WOPENSPACE_H
