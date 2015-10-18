#include "testwidgetone.h"
#include "ui_testwidgetone.h"
#include "mainpagemanager.h"
#include "entity.h"

#include <QMessageBox>

const QString TestWidgetOne::NAME = "TEST WIDGET 1";

TestWidgetOne::TestWidgetOne(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestWidgetOne)
{
    ui->setupUi(this);

    Entity testObject1(1);
    Entity testObject2(2);

    connect(ui->buttonBack, SIGNAL(clicked()), this, SLOT(handleBackClicked()));
    connect(ui->buttonMessageBox, SIGNAL(clicked()), this, SLOT(handleMessageBoxClicked()));
}

TestWidgetOne::~TestWidgetOne()
{
    delete ui;
}

void TestWidgetOne::handleBackClicked() {
    MainPageManager::getInstance().pop();
}

void TestWidgetOne::handleMessageBoxClicked() {
    QMessageBox message;
    message.setText("TEST MESSAGE BOX");
    message.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    message.exec();
}
