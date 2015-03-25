/********************************************************************************
** Form generated from reading UI file 'busqueda.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSQUEDA_H
#define UI_BUSQUEDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_busqueda
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *resultado_numero_tarjeta;
    QLabel *resultado_pin_tarjeta;
    QLabel *resultado_id_cliente;
    QLabel *resultado_monto_tarjeta;
    QLabel *resultado_nombre_cliente;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *busqueda)
    {
        if (busqueda->objectName().isEmpty())
            busqueda->setObjectName(QStringLiteral("busqueda"));
        busqueda->resize(541, 445);
        label = new QLabel(busqueda);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 10, 171, 17));
        label_2 = new QLabel(busqueda);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 40, 141, 17));
        label_3 = new QLabel(busqueda);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 110, 121, 17));
        label_4 = new QLabel(busqueda);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 180, 121, 17));
        label_5 = new QLabel(busqueda);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 240, 141, 17));
        label_6 = new QLabel(busqueda);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 300, 67, 17));
        resultado_numero_tarjeta = new QLabel(busqueda);
        resultado_numero_tarjeta->setObjectName(QStringLiteral("resultado_numero_tarjeta"));
        resultado_numero_tarjeta->setGeometry(QRect(30, 60, 341, 31));
        resultado_numero_tarjeta->setStyleSheet(QStringLiteral("lbb->backgroud:rgb(215, 210, 210);"));
        resultado_numero_tarjeta->setFrameShape(QFrame::StyledPanel);
        resultado_pin_tarjeta = new QLabel(busqueda);
        resultado_pin_tarjeta->setObjectName(QStringLiteral("resultado_pin_tarjeta"));
        resultado_pin_tarjeta->setGeometry(QRect(30, 130, 341, 31));
        resultado_pin_tarjeta->setFrameShape(QFrame::StyledPanel);
        resultado_id_cliente = new QLabel(busqueda);
        resultado_id_cliente->setObjectName(QStringLiteral("resultado_id_cliente"));
        resultado_id_cliente->setGeometry(QRect(30, 320, 341, 31));
        resultado_id_cliente->setFrameShape(QFrame::StyledPanel);
        resultado_monto_tarjeta = new QLabel(busqueda);
        resultado_monto_tarjeta->setObjectName(QStringLiteral("resultado_monto_tarjeta"));
        resultado_monto_tarjeta->setGeometry(QRect(30, 200, 341, 31));
        resultado_monto_tarjeta->setFrameShape(QFrame::StyledPanel);
        resultado_nombre_cliente = new QLabel(busqueda);
        resultado_nombre_cliente->setObjectName(QStringLiteral("resultado_nombre_cliente"));
        resultado_nombre_cliente->setGeometry(QRect(30, 260, 341, 31));
        resultado_nombre_cliente->setFrameShape(QFrame::StyledPanel);
        pushButton = new QPushButton(busqueda);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 380, 121, 27));
        pushButton_2 = new QPushButton(busqueda);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 380, 131, 27));
        pushButton_3 = new QPushButton(busqueda);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 380, 171, 27));

        retranslateUi(busqueda);

        QMetaObject::connectSlotsByName(busqueda);
    } // setupUi

    void retranslateUi(QDialog *busqueda)
    {
        busqueda->setWindowTitle(QApplication::translate("busqueda", "Dialog", 0));
        label->setText(QApplication::translate("busqueda", "Resultados de busqueda", 0));
        label_2->setText(QApplication::translate("busqueda", "Numero de tarjeta", 0));
        label_3->setText(QApplication::translate("busqueda", "PIN de seguridad", 0));
        label_4->setText(QApplication::translate("busqueda", "Monto de tarjeta", 0));
        label_5->setText(QApplication::translate("busqueda", "Nombre del cliente", 0));
        label_6->setText(QApplication::translate("busqueda", "ID cliente", 0));
        resultado_numero_tarjeta->setText(QString());
        resultado_pin_tarjeta->setText(QString());
        resultado_id_cliente->setText(QString());
        resultado_monto_tarjeta->setText(QString());
        resultado_nombre_cliente->setText(QString());
        pushButton->setText(QApplication::translate("busqueda", "Eliminar tarjeta", 0));
        pushButton_2->setText(QApplication::translate("busqueda", "Modificar valores", 0));
        pushButton_3->setText(QApplication::translate("busqueda", "Ver historial de gastos", 0));
    } // retranslateUi

};

namespace Ui {
    class busqueda: public Ui_busqueda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSQUEDA_H
