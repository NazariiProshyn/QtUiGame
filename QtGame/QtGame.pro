QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cppgame.cpp \
    enemy.cpp \
    lvls.cpp \
    main.cpp \
    mainwindow.cpp \
    newuserform.cpp \
    player.cpp

HEADERS += \
    Creature.h \
    cppgame.h \
    enemy.h \
    lvls.h \
    mainwindow.h \
    newuserform.h \
    player.h

FORMS += \
    cppgame.ui \
    lvls.ui \
    mainwindow.ui \
    newuserform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Hero.qrc
