#ifndef WCASA_H
#define WCASA_H

#include <QWidget>
#include <QStackedLayout>
#include <libuni.h>
#include <openspace.h>

namespace Ui {
class Wcasa;
}

class Wcasa : public QWidget
{
    Q_OBJECT

public:
    explicit Wcasa(QWidget *parent = nullptr);
    ~Wcasa();

private slots:
    void setstack(QStackedLayout *stack, int index);

private:
    Ui::Wcasa *ui;
    LibUni *libuni;
    OpenSpace *openspace;
};

#endif // WCASA_H
