#include "sorttestpage.h"
#include "ui_sorttestpage.h"
#include "mainpagemanager.h"
#include <QLabel>

const QString SortTestPage::NAME = "SORT TEST";

SortTestPage::SortTestPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SortTestPage)
{
    ui->setupUi(this);

    connect(ui->buttonBack, SIGNAL(clicked()), this, SLOT(handleBackClicked()));
    connect(ui->buttonSort, SIGNAL(clicked()), this, SLOT(handleSortClicked()));
}

SortTestPage::~SortTestPage()
{
    delete ui;
}

void SortTestPage::handleSortClicked() {
    std::string input = ui->textEdit->toPlainText().toStdString();
    std::vector<std::string> inputs;

    for (unsigned int i = 0; i < input.size(); i++) {
        inputs.push_back(input.c_str() + i);
    }

    std::vector<std::string>::iterator it;

    for (it = inputs.begin(); it != inputs.end(); it++) {
        std::string str = *it;
        ui->horizontalLayout->addWidget(new QLabel(str.c_str()));
    }
}

void SortTestPage::handleBackClicked() {
    MainPageManager::getInstance().pop();
}
