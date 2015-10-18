#ifndef STRINGTESTS_H
#define STRINGTESTS_H

#include <QWidget>

namespace Ui {
class StringTests;
}

class StringTests : public QWidget
{
    Q_OBJECT

public:
    static const QString NAME;

public:
    explicit StringTests(QWidget *parent = 0);
    ~StringTests();

private slots:
    void handleBackClicked();

private:
    Ui::StringTests *ui;
};

#endif // STRINGTESTS_H
