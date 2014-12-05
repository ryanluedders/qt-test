#include "qttestmainwindow.h"
#include "ui_qttestmainwindow.h"

QtTestMainWindow::QtTestMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtTestMainWindow)
{
    ui->setupUi(this);
}

QtTestMainWindow::~QtTestMainWindow()
{
    delete ui;
}
