/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *entrar_simulador;
    QPushButton *informacion;
    QPushButton *entrar_administracion;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(518, 301);
        MainWindow->setStyleSheet(QStringLiteral("background:/home/nahin/Escritorio/tarjetas/iconos/ubuntu.jpg"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        entrar_simulador = new QPushButton(centralWidget);
        entrar_simulador->setObjectName(QStringLiteral("entrar_simulador"));
        entrar_simulador->setGeometry(QRect(150, 110, 171, 41));
        QIcon icon;
        icon.addFile(QStringLiteral("../iconos/activity_monitor.png"), QSize(), QIcon::Normal, QIcon::Off);
        entrar_simulador->setIcon(icon);
        entrar_simulador->setIconSize(QSize(40, 40));
        informacion = new QPushButton(centralWidget);
        informacion->setObjectName(QStringLiteral("informacion"));
        informacion->setGeometry(QRect(150, 170, 171, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../iconos/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        informacion->setIcon(icon1);
        informacion->setIconSize(QSize(40, 40));
        entrar_administracion = new QPushButton(centralWidget);
        entrar_administracion->setObjectName(QStringLiteral("entrar_administracion"));
        entrar_administracion->setGeometry(QRect(150, 60, 171, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../iconos/user_friend.png"), QSize(), QIcon::Normal, QIcon::Off);
        entrar_administracion->setIcon(icon2);
        entrar_administracion->setIconSize(QSize(40, 40));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 0, 191, 41));
        label_3->setStyleSheet(QStringLiteral("font: 63 28pt \"Ubuntu\";"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 0, 71, 61));
        label->setPixmap(QPixmap(QString::fromUtf8("../iconos/Bank_Icon_64.png")));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 0, 71, 61));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../iconos/Bank_Icon_64.png")));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(false);
        menuBar->setGeometry(QRect(0, 0, 518, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setEnabled(false);
        mainToolBar->setMaximumSize(QSize(500, 300));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sistemas de Tarjes", 0));
        entrar_simulador->setText(QApplication::translate("MainWindow", "Simulador", 0));
        informacion->setText(QApplication::translate("MainWindow", "Informacion", 0));
        entrar_administracion->setText(QApplication::translate("MainWindow", "Administrar", 0));
        label_3->setText(QApplication::translate("MainWindow", "Bienvenido", 0));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
