#ifndef QTTESTMAINWINDOW_H
#define QTTESTMAINWINDOW_H

#include <QListWidget>
#include <QMainWindow>
#include "WidgetManager.h"

namespace Ui {
class QtTestMainWindow;
}

class QtTestMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    ~QtTestMainWindow();
    static QtTestMainWindow & getInstance();

    void pushWidget(QWidget * widget);
    void popWidget();
    void popAllWidgets();

private:
    QtTestMainWindow();
    explicit QtTestMainWindow(QWidget *parent = 0);

private slots:

private:
    Ui::QtTestMainWindow *ui;
};

#endif // QTTESTMAINWINDOW_H
