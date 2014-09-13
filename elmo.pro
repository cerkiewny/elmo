#-------------------------------------------------
#
# Project created by QtCreator 2014-07-29T20:31:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = elmo
TEMPLATE = app


SOURCES += main.cpp\
        elmo.cpp \
    component.cpp \
    project.cpp \
    bitmapgenerator.cpp \
    displaymanager.cpp

HEADERS  += elmo.h \
    component.h \
    project.h \
    bitmapgenerator.h \
    displaymanager.h

FORMS    += elmo.ui

CONFIG += c++11
