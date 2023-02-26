#include "mainwindow.h"
#include "wambienti.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    WAmbienti *ambienti = new WAmbienti;
    setCentralWidget(ambienti);
    showMaximized();
}

MainWindow::~MainWindow()
{
}

