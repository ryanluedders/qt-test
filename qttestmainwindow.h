#ifndef QTTESTMAINWINDOW_H
#define QTTESTMAINWINDOW_H

#include <QListWidget>
#include <QMainWindow>
#include "WidgetManager.h"

namespace Ui {
class QtTestMainWindow;
}

class QtTestMainWindow : public QMainWindow, public WidgetManager
{
    Q_OBJECT

public:
    ~QtTestMainWindow();
    static QtTestMainWindow & getInstance();

    void push(QWidget * widget);
    void pop();
    void pop(QWidget * widget);
    void popTo(QWidget * widget);

private:
    QtTestMainWindow();
    explicit QtTestMainWindow(QWidget *parent = 0);

private slots:

private:
    Ui::QtTestMainWindow *ui;
};

#endif // QTTESTMAINWINDOW_H
