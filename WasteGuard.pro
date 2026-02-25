<<<<<<< HEAD
QT       += core gui widgets sql charts multimedia multimediawidgets
=======
<<<<<<< HEAD
<<<<<<< HEAD
QT       += core gui sql charts
=======
QT       += core gui widgets sql charts multimedia multimediawidgets
>>>>>>> 2a1db57 (atelier connexion)
=======
QT       += core gui widgets sql charts multimedia multimediawidgets
>>>>>>> a6aef5d (Ajout de l'interface de login et corrections)
>>>>>>> origin/gestion-employee

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
<<<<<<< HEAD

SOURCES += \
<<<<<<< HEAD
    connection.cpp \
    employe.cpp \
=======
=======
CONFIG += console

SOURCES += \
    connection.cpp \
>>>>>>> 2a1db57 (atelier connexion)
>>>>>>> origin/gestion-employee
    main.cpp \
    mainwindow.cpp \
    mascotwidget.cpp

HEADERS += \
<<<<<<< HEAD
    connection.h \
    employe.h \
    mainwindow.h \
    mascotwidget.h
=======
<<<<<<< HEAD
=======
    connection.h \
>>>>>>> 2a1db57 (atelier connexion)
    mainwindow.h
>>>>>>> origin/gestion-employee

FORMS += \
    mainwindow.ui

RESOURCES += \
    logo.qrc
QT += sql
CONFIG += console
