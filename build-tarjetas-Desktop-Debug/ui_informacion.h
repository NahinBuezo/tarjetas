/********************************************************************************
** Form generated from reading UI file 'informacion.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMACION_H
#define UI_INFORMACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_informacion
{
public:
    QTextEdit *texto_tarjeta;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;

    void setupUi(QDialog *informacion)
    {
        if (informacion->objectName().isEmpty())
            informacion->setObjectName(QStringLiteral("informacion"));
        informacion->resize(426, 449);
        texto_tarjeta = new QTextEdit(informacion);
        texto_tarjeta->setObjectName(QStringLiteral("texto_tarjeta"));
        texto_tarjeta->setGeometry(QRect(20, 60, 391, 351));
        widget = new QWidget(informacion);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(120, 20, 198, 34));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../iconos/credit-card.png")));

        horizontalLayout->addWidget(label_2);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../iconos/credit-card.png")));

        horizontalLayout->addWidget(label_3);


        retranslateUi(informacion);

        QMetaObject::connectSlotsByName(informacion);
    } // setupUi

    void retranslateUi(QDialog *informacion)
    {
        informacion->setWindowTitle(QApplication::translate("informacion", "Dialog", 0));
        label_2->setText(QString());
        label->setText(QApplication::translate("informacion", "Detalle de tarjeta", 0));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class informacion: public Ui_informacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMACION_H
