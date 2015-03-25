#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "administracion.h"
#include "card.h"
#include "busqueda.h"
#include <vector>
#include <QMessageBox>
#include "simulador.h"
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    inventario=new vector<producto>();
    billetera = new vector<card*>();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    try{
        for(int i=0; i<billetera->size();i++){
            delete billetera->at(i);
        }

    }catch(...){

    }

    delete ui;
}



void MainWindow::on_entrar_administracion_clicked()
{
    //creacion del objeto para llamar la ventana de dialogo de administacion y modificacion de sus valores
    try{

        administracion admin(NULL, billetera);
        admin.setModal(true);
        admin.exec();
    }catch(...){
        QMessageBox::information(this,"Error","No se pudo cargar archivos");
    }
}

void MainWindow::on_entrar_simulador_clicked()
{
    if(billetera->empty()){
        QMessageBox::information(this, "Advertencia","Debe tener por lo menos un registro de tarjetas");
    }else{
        simulador simulacion(NULL,billetera);
        simulacion.llenar_inventario(this->inventario);
        simulacion.setModal(true);
        simulacion.exec();
    }
}



void MainWindow::on_informacion_clicked()
{
    QMessageBox::information(this,"Sistemas de tarjetas","Este programa tiene como unica tarea\n"
                             "la administracion y simulacion de uso de tarjetas de credito y debito");
}




