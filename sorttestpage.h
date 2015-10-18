#ifndef SORTTESTPAGE_H
#define SORTTESTPAGE_H

#include <QWidget>

namespace Ui {
class SortTestPage;
}

class SortTestPage : public QWidget
{
    Q_OBJECT
public:
    static const QString NAME;

public:
    explicit SortTestPage(QWidget *parent = 0);
    ~SortTestPage();

private slots:
    void handleSortClicked();
    void handleBackClicked();

private:
    Ui::SortTestPage *ui;
};

#endif // SORTTESTPAGE_H
