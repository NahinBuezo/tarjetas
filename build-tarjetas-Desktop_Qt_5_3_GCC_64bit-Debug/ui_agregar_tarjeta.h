/********************************************************************************
** Form generated from reading UI file 'agregar_tarjeta.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_TARJETA_H
#define UI_AGREGAR_TARJETA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_agregar_tarjeta
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *tipo_tarjeta_nueva;
    QLabel *numero_tarjeta_nueva;
    QLabel *pin_tarjeta_nueva;
    QLineEdit *monto_tarjeta_nueva;
    QLineEdit *nombre_cliente_nuevo;
    QLineEdit *id_cliente_nuevo;
    QPushButton *pushButton;

    void setupUi(QDialog *agregar_tarjeta)
    {
        if (agregar_tarjeta->objectName().isEmpty())
            agregar_tarjeta->setObjectName(QStringLiteral("agregar_tarjeta"));
        agregar_tarjeta->resize(400, 364);
        label = new QLabel(agregar_tarjeta);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 10, 151, 17));
        label_2 = new QLabel(agregar_tarjeta);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 131, 17));
        label_3 = new QLabel(agregar_tarjeta);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 111, 17));
        label_4 = new QLabel(agregar_tarjeta);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 140, 101, 17));
        label_5 = new QLabel(agregar_tarjeta);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 180, 121, 17));
        label_6 = new QLabel(agregar_tarjeta);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 220, 141, 17));
        label_7 = new QLabel(agregar_tarjeta);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 270, 67, 17));
        tipo_tarjeta_nueva = new QComboBox(agregar_tarjeta);
        tipo_tarjeta_nueva->setObjectName(QStringLiteral("tipo_tarjeta_nueva"));
        tipo_tarjeta_nueva->setGeometry(QRect(160, 80, 211, 27));
        numero_tarjeta_nueva = new QLabel(agregar_tarjeta);
        numero_tarjeta_nueva->setObjectName(QStringLiteral("numero_tarjeta_nueva"));
        numero_tarjeta_nueva->setGeometry(QRect(160, 40, 211, 31));
        numero_tarjeta_nueva->setFrameShape(QFrame::StyledPanel);
        pin_tarjeta_nueva = new QLabel(agregar_tarjeta);
        pin_tarjeta_nueva->setObjectName(QStringLiteral("pin_tarjeta_nueva"));
        pin_tarjeta_nueva->setGeometry(QRect(160, 130, 211, 31));
        pin_tarjeta_nueva->setFrameShape(QFrame::StyledPanel);
        monto_tarjeta_nueva = new QLineEdit(agregar_tarjeta);
        monto_tarjeta_nueva->setObjectName(QStringLiteral("monto_tarjeta_nueva"));
        monto_tarjeta_nueva->setGeometry(QRect(160, 170, 211, 27));
        nombre_cliente_nuevo = new QLineEdit(agregar_tarjeta);
        nombre_cliente_nuevo->setObjectName(QStringLiteral("nombre_cliente_nuevo"));
        nombre_cliente_nuevo->setGeometry(QRect(160, 220, 211, 27));
        id_cliente_nuevo = new QLineEdit(agregar_tarjeta);
        id_cliente_nuevo->setObjectName(QStringLiteral("id_cliente_nuevo"));
        id_cliente_nuevo->setGeometry(QRect(160, 270, 211, 27));
        pushButton = new QPushButton(agregar_tarjeta);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 320, 99, 27));

        retranslateUi(agregar_tarjeta);

        QMetaObject::connectSlotsByName(agregar_tarjeta);
    } // setupUi

    void retranslateUi(QDialog *agregar_tarjeta)
    {
        agregar_tarjeta->setWindowTitle(QApplication::translate("agregar_tarjeta", "Dialog", 0));
        label->setText(QApplication::translate("agregar_tarjeta", "Formulario de tarjeta", 0));
        label_2->setText(QApplication::translate("agregar_tarjeta", "Numero de tarjeta ", 0));
        label_3->setText(QApplication::translate("agregar_tarjeta", "Tipo de tarjeta", 0));
        label_4->setText(QApplication::translate("agregar_tarjeta", "PIN de tarjeta", 0));
        label_5->setText(QApplication::translate("agregar_tarjeta", "Monto de tarjeta", 0));
        label_6->setText(QApplication::translate("agregar_tarjeta", "Nombre del cliente", 0));
        label_7->setText(QApplication::translate("agregar_tarjeta", "ID cliente", 0));
        tipo_tarjeta_nueva->clear();
        tipo_tarjeta_nueva->insertItems(0, QStringList()
         << QApplication::translate("agregar_tarjeta", "Debito", 0)
         << QApplication::translate("agregar_tarjeta", "Credito Platino", 0)
         << QApplication::translate("agregar_tarjeta", "Credito Oro", 0)
        );
        numero_tarjeta_nueva->setText(QString());
        pin_tarjeta_nueva->setText(QString());
        pushButton->setText(QApplication::translate("agregar_tarjeta", "Agregar", 0));
    } // retranslateUi

};

namespace Ui {
    class agregar_tarjeta: public Ui_agregar_tarjeta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_TARJETA_H
