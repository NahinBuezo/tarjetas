#include "administracion.h"
#include "agregar_tarjeta.h"
#include "ui_administracion.h"
#include "mainwindow.h"
#include "busqueda.h"
#include "card.h"
#include "debito.h"
#include "credito.h"
#include "platino.h"
#include "clasica.h"
#include "dorada.h"
#include <QtCore>
#include <QtGui>
#include <QString>
#include <QStringList>
#include <vector>
#include <string>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <typeinfo>
using namespace std;
administracion::administracion(QWidget *parent,vector<card*>* tarjetas) :
    QDialog(parent),
    ui(new Ui::administracion)
{
    this->tarjetas=tarjetas;

    ui->setupUi(this);
}

administracion::~administracion()
{
    delete ui;
}
void administracion::vaciar(){

    while(ui->tabla_tarjetas->rowCount()>0){
        ui->tabla_tarjetas->removeRow(0);
    }
}

void administracion::llenar_tabla(int lugar){
    try{

        if(lugar==0){
            for(int i=0; i<this->tarjetas->size();i++){

                card* temporal=this->tarjetas->at(i);
                if(temporal->getTipo()=="Debito"){
                    ui->tabla_tarjetas->insertRow(ui->tabla_tarjetas->rowCount());
                    num_tarjeta=temporal->getNumero_tarjeta();
                    nombre_clientes=temporal->getNombre_cliente();

                    ui->tabla_tarjetas->setItem(ui->tabla_tarjetas->rowCount()-1,numero,new QTableWidgetItem(num_tarjeta));
                    ui->tabla_tarjetas->setItem(ui->tabla_tarjetas->rowCount()-1,nombre,new QTableWidgetItem(nombre_clientes));
                }
            }

        }
        if(lugar==1){
            for(int i=0; i<this->tarjetas->size();i++){
                card* temporal=this->tarjetas->at(i);
                if(temporal->getTipo()=="Platino"){
                    ui->tabla_tarjetas->insertRow(ui->tabla_tarjetas->rowCount());
                    num_tarjeta=temporal->getNumero_tarjeta();
                    nombre_clientes=temporal->getNombre_cliente();

                    ui->tabla_tarjetas->setItem(ui->tabla_tarjetas->rowCount()-1,numero,new QTableWidgetItem(num_tarjeta));
                    ui->tabla_tarjetas->setItem(ui->tabla_tarjetas->rowCount()-1,nombre,new QTableWidgetItem(nombre_clientes));
                }
            }

        }
        if(lugar==2){
            for(int i=0; i<this->tarjetas->size();i++){

                card* temporal=this->tarjetas->at(i);
                if(temporal->getTipo()=="Dorada"){
                    ui->tabla_tarjetas->insertRow(ui->tabla_tarjetas->rowCount());
                    num_tarjeta=temporal->getNumero_tarjeta();
                    nombre_clientes=temporal->getNombre_cliente();

                    ui->tabla_tarjetas->setItem(ui->tabla_tarjetas->rowCount()-1,numero,new QTableWidgetItem(num_tarjeta));
                    ui->tabla_tarjetas->setItem(ui->tabla_tarjetas->rowCount()-1,nombre,new QTableWidgetItem(nombre_clientes));
                }
            }

        }
        if(lugar==3){
            for(int i=0; i<this->tarjetas->size();i++){

                card* temporal=this->tarjetas->at(i);
                if(temporal->getTipo()=="Clasica"){
                    ui->tabla_tarjetas->insertRow(ui->tabla_tarjetas->rowCount());
                    num_tarjeta=temporal->getNumero_tarjeta();
                    nombre_clientes=temporal->getNombre_cliente();

                    ui->tabla_tarjetas->setItem(ui->tabla_tarjetas->rowCount()-1,numero,new QTableWidgetItem(num_tarjeta));
                    ui->tabla_tarjetas->setItem(ui->tabla_tarjetas->rowCount()-1,nombre,new QTableWidgetItem(nombre_clientes));
                }
            }

        }


    }catch(...){
        QMessageBox::information(this,"Error","No se pudo cargar los datos");
    }


}





void administracion::on_pushButton_2_clicked()
{
    try{
        if(ui->tabla_tarjetas->currentRow()<0 &&ui->tabla_tarjetas->currentRow()>(ui->tabla_tarjetas->rowCount()-1)){

            QMessageBox::information(this,"Opcion no valida","Debe seleccionar un dato de la tabla");
        }else{
            int ocurrencia;
            QTableWidgetItem* numero_referencia=ui->tabla_tarjetas->item(ui->tabla_tarjetas->currentRow(),0);
            busqueda nueva_busqueda(NULL,tarjetas);
            for(int i=0; i<tarjetas->size(); i++){
                card* temporal=tarjetas->at(i);
                if(numero_referencia->text()==temporal->getNumero_tarjeta()){
                    ocurrencia=i;

                }
            }

            nueva_busqueda.llenar_campos(ocurrencia,ui->lista_tipos_tarjeta->currentIndex());
            nueva_busqueda.setModal(true);
            nueva_busqueda.exec();

        }
    }catch(...){

    }
}


void administracion::on_nueva_card_clicked()
{
    agregar_tarjeta nuevo_registro_tarjeta(NULL, tarjetas);
    nuevo_registro_tarjeta.setModal(true);
    nuevo_registro_tarjeta.exec();

}



void administracion::on_lista_tipos_tarjeta_currentIndexChanged(int index)
{

    while(ui->tabla_tarjetas->rowCount()>0){
        ui->tabla_tarjetas->removeRow(0);
    }
    llenar_tabla(index);
}


