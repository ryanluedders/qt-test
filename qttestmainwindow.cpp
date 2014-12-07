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

    pushWidget(new ChooserPage());
}

QtTestMainWindow::~QtTestMainWindow() {
    delete ui;
}

void QtTestMainWindow::pushWidget(QWidget *widget) {
    ui->widgetStack->addWidget(widget);
    ui->widgetStack->setCurrentWidget(widget);
}

void QtTestMainWindow::popWidget() {
    if (ui->widgetStack->currentWidget() != 0) {
        ui->widgetStack->removeWidget(ui->widgetStack->currentWidget());
    }
}

void QtTestMainWindow::popAllWidgets() {
    while (ui->widgetStack->currentWidget() != 0) {
        popWidget();
    }
}
