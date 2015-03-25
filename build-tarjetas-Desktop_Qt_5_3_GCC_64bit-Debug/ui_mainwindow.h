/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *entrar_administracion;
    QPushButton *entrar_simulador;
    QPushButton *salir_programa;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        entrar_administracion = new QPushButton(centralWidget);
        entrar_administracion->setObjectName(QStringLiteral("entrar_administracion"));
        entrar_administracion->setGeometry(QRect(130, 40, 131, 31));
        QIcon icon;
        icon.addFile(QStringLiteral("../iconos/user_friend.png"), QSize(), QIcon::Normal, QIcon::Off);
        entrar_administracion->setIcon(icon);
        entrar_simulador = new QPushButton(centralWidget);
        entrar_simulador->setObjectName(QStringLiteral("entrar_simulador"));
        entrar_simulador->setGeometry(QRect(130, 80, 131, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../iconos/activity_monitor.png"), QSize(), QIcon::Normal, QIcon::Off);
        entrar_simulador->setIcon(icon1);
        salir_programa = new QPushButton(centralWidget);
        salir_programa->setObjectName(QStringLiteral("salir_programa"));
        salir_programa->setGeometry(QRect(130, 120, 131, 27));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../iconos/close_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        salir_programa->setIcon(icon2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        entrar_administracion->setText(QApplication::translate("MainWindow", "Administrar", 0));
        entrar_simulador->setText(QApplication::translate("MainWindow", "Simulador", 0));
        salir_programa->setText(QApplication::translate("MainWindow", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
