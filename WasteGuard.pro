QT       += core gui widgets sql charts multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    connection.cpp \
    employe.cpp \
    main.cpp \
    mainwindow.cpp \
    mascotwidget.cpp

HEADERS += \
    connection.h \
    employe.h \
    mainwindow.h \
    mascotwidget.h

FORMS += \
    mainwindow.ui

RESOURCES += \
    logo.qrc
QT += sql
CONFIG += console
