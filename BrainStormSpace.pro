QT       += sql core gui  charts serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arduino.cpp \
    availableofficecard.cpp \
    card.cpp \
    connexion.cpp \
    main.cpp \
    mainwindow.cpp \
    office.cpp \
    officestatistic.cpp \
    popup.cpp \
    popupmodel.cpp \
    reservation.cpp \
    reservationcard.cpp \
    test.cpp \
    user.cpp

HEADERS += \
    arduino.h \
    availableofficecard.h \
    card.h \
    connexion.h \
    mainwindow.h \
    office.h \
    officestatistic.h \
    popup.h \
    popupmodel.h \
    reservation.h \
    reservationcard.h \
    test.h \
    user.h

FORMS += \
    availableofficecard.ui \
    card.ui \
    mainwindow.ui \
    popupmodel.ui \
    reservationcard.ui \
    test.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons.qrc \
    icons.qrc \
    res.qrc \
    res.qrc \
    res.qrc

SUBDIRS += \
    cardTest.pro \
    cardTest.pro

DISTFILES += \
    BrainStormSpace.pro.user \
    brainstorm.png \
    cardTest.pro.user \
    chat-solid.svg \
    like-solid.svg
