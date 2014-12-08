#ifndef FIBONACCI_H
#define FIBONACCI_H

#include <QWidget>

namespace Ui {
class Fibonacci;
}

class Fibonacci : public QWidget
{
    Q_OBJECT

public:
    static const QString NAME;

public:
    explicit Fibonacci(QWidget *parent = 0);
    ~Fibonacci();

public slots:
    void handleBackClicked();

private:
    Ui::Fibonacci *ui;
};

#endif // FIBONACCI_H
