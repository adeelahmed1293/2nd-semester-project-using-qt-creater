QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminlogin.cpp \
    adminlogin1.cpp \
    admissionfee.cpp \
    details.cpp \
    educationaldetails.cpp \
    functional_classes/educationaldetailss.cpp \
    functional_classes/fees.cpp \
    functional_classes/loginstudent.cpp \
    functional_classes/signupStudent.cpp \
    functional_classes/studentpersonaldetails.cpp \
    home.cpp \
    main.cpp \
    mainmenu.cpp \
    moredetails.cpp \
    personaldetails.cpp \
    signup.cpp \
    student.cpp

HEADERS += \
    adminlogin.h \
    adminlogin1.h \
    admissionfee.h \
    details.h \
    educationaldetails.h \
    functional_classes/educationaldetailss.h \
    functional_classes/fees.h \
    functional_classes/loginstudent.h \
    functional_classes/signupStudent.h \
    functional_classes/studentpersonaldetails.h \
    home.h \
    mainmenu.h \
    moredetails.h \
    personaldetails.h \
    signup.h \
    student.h

FORMS += \
    adminlogin.ui \
    adminlogin1.ui \
    admissionfee.ui \
    details.ui \
    educationaldetails.ui \
    home.ui \
    mainmenu.ui \
    moredetails.ui \
    personaldetails.ui \
    signup.ui \
    student.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc
