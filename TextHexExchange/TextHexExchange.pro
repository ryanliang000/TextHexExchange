# Created by and for Qt Creator This file was created for editing the project sources only.
# You may attempt to use it for building too, by modifying this file here.

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11

TARGET = TextHexExchange

HEADERS += \
   TextHexDecode.h \
   texthexexchange.h

SOURCES += \
   main.cpp \
   TextHexDecode.cpp \
   texthexexchange.cpp

FORMS += \
        texthexexchange.ui

DESTDIR = .

# Default rules for deployment.
#qnx: target.path = /tmp/$${TARGET}/bin
#else: unix:!android: target.path = /opt/$${TARGET}/bin
#!isEmpty(target.path): INSTALLS += target
