#ifndef TESTWIDGETTWO_H
#define TESTWIDGETTWO_H

#include <QWidget>

namespace Ui {
class TestWidgetTwo;
}

class TestWidgetTwo : public QWidget
{
    Q_OBJECT

public:
    static const QString NAME;

public:
    explicit TestWidgetTwo(QWidget *parent = 0);
    ~TestWidgetTwo();

private slots:
    void handleBackClicked();

private:
    Ui::TestWidgetTwo *ui;
};

#endif // TESTWIDGETTWO_H
