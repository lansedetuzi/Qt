#-------------------------------------------------
#
# Project created by QtCreator 2016-11-03T00:29:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets multimedia multimediawidgets

TARGET = QStyleSheetDemo
TEMPLATE = app

INCLUDEPATH = include

SOURCES += \
        src\main.cpp\
        src\MainWindow.cpp \
        src\GScrollArea.cpp \
        src\GFileUtils.cpp

HEADERS  += \
        include\MainWindow.h \
        include\GScrollArea.h \
        include/GFileUtils.h

RESOURCES += \
    res/icon/icon.qrc \
    res/qss/qss.qrc
