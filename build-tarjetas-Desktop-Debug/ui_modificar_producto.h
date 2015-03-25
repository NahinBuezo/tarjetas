/********************************************************************************
** Form generated from reading UI file 'modificar_producto.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICAR_PRODUCTO_H
#define UI_MODIFICAR_PRODUCTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_modificar_producto
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *detalle_nombre_producto;
    QLineEdit *detalle_tipo_producto;
    QLineEdit *detalle_marca_producto;
    QLineEdit *detalle_precio_producto;
    QPushButton *remover_producto;
    QPushButton *modificar_product;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *modificar_producto)
    {
        if (modificar_producto->objectName().isEmpty())
            modificar_producto->setObjectName(QStringLiteral("modificar_producto"));
        modificar_producto->resize(415, 368);
        label = new QLabel(modificar_producto);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 151, 20));
        label_2 = new QLabel(modificar_producto);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 67, 17));
        label_3 = new QLabel(modificar_producto);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 100, 67, 17));
        label_4 = new QLabel(modificar_producto);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 150, 67, 17));
        label_5 = new QLabel(modificar_producto);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 200, 67, 17));
        detalle_nombre_producto = new QLineEdit(modificar_producto);
        detalle_nombre_producto->setObjectName(QStringLiteral("detalle_nombre_producto"));
        detalle_nombre_producto->setGeometry(QRect(120, 50, 221, 27));
        detalle_tipo_producto = new QLineEdit(modificar_producto);
        detalle_tipo_producto->setObjectName(QStringLiteral("detalle_tipo_producto"));
        detalle_tipo_producto->setGeometry(QRect(120, 100, 221, 27));
        detalle_marca_producto = new QLineEdit(modificar_producto);
        detalle_marca_producto->setObjectName(QStringLiteral("detalle_marca_producto"));
        detalle_marca_producto->setGeometry(QRect(120, 150, 221, 27));
        detalle_precio_producto = new QLineEdit(modificar_producto);
        detalle_precio_producto->setObjectName(QStringLiteral("detalle_precio_producto"));
        detalle_precio_producto->setGeometry(QRect(120, 190, 221, 27));
        remover_producto = new QPushButton(modificar_producto);
        remover_producto->setObjectName(QStringLiteral("remover_producto"));
        remover_producto->setGeometry(QRect(80, 270, 111, 41));
        QIcon icon;
        icon.addFile(QStringLiteral("../iconos/close_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        remover_producto->setIcon(icon);
        remover_producto->setIconSize(QSize(40, 40));
        modificar_product = new QPushButton(modificar_producto);
        modificar_product->setObjectName(QStringLiteral("modificar_product"));
        modificar_product->setGeometry(QRect(210, 270, 121, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../iconos/apple-red.png"), QSize(), QIcon::Normal, QIcon::Off);
        modificar_product->setIcon(icon1);
        modificar_product->setIconSize(QSize(40, 40));
        label_6 = new QLabel(modificar_producto);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(310, 10, 41, 31));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../iconos/apple-green.png")));
        label_7 = new QLabel(modificar_producto);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 10, 41, 31));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../iconos/apple-green.png")));

        retranslateUi(modificar_producto);

        QMetaObject::connectSlotsByName(modificar_producto);
    } // setupUi

    void retranslateUi(QDialog *modificar_producto)
    {
        modificar_producto->setWindowTitle(QApplication::translate("modificar_producto", "Dialog", 0));
        label->setText(QApplication::translate("modificar_producto", "Detalle de producto", 0));
        label_2->setText(QApplication::translate("modificar_producto", "Nombre", 0));
        label_3->setText(QApplication::translate("modificar_producto", "TIpo ", 0));
        label_4->setText(QApplication::translate("modificar_producto", "Marca", 0));
        label_5->setText(QApplication::translate("modificar_producto", "Precio    L", 0));
        remover_producto->setText(QApplication::translate("modificar_producto", "Eliminar", 0));
        modificar_product->setText(QApplication::translate("modificar_producto", "Modificar", 0));
        label_6->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class modificar_producto: public Ui_modificar_producto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICAR_PRODUCTO_H
