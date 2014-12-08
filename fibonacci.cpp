#include "fibonacci.h"
#include "ui_fibonacci.h"
#include "mainpagemanager.h"
#include "FibonacciUtils.h"

const QString Fibonacci::NAME = "FIBONACCI";

static const int NUMBER_TO_SHOW = 12;

Fibonacci::Fibonacci(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Fibonacci)
{
    ui->setupUi(this);

    for (int i=0; i<NUMBER_TO_SHOW; i++) {
        ui->gridLayout->addWidget(new QLabel(
            QString::number(FibonacciUtils::getNthFibonacci(i))));
    }

    connect(ui->buttonBack, SIGNAL(clicked()), this, SLOT(handleBackClicked()));
}

Fibonacci::~Fibonacci()
{
    delete ui;
}

void Fibonacci::handleBackClicked() {
    MainPageManager::getInstance().pop();
}
