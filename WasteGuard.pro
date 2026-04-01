QT += core gui widgets sql charts multimedia multimediawidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
CONFIG += console

TARGET = WasteGuard

# Ensure every line except the last one has a backslash \
SOURCES += \
    connection.cpp \
    employe.cpp \
    main.cpp \
    mainwindow.cpp \
    mascotwidget.cpp \
    produit.cpp \
    stock.cpp \
<<<<<<< Updated upstream
    commande.cpp
=======
    commande.cpp \
    stockmapwidget.cpp \
    videogenerationdialog.cpp \
    accessibilityhelper.cpp \
    voiceassistant.cpp \
    labibassistant.cpp \
    emailnotificationmanager.cpp
>>>>>>> Stashed changes

HEADERS += \
    connection.h \
    employe.h \
    mainwindow.h \
    mascotwidget.h \
    produit.h \
    stock.h \
<<<<<<< Updated upstream
    commande.h
=======
    commande.h \
    stockmapwidget.h \
    videogenerationdialog.h \
    accessibilityhelper.h \
    voiceassistant.h \
    labibassistant.h \
    emailnotificationmanager.h
>>>>>>> Stashed changes

FORMS += \
    mainwindow.ui

RESOURCES += \
    logo.qrc

# Copier voice_engine.py dans le dossier de build
win32 {
    QMAKE_POST_LINK += $$quote(cmd /c "(copy /Y \"$$PWD\\voice_engine.py\" \"$$OUT_PWD\\voice_engine.py\" >nul || ver >nul)")
}
unix {
    QMAKE_POST_LINK += cp -f \"$$PWD/voice_engine.py\" \"$$OUT_PWD/voice_engine.py\" || true
}
