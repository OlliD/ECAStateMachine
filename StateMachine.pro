#-------------------------------------------------
#
# Project created by QtCreator 2010-06-03T16:11:40
#
#-------------------------------------------------

QT       += core gui xml

TARGET = StateMachine
TEMPLATE = app

CONFIG += uitools

SOURCES += main.cpp\
        mainwindow.cpp\
        logger.cpp \
    ssmcontroller.cpp \
    starttrial.cpp \
    smengine.cpp \
    infowidget.cpp \
    inputwidget.cpp \
    smgui.cpp \
    dialogwidget.cpp \
    initialwidget.cpp \
    datawidget.cpp \
    widgetinterface.cpp \
    domparser.cpp \
    guiwidget.cpp

HEADERS  += mainwindow.h\
            logger.h \
    ssmcontroller.h \
    starttrial.h \
    smengine.h \
    infowidget.h \
    inputwidget.h \
    smgui.h \
    dialogwidget.h \
    initialwidget.h \
    datawidget.h \
    widgetinterface.h \
    domparser.h \
    guiwidget.h

include(/Users/odamm/StateMachine/qtstatemachine/src/qtstatemachine.pri)

FORMS    += mainwindow.ui \
    ui/dialog01.ui \
    ui/dialog02.ui \
    dockwidget.ui

RESOURCES += \
    forms.qrc
