#include "chooserpage.h"
#include "ui_chooserpage.h"
#include "fibonacci.h"
#include "testwidgetone.h"
#include "testwidgettwo.h"
#include "mainpagemanager.h"

ChooserPage::ChooserPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChooserPage)
{
    ui->setupUi(this);

    ui->listOfWidgets->addItem(TestWidgetOne::NAME);
    ui->listOfWidgets->addItem(TestWidgetTwo::NAME);
    ui->listOfWidgets->addItem(Fibonacci::NAME);

    connect(ui->buttonSelect, SIGNAL(clicked()), this, SLOT(handleSelectButton()));
}

ChooserPage::~ChooserPage()
{
    delete ui;
}

void ChooserPage::handleSelectButton() {
    if (ui->listOfWidgets->currentItem()->text() == TestWidgetOne::NAME) {
        TestWidgetOne * newPage = new TestWidgetOne();
        MainPageManager::getInstance().push(newPage);
    } else if (ui->listOfWidgets->currentItem()->text() == TestWidgetTwo::NAME) {
        TestWidgetTwo * newPage = new TestWidgetTwo();
        MainPageManager::getInstance().push(newPage);
    } else if (ui->listOfWidgets->currentItem()->text() == Fibonacci::NAME) {
        Fibonacci * newPage = new Fibonacci();
        MainPageManager::getInstance().push(newPage);
    }
}
