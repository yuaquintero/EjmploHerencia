TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        empleado.cpp \
        empleadocomision.cpp \
        empleadofijo.cpp \
        empleadohoras.cpp \
        main.cpp

HEADERS += \
    empleado.h \
    empleadocomision.h \
    empleadofijo.h \
    empleadohoras.h
