#include "chooserpage.h"
#include "ui_chooserpage.h"
#include "testwidgetone.h"
#include "testwidgettwo.h"
#include "qttestmainwindow.h"

ChooserPage::ChooserPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChooserPage)
{
    ui->setupUi(this);

    ui->listOfWidgets->addItem(TestWidgetOne::NAME);
    ui->listOfWidgets->addItem(TestWidgetTwo::NAME);

    connect(ui->buttonSelect, SIGNAL(clicked()), this, SLOT(handleSelectButton()));
}

ChooserPage::~ChooserPage()
{
    delete ui;
}

void ChooserPage::handleSelectButton() {
    if (ui->listOfWidgets->currentItem()->text() == TestWidgetOne::NAME) {
        TestWidgetOne * newPage = new TestWidgetOne();
        QtTestMainWindow::getInstance().pushWidget(newPage);
    } else if (ui->listOfWidgets->currentItem()->text() == TestWidgetTwo::NAME) {
        TestWidgetTwo * newPage = new TestWidgetTwo();
        QtTestMainWindow::getInstance().pushWidget(newPage);
    }
}
