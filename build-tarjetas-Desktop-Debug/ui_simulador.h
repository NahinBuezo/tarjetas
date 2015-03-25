/********************************************************************************
** Form generated from reading UI file 'simulador.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMULADOR_H
#define UI_SIMULADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_simulador
{
public:
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *login_usuario;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *tarjeta_simulador;
    QLineEdit *pin_simulador;
    QWidget *productos;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *nombre_producto;
    QLineEdit *marca_producto;
    QLineEdit *precio_producto;
    QPushButton *ingresar_producto;
    QLineEdit *tipo_producto;
    QWidget *tab_2;
    QTableWidget *tabla_productos;
    QPushButton *cargar_productos;
    QPushButton *ver_producto;

    void setupUi(QDialog *simulador)
    {
        if (simulador->objectName().isEmpty())
            simulador->setObjectName(QStringLiteral("simulador"));
        simulador->resize(577, 400);
        label = new QLabel(simulador);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 10, 101, 17));
        label->setStyleSheet(QStringLiteral("font: 75 11pt \"Ubuntu\";"));
        tabWidget = new QTabWidget(simulador);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 40, 541, 351));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        login_usuario = new QPushButton(tab);
        login_usuario->setObjectName(QStringLiteral("login_usuario"));
        login_usuario->setGeometry(QRect(60, 170, 121, 41));
        QIcon icon;
        icon.addFile(QStringLiteral("../iconos/user_friend.png"), QSize(), QIcon::Normal, QIcon::Off);
        login_usuario->setIcon(icon);
        login_usuario->setIconSize(QSize(40, 40));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 67, 17));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 20, 141, 17));
        tarjeta_simulador = new QLineEdit(tab);
        tarjeta_simulador->setObjectName(QStringLiteral("tarjeta_simulador"));
        tarjeta_simulador->setGeometry(QRect(10, 40, 251, 27));
        pin_simulador = new QLineEdit(tab);
        pin_simulador->setObjectName(QStringLiteral("pin_simulador"));
        pin_simulador->setGeometry(QRect(10, 110, 251, 27));
        tabWidget->addTab(tab, icon, QString());
        productos = new QWidget();
        productos->setObjectName(QStringLiteral("productos"));
        label_4 = new QLabel(productos);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 20, 131, 31));
        label_5 = new QLabel(productos);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 70, 67, 17));
        label_6 = new QLabel(productos);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 120, 67, 17));
        label_7 = new QLabel(productos);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 170, 67, 17));
        nombre_producto = new QLineEdit(productos);
        nombre_producto->setObjectName(QStringLiteral("nombre_producto"));
        nombre_producto->setGeometry(QRect(150, 60, 191, 27));
        marca_producto = new QLineEdit(productos);
        marca_producto->setObjectName(QStringLiteral("marca_producto"));
        marca_producto->setGeometry(QRect(150, 110, 191, 27));
        precio_producto = new QLineEdit(productos);
        precio_producto->setObjectName(QStringLiteral("precio_producto"));
        precio_producto->setGeometry(QRect(150, 160, 191, 27));
        ingresar_producto = new QPushButton(productos);
        ingresar_producto->setObjectName(QStringLiteral("ingresar_producto"));
        ingresar_producto->setGeometry(QRect(150, 220, 171, 27));
        tipo_producto = new QLineEdit(productos);
        tipo_producto->setObjectName(QStringLiteral("tipo_producto"));
        tipo_producto->setGeometry(QRect(150, 20, 191, 27));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../iconos/apple-red.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(productos, icon1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabla_productos = new QTableWidget(tab_2);
        if (tabla_productos->columnCount() < 3)
            tabla_productos->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabla_productos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabla_productos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabla_productos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tabla_productos->setObjectName(QStringLiteral("tabla_productos"));
        tabla_productos->setGeometry(QRect(10, 20, 461, 192));
        tabla_productos->horizontalHeader()->setDefaultSectionSize(153);
        cargar_productos = new QPushButton(tab_2);
        cargar_productos->setObjectName(QStringLiteral("cargar_productos"));
        cargar_productos->setGeometry(QRect(70, 230, 141, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../iconos/base.png"), QSize(), QIcon::Normal, QIcon::Off);
        cargar_productos->setIcon(icon2);
        cargar_productos->setIconSize(QSize(40, 40));
        ver_producto = new QPushButton(tab_2);
        ver_producto->setObjectName(QStringLiteral("ver_producto"));
        ver_producto->setGeometry(QRect(220, 230, 141, 41));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../iconos/search_button_green_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        ver_producto->setIcon(icon3);
        ver_producto->setIconSize(QSize(40, 40));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../iconos/money_91337.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon4, QString());

        retranslateUi(simulador);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(simulador);
    } // setupUi

    void retranslateUi(QDialog *simulador)
    {
        simulador->setWindowTitle(QApplication::translate("simulador", "Dialog", 0));
        label->setText(QApplication::translate("simulador", "SIMULADOR", 0));
        login_usuario->setText(QApplication::translate("simulador", "Ingresar", 0));
        label_3->setText(QApplication::translate("simulador", "PIN", 0));
        label_2->setText(QApplication::translate("simulador", "Numero de tarjeta", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("simulador", "Usuario", 0));
        label_4->setText(QApplication::translate("simulador", "Tipo de producto", 0));
        label_5->setText(QApplication::translate("simulador", "Nombre", 0));
        label_6->setText(QApplication::translate("simulador", "Marca", 0));
        label_7->setText(QApplication::translate("simulador", "Precio", 0));
        ingresar_producto->setText(QApplication::translate("simulador", "Ingresar producto", 0));
        tabWidget->setTabText(tabWidget->indexOf(productos), QApplication::translate("simulador", "Agregar productos", 0));
        QTableWidgetItem *___qtablewidgetitem = tabla_productos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("simulador", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tabla_productos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("simulador", "Tipo", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tabla_productos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("simulador", "Marca", 0));
        cargar_productos->setText(QApplication::translate("simulador", "Cargar datos", 0));
        ver_producto->setText(QApplication::translate("simulador", "Ver producto", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("simulador", "Administracion de productos", 0));
    } // retranslateUi

};

namespace Ui {
    class simulador: public Ui_simulador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMULADOR_H
