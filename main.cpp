#include "mainpagemanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainPageManager::getInstance().show();

    return a.exec();
}
