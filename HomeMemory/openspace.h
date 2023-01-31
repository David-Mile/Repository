#ifndef OPENSPACE_H
#define OPENSPACE_H

#include <QWidget>

namespace Ui {
class OpenSpace;
}

class OpenSpace : public QWidget
{
    Q_OBJECT

public:
    explicit OpenSpace(QWidget *parent = nullptr);
    ~OpenSpace();


private:
    Ui::OpenSpace *ui;
};

#endif // OPENSPACE_H
