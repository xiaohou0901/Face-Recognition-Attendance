QT       += core gui network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

#添加头文件
INCLUDEPATH += D:\Software\OpenCV\opencv452\include
INCLUDEPATH += D:\Software\OpenCV\opencv452\include\opencv2
INCLUDEPATH += D:\Software\OpenCV\SeetaFace\include
INCLUDEPATH += D:\Software\OpenCV\SeetaFace\include\seeta
#添加库
LIBS += D:\Software\OpenCV\opencv452\x64\mingw\lib\libopencv*
LIBS += D:\Software\OpenCV\SeetaFace\lib\libSeeta*

SOURCES += \
    main.cpp \
    attendancewin.cpp \
    qfaceobject.cpp \
    registerwin.cpp \
    selectwin.cpp

HEADERS += \
    attendancewin.h \
    qfaceobject.h \
    registerwin.h \
    selectwin.h

FORMS += \
    attendancewin.ui \
    registerwin.ui \
    selectwin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
