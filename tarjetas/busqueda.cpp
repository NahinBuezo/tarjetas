#include "busqueda.h"
#include "ui_busqueda.h"
#include "administracion.h"
#include "card.h"
#include "debito.h"
#include "credito.h"
#include "platino.h"
#include "dorada.h"
#include "clasica.h"
#include <QString>
#include <vector>
#include <QMessageBox>
#include "informacion.h"
busqueda::busqueda(QWidget *parent, vector<card *> *tarjetas) :
    QDialog(parent),
    ui(new Ui::busqueda)
{
    this->tarjetas=tarjetas;
    ui->setupUi(this);
}

busqueda::~busqueda()
{
    delete ui;
}
void busqueda::llenar_campos(int posicion,int tipo_card){
    this->posicion=posicion;
    this->tipo_card=tipo_card;
    card* temporal=this->tarjetas->at(posicion);
    ui->resultado_numero_tarjeta->setText(temporal->getNumero_tarjeta());
    ui->resultado_pin_tarjeta->setText(temporal->getPin());
    ui->resultado_monto_tarjeta->setText(QString::number(temporal->getMonto()));
    ui->resultado_nombre_cliente->setText(temporal->getNombre_cliente());
    ui->resultado_id_cliente->setText(temporal->getId());
}


void busqueda::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply=QMessageBox::question(this,"Advertencia","Esta seguro de eliminar este registro?",QMessageBox::Yes|QMessageBox::No);

    if(reply==QMessageBox::Yes){
        administracion admin;
        tarjetas->erase(tarjetas->begin()+posicion);
        QMessageBox::information(this,"Reporte","La tarjeta ha sido eliminada exitosamente");
        admin.vaciar();


    }


}


void busqueda::on_modificar_tarjeta_clicked()
{

    double monto;
    bool correcto =true;
    int dinero=ui->resultado_monto_tarjeta->text().toDouble(&correcto);

    if(correcto==false){
        QMessageBox::information(this,"Datos no validos","Debe ingresar solo numeros en monto de tarjeta, solo el caracter (.) Esta permitido");
    }else{
        try{
            monto=QString(ui->resultado_monto_tarjeta->text()).toDouble();
            if(tipo_card==0){

                debito* tarjeta_creada=new debito(ui->resultado_numero_tarjeta->text(),monto,ui->resultado_nombre_cliente->text(),ui->resultado_pin_tarjeta->text(),
                                                  ui->resultado_id_cliente->text());

                tarjetas->erase(tarjetas->begin()+posicion);
                tarjetas->push_back(tarjeta_creada);

            }
            if(tipo_card==1){

                platino* tarjeta_creada=new platino(ui->resultado_numero_tarjeta->text(),monto,ui->resultado_nombre_cliente->text(),ui->resultado_pin_tarjeta->text(),
                                                    ui->resultado_id_cliente->text());

                tarjetas->erase(tarjetas->begin()+posicion);
                tarjetas->push_back(tarjeta_creada);

            }
            if(tipo_card==2){

                dorada* tarjeta_creada=new dorada(ui->resultado_numero_tarjeta->text(),monto,ui->resultado_nombre_cliente->text(),ui->resultado_pin_tarjeta->text(),
                                                  ui->resultado_id_cliente->text());

                tarjetas->erase(tarjetas->begin()+posicion);
                tarjetas->push_back(tarjeta_creada);

            }
            if(tipo_card==3){

                clasica* tarjeta_creada=new clasica(ui->resultado_numero_tarjeta->text(),monto,ui->resultado_nombre_cliente->text(),ui->resultado_pin_tarjeta->text(),
                                                    ui->resultado_id_cliente->text());

                tarjetas->erase(tarjetas->begin()+posicion);
                tarjetas->push_back(tarjeta_creada);

            }
            ui->resultado_id_cliente->setText("");
            ui->resultado_nombre_cliente->setText("");
            ui->resultado_monto_tarjeta->setText("");
            ui->resultado_pin_tarjeta->setText("");
            ui->resultado_numero_tarjeta->setText("");
            QMessageBox::information(this,"Modificacion exitosa","El registro se ha modificado y guardado exitosamente");


        }catch(...){
            QMessageBox::information(this,"Error de proceso","Ha ocurrido un error\nSugerencia: Verifique los datos ingresados");
        }
    }
}

void busqueda::on_pushButton_3_clicked()
{
    informacion detalles(NULL);
    card* temporal =tarjetas->at(posicion);
    detalles.imprimir_detalles(temporal->toQString());
    detalles.setModal(true);
    detalles.exec();
}
