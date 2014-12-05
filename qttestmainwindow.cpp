#include "qttestmainwindow.h"
#include "ui_qttestmainwindow.h"

#include <QString>
#include <QWindow>

QtTestMainWindow::QtTestMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QtTestMainWindow)
{
    ui->setupUi(this);

    connect(
        ui->buttonAdd,
        SIGNAL(released()),
        this,
        SLOT(addFileToList())
        );

    connect(
        ui->buttonRemove,
        SIGNAL(released()),
        this,
        SLOT(removeFile())
        );
}

QtTestMainWindow::~QtTestMainWindow()
{
    delete ui;
}

void QtTestMainWindow::addFileToList() {
    const QString fileString("filename");
    ui->listFiles->addItem(fileString);
}

void QtTestMainWindow::removeFile() {
    QList<QListWidgetItem*> selected = ui->listFiles->selectedItems();

    QList<QListWidgetItem*>::iterator it;
    for(it = selected.begin(); it != selected.end(); ++it) {
        ui->listFiles->removeItemWidget(*it);
    }
}
