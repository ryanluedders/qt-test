#ifndef CHOOSERPAGE_H
#define CHOOSERPAGE_H

#include <QWidget>

namespace Ui {
class ChooserPage;
}

class ChooserPage : public QWidget
{
    Q_OBJECT

public:
    explicit ChooserPage(QWidget *parent = 0);
    ~ChooserPage();

private slots:
    void handleSelectButton();

private:
    Ui::ChooserPage *ui;
};

#endif // CHOOSERPAGE_H
