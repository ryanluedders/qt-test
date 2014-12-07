#ifndef TESTWIDGETONE_H
#define TESTWIDGETONE_H

#include <QWidget>

namespace Ui {
class TestWidgetOne;
}

class TestWidgetOne : public QWidget
{
    Q_OBJECT

public:
    static const QString NAME;

public:
    explicit TestWidgetOne(QWidget *parent = 0);
    ~TestWidgetOne();

private slots:
    void handleBackClicked();
    void handleMessageBoxClicked();

private:
    Ui::TestWidgetOne *ui;
};

#endif // TESTWIDGETONE_H
