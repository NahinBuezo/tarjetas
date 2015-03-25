#include "agregar_tarjeta.h"
#include "ui_agregar_tarjeta.h"
#include "administracion.h"
#include "card.h"
#include <QtCore>
#include <QtGui>
#include <vector>
#include <QMessageBox>
#include <time.h>
#include "debito.h"
#include "credito.h"
#include "platino.h"
#include "dorada.h"
#include "clasica.h"
using namespace std;

agregar_tarjeta::agregar_tarjeta(QWidget *parent,vector<card*>* tar) :
    QDialog(parent),
    ui(new Ui::agregar_tarjeta)
{
    tarjetas=tar;

    ui->setupUi(this);
    datos_aleatorios();
}

agregar_tarjeta::~agregar_tarjeta()
{
    delete ui;
}
void agregar_tarjeta::agregado(card* nueva_card){
    this->tarjetas->push_back(nueva_card);
}
void agregar_tarjeta::datos_aleatorios(){
    //genera el numero de la tarjeta de credito y pin de la misma
    srand(time(0));
    QString serie_tarjeta;
    QString mi_pin;
    for(int i=0; i<6;i++){
        serie_tarjeta.append(QString::number(rand()%9));
    }
    for(int i=0; i<4;i++){
        int number=(rand()%9);
        mi_pin.append(QString::number(number));
    }
    ui->numero_tarjeta_nueva->setText(serie_tarjeta);
    ui->pin_tarjeta_nueva->setText(mi_pin);

}

void agregar_tarjeta::on_pushButton_clicked()
{
    if(ui->numero_tarjeta_nueva->text().isEmpty()||ui->pin_tarjeta_nueva->text().isEmpty()||
            ui->monto_tarjeta_nueva->text().isEmpty()||ui->nombre_cliente_nuevo->text().isEmpty()||
            ui->id_cliente_nuevo->text().isEmpty()){
        QMessageBox::information(this,"Datos imcompletos","Debe llenar todos los campos de datos");

    }else{
        double monto;
        bool correcto =true;
        int dinero=ui->monto_tarjeta_nueva->text().toDouble(&correcto);
        if(correcto==false){
            QMessageBox::information(this,"Datos no validos","Debe ingresar solo numeros en monto de tarjeta, solo el caracter (.) Esta permitido");
        }else{
            try{
                int tarjeta_seleccionada=ui->tipo_tarjeta_nueva->currentIndex();
                monto=QString(ui->monto_tarjeta_nueva->text()).toDouble();
                if(tarjeta_seleccionada==0){
                    debito* tarjeta_creada=new debito(ui->numero_tarjeta_nueva->text(),monto,ui->nombre_cliente_nuevo->text(),ui->pin_tarjeta_nueva->text(),
                                                      ui->id_cliente_nuevo->text());
                    tarjeta_creada->setTipo("Debito");
                    agregado(tarjeta_creada);

                }
                if(tarjeta_seleccionada==1){
                    platino* tarjeta_creada=new platino(ui->numero_tarjeta_nueva->text(),monto,ui->nombre_cliente_nuevo->text(),ui->pin_tarjeta_nueva->text(),
                                                        ui->id_cliente_nuevo->text());
                    tarjeta_creada->setTipo("Platino");
                    agregado(tarjeta_creada);
                }
                if(tarjeta_seleccionada==2){
                    dorada* tarjeta_creada=new dorada(ui->numero_tarjeta_nueva->text(),monto,ui->nombre_cliente_nuevo->text(),ui->pin_tarjeta_nueva->text(),
                                                      ui->id_cliente_nuevo->text());
                    tarjeta_creada->setTipo("Dorada");
                    agregado(tarjeta_creada);
                }
                if(tarjeta_seleccionada==3){
                    clasica* tarjeta_creada=new clasica(ui->numero_tarjeta_nueva->text(),monto,ui->nombre_cliente_nuevo->text(),ui->pin_tarjeta_nueva->text(),
                                                        ui->id_cliente_nuevo->text());
                    tarjeta_creada->setTipo("Clasica");
                    agregado(tarjeta_creada);
                }

                ui->id_cliente_nuevo->setText("");
                ui->nombre_cliente_nuevo->setText("");
                ui->monto_tarjeta_nueva->setText("");
                datos_aleatorios();
                QMessageBox::information(this,"Agrego exitoso","El registro se ha creado y guardado exitosamente");

            }catch(...){
                QMessageBox::information(this,"Error de proceso","Ha ocurrido un error\nSugerencia: Verifique los datos ingresados");
            }
        }


    }
}


