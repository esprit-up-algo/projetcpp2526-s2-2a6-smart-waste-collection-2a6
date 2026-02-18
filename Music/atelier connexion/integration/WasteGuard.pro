QT       += core gui widgets sql charts multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
CONFIG += console

SOURCES += \
    connection.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    connection.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

RESOURCES += \
    logo.qrc
