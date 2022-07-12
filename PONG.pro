QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Ball.cpp \
    Paddle.cpp \
    aboutdoc.cpp \
    backgrounditems.cpp \
    frame.cpp \
    game.cpp \
    initialscreen.cpp \
    main.cpp \
    mainwindow.cpp \
    result.cpp \
    timer.cpp \
    view.cpp

HEADERS += \
    Ball.h \
    Paddle.h \
    aboutdoc.h \
    backgrounditems.h \
    frame.h \
    game.h \
    initialscreen.h \
    mainwindow.h \
    result.h \
    timer.h \
    view.h

FORMS += \
    aboutdoc.ui \
    result.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    res.qrc
