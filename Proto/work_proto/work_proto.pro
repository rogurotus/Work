QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    db.cpp \
    main.cpp \
    maincomendant.cpp \
    mainvisiter.cpp \
    mainwindow.cpp \
    makerequest.cpp \
    managedatabase.cpp \
    redactdata.cpp \
    redacthuman.cpp \
    requests.cpp \
    seekbyname.cpp \
    view.cpp

HEADERS += \
    db.h \
    maincomendant.h \
    mainvisiter.h \
    mainwindow.h \
    makerequest.h \
    managedatabase.h \
    redactdata.h \
    redacthuman.h \
    requests.h \
    seekbyname.h \
    view.h

FORMS += \
    maincomendant.ui \
    mainvisiter.ui \
    mainwindow.ui \
    makerequest.ui \
    managedatabase.ui \
    redactdata.ui \
    redacthuman.ui \
    requests.ui \
    seekbyname.ui \
    view.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
