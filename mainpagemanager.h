#ifndef QTTESTMAINWINDOW_H
#define QTTESTMAINWINDOW_H

#include <QListWidget>
#include <QMainWindow>
#include "WidgetManager.h"

namespace Ui {
class MainPageManager;
}

class MainPageManager : public QMainWindow, public WidgetManager
{
    Q_OBJECT

public:
    ~MainPageManager();
    static MainPageManager & getInstance();

    void push(QWidget * widget);
    void pop();
    void pop(QWidget * widget);
    void popTo(QWidget * widget);

private:
    MainPageManager();
    explicit MainPageManager(QWidget *parent = 0);

private slots:

private:
    Ui::MainPageManager *ui;
};

#endif // QTTESTMAINWINDOW_H
