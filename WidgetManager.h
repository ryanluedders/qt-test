#ifndef WIDGETMANAGER_H
#define WIDGETMANAGER_H

#include <memory>
#include <QWidget>

class WidgetManager {

public:

    virtual void push(QWidget * widget) = 0;

    virtual void push(std::shared_ptr<QWidget> widget) = 0;

    virtual void pop() = 0;

    virtual void pop(std::shared_ptr<QWidget> widget) = 0;

    virtual void popTo(std::shared_ptr<QWidget> widget) = 0;

};

#endif // WIDGETMANAGER_H
