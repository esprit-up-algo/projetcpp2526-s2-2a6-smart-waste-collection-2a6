<<<<<<< HEAD
QT       += core gui sql charts
=======
QT       += core gui widgets sql charts multimedia multimediawidgets
>>>>>>> 2a1db57 (atelier connexion)

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
<<<<<<< HEAD

SOURCES += \
=======
CONFIG += console

SOURCES += \
    connection.cpp \
>>>>>>> 2a1db57 (atelier connexion)
    main.cpp \
    mainwindow.cpp

HEADERS += \
<<<<<<< HEAD
=======
    connection.h \
>>>>>>> 2a1db57 (atelier connexion)
    mainwindow.h

FORMS += \
    mainwindow.ui

RESOURCES += \
    logo.qrc
