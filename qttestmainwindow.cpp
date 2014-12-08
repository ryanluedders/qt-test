#include "qttestmainwindow.h"
#include "ui_qttestmainwindow.h"

#include <QMessageBox>
#include <QString>
#include <QWindow>

#include "testwidgetone.h"
#include "testwidgettwo.h"
#include "chooserpage.h"

static QtTestMainWindow * instance = 0;

QtTestMainWindow & QtTestMainWindow::getInstance() {
    if (instance == 0) {
        instance = new QtTestMainWindow(0);
    }
    return *instance;
}

QtTestMainWindow::QtTestMainWindow(QWidget * parent) :
    QMainWindow(parent),
    ui(new Ui::QtTestMainWindow)
{
    ui->setupUi(this);

    push(new ChooserPage());
}

QtTestMainWindow::~QtTestMainWindow() {
    delete ui;
}

void QtTestMainWindow::push(QWidget * widget) {
    ui->widgetStack->addWidget(widget);
    ui->widgetStack->setCurrentWidget(widget);
}

void QtTestMainWindow::pop() {
    if (ui->widgetStack->currentWidget() != 0) {
        pop(ui->widgetStack->currentWidget());
    }
}

void QtTestMainWindow::pop(QWidget * widget) {
    ui->widgetStack->removeWidget(widget);
}

void QtTestMainWindow::popTo(QWidget * widget) {
    if (ui->widgetStack->indexOf(widget) != -1) {
        while (ui->widgetStack->currentWidget() != widget) {
            pop(ui->widgetStack->currentWidget());
        }
    }
}
