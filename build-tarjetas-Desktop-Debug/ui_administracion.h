/********************************************************************************
** Form generated from reading UI file 'administracion.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRACION_H
#define UI_ADMINISTRACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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
    QPushButton *nueva_card;
    QPushButton *pushButton_2;
    QTableWidget *tabla_tarjetas;
    QComboBox *lista_tipos_tarjeta;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *administracion)
    {
        if (administracion->objectName().isEmpty())
            administracion->setObjectName(QStringLiteral("administracion"));
        administracion->resize(671, 342);
        label = new QLabel(administracion);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 10, 179, 17));
        label->setStyleSheet(QStringLiteral("font: 75 11pt \"Ubuntu\";"));
        label_2 = new QLabel(administracion);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 131, 17));
        label_3 = new QLabel(administracion);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(460, 120, 111, 17));
        nueva_card = new QPushButton(administracion);
        nueva_card->setObjectName(QStringLiteral("nueva_card"));
        nueva_card->setGeometry(QRect(460, 250, 171, 41));
        QIcon icon;
        icon.addFile(QStringLiteral("../iconos/add_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        nueva_card->setIcon(icon);
        nueva_card->setIconSize(QSize(26, 26));
        pushButton_2 = new QPushButton(administracion);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 190, 171, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../iconos/search_button_green_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(30, 30));
        tabla_tarjetas = new QTableWidget(administracion);
        if (tabla_tarjetas->columnCount() < 2)
            tabla_tarjetas->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabla_tarjetas->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabla_tarjetas->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tabla_tarjetas->setObjectName(QStringLiteral("tabla_tarjetas"));
        tabla_tarjetas->setGeometry(QRect(20, 110, 411, 192));
        tabla_tarjetas->horizontalHeader()->setDefaultSectionSize(210);
        lista_tipos_tarjeta = new QComboBox(administracion);
        lista_tipos_tarjeta->setObjectName(QStringLiteral("lista_tipos_tarjeta"));
        lista_tipos_tarjeta->setGeometry(QRect(460, 150, 171, 27));
        label_4 = new QLabel(administracion);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(420, 0, 81, 61));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../iconos/Bank_Icon_64.png")));
        label_5 = new QLabel(administracion);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 0, 81, 61));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../iconos/Bank_Icon_64.png")));

        retranslateUi(administracion);

        QMetaObject::connectSlotsByName(administracion);
    } // setupUi

    void retranslateUi(QDialog *administracion)
    {
        administracion->setWindowTitle(QApplication::translate("administracion", "Dialog", 0));
        label->setText(QApplication::translate("administracion", "Administracion de tarjetas", 0));
        label_2->setText(QApplication::translate("administracion", "Tarjetas creadas", 0));
        label_3->setText(QApplication::translate("administracion", "TIpo de tarjeta", 0));
        nueva_card->setText(QApplication::translate("administracion", "Nueva tarjeta", 0));
        pushButton_2->setText(QApplication::translate("administracion", "Ver Tarjeta", 0));
        QTableWidgetItem *___qtablewidgetitem = tabla_tarjetas->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("administracion", "Numero de tarjeta", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tabla_tarjetas->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("administracion", "Nombre cliente", 0));
        lista_tipos_tarjeta->clear();
        lista_tipos_tarjeta->insertItems(0, QStringList()
         << QApplication::translate("administracion", "Debito", 0)
         << QApplication::translate("administracion", "Credito Platino", 0)
         << QApplication::translate("administracion", "Credito Oro", 0)
         << QApplication::translate("administracion", "Credito Clasica", 0)
        );
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class administracion: public Ui_administracion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRACION_H
