#include "qttestmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtTestMainWindow w;
    w.show();

    return a.exec();
}
