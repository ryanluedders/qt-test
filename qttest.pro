#-------------------------------------------------
#
# Project created by QtCreator 2014-12-04T19:11:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qttest
TEMPLATE = app

SOURCES += main.cpp\
        qttestmainwindow.cpp \
    testwidgetone.cpp \
    testwidgettwo.cpp \
    chooserpage.cpp \
    fibonacci.cpp \
    FibonacciUtils.cpp

HEADERS  += qttestmainwindow.h \
    testwidgetone.h \
    testwidgettwo.h \
    chooserpage.h \
    WidgetManager.h \
    fibonacci.h \
    FibonacciUtils.h

FORMS    += qttestmainwindow.ui \
    testwidgetone.ui \
    testwidgettwo.ui \
    chooserpage.ui \
    fibonacci.ui

# enable c++11 support
QMAKE_CXXFLAGS += -std=c++0x
CONFIG += c++11
