/********************************************************************************
** Form generated from reading UI file 'administracion.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRACION_H
#define UI_ADMINISTRACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_administracion
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableWidget *tabla_tarjetas;

    void setupUi(QDialog *administracion)
    {
        if (administracion->objectName().isEmpty())
            administracion->setObjectName(QStringLiteral("administracion"));
        administracion->resize(671, 305);
        label = new QLabel(administracion);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 10, 179, 17));
        label_2 = new QLabel(administracion);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 131, 17));
        label_3 = new QLabel(administracion);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(460, 70, 111, 17));
        pushButton = new QPushButton(administracion);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 230, 171, 27));
        pushButton_2 = new QPushButton(administracion);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 200, 99, 27));
        tabla_tarjetas = new QTableWidget(administracion);
        if (tabla_tarjetas->columnCount() < 2)
            tabla_tarjetas->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabla_tarjetas->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabla_tarjetas->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tabla_tarjetas->setObjectName(QStringLiteral("tabla_tarjetas"));
        tabla_tarjetas->setGeometry(QRect(20, 70, 411, 192));
        tabla_tarjetas->horizontalHeader()->setDefaultSectionSize(210);

        retranslateUi(administracion);

        QMetaObject::connectSlotsByName(administracion);
    } // setupUi

    void retranslateUi(QDialog *administracion)
    {
        administracion->setWindowTitle(QApplication::translate("administracion", "Dialog", 0));
        label->setText(QApplication::translate("administracion", "Administracion de tarjetas", 0));
        label_2->setText(QApplication::translate("administracion", "Tarjetas creadas", 0));
        label_3->setText(QApplication::translate("administracion", "TIpo de tarjeta", 0));
        pushButton->setText(QApplication::translate("administracion", "Agregar Nueva tarjeta", 0));
        pushButton_2->setText(QApplication::translate("administracion", "Ver Tarjeta", 0));
        QTableWidgetItem *___qtablewidgetitem = tabla_tarjetas->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("administracion", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tabla_tarjetas->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("administracion", "Nombre cliente", 0));
    } // retranslateUi

};

namespace Ui {
    class administracion: public Ui_administracion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRACION_H
