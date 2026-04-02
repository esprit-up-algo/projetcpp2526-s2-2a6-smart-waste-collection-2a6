QT       += core gui widgets sql charts printsupport multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

SOURCES += \
    client.cpp \
    commande.cpp \
    connection.cpp \
    employe.cpp \
    intervention.cpp \
    main.cpp \
    mainwindow.cpp \
    mascotwidget.cpp \
    produit.cpp

HEADERS += \
    client.h \
    commande.h \
    connection.h \
    employe.h \
    intervention.h \
    mainwindow.h \
    mascotwidget.h \
    produit.h

FORMS += \
    mainwindow.ui

RESOURCES += \
    logo.qrc
QT += sql
CONFIG += console
