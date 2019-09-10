#**********************************************************
# Author: Qt君
# 微信公众号: Qt君
# QQ群: 732271126
# Email: 2088201923@qq.com
# LICENSE: MIT
#**********************************************************
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ListWidget
TEMPLATE = app

win32: RC_ICONS = app.ico

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui

LIB_FILE = C:/user/app/libtest.lib
LIB_FILE ~= s,/,\\,g
message($$LIB_FILE)
