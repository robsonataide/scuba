#-------------------------------------------------
#
# Project created by QtCreator 2015-07-18T20:13:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = scubav2
TEMPLATE = app


SOURCES += main.cpp\
        scuba.cpp \
    mergulho.cpp \
    padi.cpp

HEADERS  += scuba.h \
    mergulho.h \
    padi.h

FORMS    += scuba.ui
