#include "testwindowone.h"
#include "ui_testwindowone.h"

TestWindowOne::TestWindowOne(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestWindowOne)
{
    ui->setupUi(this);

    connect(ui->buttonBack, SIGNAL(clicked()), this, SLOT(closeWindow()));
}

TestWindowOne::~TestWindowOne()
{
    delete ui;
}

void TestWindowOne::closeWindow() {
    this->close();
}
