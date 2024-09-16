QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accountlist.cpp \
    main.cpp \
    mainwindow.cpp \
    operate/accountclosure.cpp \
    operate/changepassword.cpp \
    operate/deposit.cpp \
    operate/items.cpp \
    operate/searchinfo.cpp \
    operate/trans.cpp \
    operate/withdraw.cpp \
    sign/load.cpp \
    sign/signup.cpp

HEADERS += \
    accountlist.h \
    mainwindow.h \
    operate/accountclosure.h \
    operate/changepassword.h \
    operate/deposit.h \
    operate/items.h \
    operate/searchinfo.h \
    operate/trans.h \
    operate/withdraw.h \
    sign/load.h \
    sign/signup.h

FORMS += \
    mainwindow.ui \
    operate/accountclosure.ui \
    operate/changepassword.ui \
    operate/deposit.ui \
    operate/items.ui \
    operate/searchinfo.ui \
    operate/trans.ui \
    operate/withdraw.ui \
    sign/load.ui \
    sign/signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
