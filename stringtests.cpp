#include "stringtests.h"
#include "ui_stringtests.h"
#include "mainpagemanager.h"

const QString StringTests::NAME = "STRING TESTS";

StringTests::StringTests(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StringTests)
{
    ui->setupUi(this);

    char * testString1 = "test string 1";
    std::string testString2 = "test string 2";

    char testString3[20];
    memset(testString3, 0, 20);
    strncpy(testString3, "test string 3", 20);

    QString testString4("test string 4");

    // build a string from test string 1 & 2
    char combineString1[40];
    memset(combineString1, 0, 40);
    strncpy(combineString1, testString1, 40);
    strncpy(combineString1 + strlen(testString1), " ", 40);
    strncpy(combineString1 + strlen(testString1) + 1, testString2.c_str(), 40);

    ui->gridLayout->addWidget(new QLabel(testString1));
    ui->gridLayout->addWidget(new QLabel(testString2.c_str()));
    ui->gridLayout->addWidget(new QLabel(testString3));
    ui->gridLayout->addWidget(new QLabel(testString4));
    ui->gridLayout->addWidget(new QLabel(combineString1));

    connect(ui->buttonBack, SIGNAL(clicked()), this, SLOT(handleBackClicked()));
}

StringTests::~StringTests()
{
    delete ui;
}

void StringTests::handleBackClicked() {
    MainPageManager::getInstance().pop();
}
