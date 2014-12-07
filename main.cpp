#include "qttestmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtTestMainWindow::getInstance().show();

    return a.exec();
}
