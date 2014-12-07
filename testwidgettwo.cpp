#include "testwidgettwo.h"
#include "ui_testwidgettwo.h"
#include "qttestmainwindow.h"

const QString TestWidgetTwo::NAME = "TEST WIDGET 2";

TestWidgetTwo::TestWidgetTwo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestWidgetTwo)
{
    ui->setupUi(this);

    connect(ui->buttonBack, SIGNAL(clicked()), this, SLOT(handleBackClicked()));
}

TestWidgetTwo::~TestWidgetTwo()
{
    delete ui;
}

void TestWidgetTwo::handleBackClicked() {
    QtTestMainWindow::getInstance().popWidget();
}
