TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp

HEADERS += \
    str_functions.h

QMAKE_CXXFLAGS += -std=c++11
