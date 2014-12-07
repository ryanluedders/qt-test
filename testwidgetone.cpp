#include "testwidgetone.h"
#include "ui_testwidgetone.h"
#include "qttestmainwindow.h"

#include <QMessageBox>

const QString TestWidgetOne::NAME = "TEST WIDGET 1";

TestWidgetOne::TestWidgetOne(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestWidgetOne)
{
    ui->setupUi(this);

    connect(ui->buttonBack, SIGNAL(clicked()), this, SLOT(handleBackClicked()));
    connect(ui->buttonMessageBox, SIGNAL(clicked()), this, SLOT(handleMessageBoxClicked()));
}

TestWidgetOne::~TestWidgetOne()
{
    delete ui;
}

void TestWidgetOne::handleBackClicked() {
    QtTestMainWindow::getInstance().popWidget();
}

void TestWidgetOne::handleMessageBoxClicked() {
    QMessageBox message;
    message.setText("TEST MESSAGE BOX");
    message.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    message.exec();
}
