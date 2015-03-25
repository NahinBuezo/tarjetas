#-------------------------------------------------
#
# Project created by QtCreator 2015-03-16T02:48:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tarjetas
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    card.cpp \
    credito.cpp \
    debito.cpp \
    administracion.cpp \
    busqueda.cpp \
    agregar_tarjeta.cpp \
    simulador.cpp \
    producto.cpp \
    modificar_producto.cpp \
    compras.cpp \
    platino.cpp \
    dorada.cpp \
    clasica.cpp \
    informacion.cpp

HEADERS  += mainwindow.h \
    card.h \
    credito.h \
    debito.h \
    administracion.h \
    busqueda.h \
    agregar_tarjeta.h \
    simulador.h \
    producto.h \
    modificar_producto.h \
    compras.h \
    platino.h \
    dorada.h \
    clasica.h \
    informacion.h

FORMS    += mainwindow.ui \
    administracion.ui \
    busqueda.ui \
    agregar_tarjeta.ui \
    simulador.ui \
    modificar_producto.ui \
    compras.ui \
    informacion.ui
