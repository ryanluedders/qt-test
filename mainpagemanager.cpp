#include "mainpagemanager.h"
#include "ui_mainpagemanager.h"

#include <QMessageBox>
#include <QString>
#include <QWindow>

#include "testwidgetone.h"
#include "testwidgettwo.h"
#include "chooserpage.h"

static MainPageManager * instance = 0;

MainPageManager & MainPageManager::getInstance() {
    if (instance == 0) {
        instance = new MainPageManager(0);
    }
    return *instance;
}

MainPageManager::MainPageManager(QWidget * parent) :
    QMainWindow(parent),
    ui(new Ui::MainPageManager)
{
    ui->setupUi(this);

    push(new ChooserPage());
}

MainPageManager::~MainPageManager() {
    delete ui;
}

void MainPageManager::push(QWidget * widget) {
    ui->widgetStack->addWidget(widget);
    ui->widgetStack->setCurrentWidget(widget);
}

void MainPageManager::pop() {
    if (ui->widgetStack->currentWidget() != 0) {
        pop(ui->widgetStack->currentWidget());
    }
}

void MainPageManager::pop(QWidget * widget) {
    ui->widgetStack->removeWidget(widget);
}

void MainPageManager::popTo(QWidget * widget) {
    if (ui->widgetStack->indexOf(widget) != -1) {
        while (ui->widgetStack->currentWidget() != widget) {
            pop(ui->widgetStack->currentWidget());
        }
    }
}
