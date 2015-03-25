/********************************************************************************
** Form generated from reading UI file 'compras.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPRAS_H
#define UI_COMPRAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_compras
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tabla_carrito;
    QLabel *label_4;
    QPushButton *llevar_product_carrito;
    QWidget *tab_2;
    QLabel *lb_subtotal;
    QLabel *lb_impuesto;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *lb_total_factura;
    QLabel *label_7;
    QPushButton *pagar_factura;
    QTableWidget *tabla_caja;
    QPushButton *pushButton_3;
    QPushButton *calcular_factura;

    void setupUi(QDialog *compras)
    {
        if (compras->objectName().isEmpty())
            compras->setObjectName(QStringLiteral("compras"));
        compras->resize(586, 477);
        label = new QLabel(compras);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 10, 67, 17));
        label_2 = new QLabel(compras);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 10, 31, 31));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../iconos/shopping_cart.png")));
        label_3 = new QLabel(compras);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 10, 31, 31));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../iconos/shopping_cart.png")));
        tabWidget = new QTabWidget(compras);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 60, 551, 401));
        tabWidget->setElideMode(Qt::ElideNone);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabla_carrito = new QTableWidget(tab);
        if (tabla_carrito->columnCount() < 3)
            tabla_carrito->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabla_carrito->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabla_carrito->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabla_carrito->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tabla_carrito->setObjectName(QStringLiteral("tabla_carrito"));
        tabla_carrito->setGeometry(QRect(20, 40, 391, 131));
        tabla_carrito->horizontalHeader()->setDefaultSectionSize(130);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 20, 71, 17));
        llevar_product_carrito = new QPushButton(tab);
        llevar_product_carrito->setObjectName(QStringLiteral("llevar_product_carrito"));
        llevar_product_carrito->setGeometry(QRect(20, 200, 201, 41));
        QIcon icon;
        icon.addFile(QStringLiteral("../iconos/add_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        llevar_product_carrito->setIcon(icon);
        llevar_product_carrito->setIconSize(QSize(40, 40));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../iconos/shopping_cart.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        lb_subtotal = new QLabel(tab_2);
        lb_subtotal->setObjectName(QStringLiteral("lb_subtotal"));
        lb_subtotal->setGeometry(QRect(140, 230, 171, 31));
        lb_subtotal->setFrameShape(QFrame::Box);
        lb_subtotal->setFrameShadow(QFrame::Sunken);
        lb_impuesto = new QLabel(tab_2);
        lb_impuesto->setObjectName(QStringLiteral("lb_impuesto"));
        lb_impuesto->setGeometry(QRect(140, 270, 171, 31));
        lb_impuesto->setFrameShape(QFrame::Box);
        lb_impuesto->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 240, 67, 17));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 280, 67, 17));
        lb_total_factura = new QLabel(tab_2);
        lb_total_factura->setObjectName(QStringLiteral("lb_total_factura"));
        lb_total_factura->setGeometry(QRect(140, 310, 171, 31));
        lb_total_factura->setFrameShape(QFrame::Box);
        lb_total_factura->setFrameShadow(QFrame::Sunken);
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 320, 111, 17));
        pagar_factura = new QPushButton(tab_2);
        pagar_factura->setObjectName(QStringLiteral("pagar_factura"));
        pagar_factura->setGeometry(QRect(400, 310, 111, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../iconos/credit-card.png"), QSize(), QIcon::Normal, QIcon::Off);
        pagar_factura->setIcon(icon2);
        tabla_caja = new QTableWidget(tab_2);
        if (tabla_caja->columnCount() < 3)
            tabla_caja->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabla_caja->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabla_caja->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tabla_caja->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tabla_caja->setObjectName(QStringLiteral("tabla_caja"));
        tabla_caja->setGeometry(QRect(20, 20, 341, 131));
        tabla_caja->horizontalHeader()->setDefaultSectionSize(114);
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 20, 161, 51));
        QIcon icon3;
        icon3.addFile(QStringLiteral("../iconos/close_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        calcular_factura = new QPushButton(tab_2);
        calcular_factura->setObjectName(QStringLiteral("calcular_factura"));
        calcular_factura->setGeometry(QRect(380, 90, 161, 41));
        QIcon icon4;
        icon4.addFile(QStringLiteral("../iconos/calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        calcular_factura->setIcon(icon4);
        tabWidget->addTab(tab_2, icon4, QString());

        retranslateUi(compras);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(compras);
    } // setupUi

    void retranslateUi(QDialog *compras)
    {
        compras->setWindowTitle(QApplication::translate("compras", "Dialog", 0));
        label->setText(QApplication::translate("compras", "Compras", 0));
        label_2->setText(QString());
        label_3->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tabla_carrito->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("compras", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tabla_carrito->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("compras", "Marca", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tabla_carrito->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("compras", "Precio", 0));
        label_4->setText(QApplication::translate("compras", "Productos", 0));
        llevar_product_carrito->setText(QApplication::translate("compras", "Poner en el carrito", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("compras", "Carrito", 0));
        lb_subtotal->setText(QString());
        lb_impuesto->setText(QString());
        label_5->setText(QApplication::translate("compras", "Subtotal", 0));
        label_6->setText(QApplication::translate("compras", "Impuesto", 0));
        lb_total_factura->setText(QString());
        label_7->setText(QApplication::translate("compras", "Total en factura", 0));
        pagar_factura->setText(QApplication::translate("compras", "Pagar", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tabla_caja->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("compras", "Nombre", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tabla_caja->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("compras", "Marca", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tabla_caja->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("compras", "Precio", 0));
        pushButton_3->setText(QApplication::translate("compras", "Remover del carrito", 0));
        calcular_factura->setText(QApplication::translate("compras", "Calcular factura", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("compras", "Caja", 0));
    } // retranslateUi

};

namespace Ui {
    class compras: public Ui_compras {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPRAS_H
