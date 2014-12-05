#ifndef QTTESTMAINWINDOW_H
#define QTTESTMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class QtTestMainWindow;
}

class QtTestMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QtTestMainWindow(QWidget *parent = 0);
    ~QtTestMainWindow();

private:
    Ui::QtTestMainWindow *ui;
};

#endif // QTTESTMAINWINDOW_H
