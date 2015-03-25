#include "simulador.h"
#include "ui_simulador.h"
#include <QMessageBox>
#include "modificar_producto.h"
#include "producto.h"
#include <vector>
#include "card.h"
#include <QString>
#include "compras.h"


simulador::simulador(QWidget *parent, vector<card*> *tarjetas) :
    QDialog(parent),
    ui(new Ui::simulador)
{
    inventario=new vector<producto>();
    this->tarjetas=tarjetas;
    ui->setupUi(this);
}
void simulador::agregar_producto(producto nuevo_producto){
    this->inventario->push_back(nuevo_producto);
}

void simulador::llenar_inventario(vector<producto> *provicion){
    this->inventario=provicion;
}

void simulador::llenar_tabla_productos(){
    try{
        for(int i=0; i<ui->tabla_productos->rowCount();i++){
            ui->tabla_productos->removeRow(i);
        }
    }catch(...){

    }

    if(inventario->empty()==false){
        try{

            for(int i=0; i<inventario->size();i++){
                ui->tabla_productos->insertRow(ui->tabla_productos->rowCount());
                producto temporal=this->inventario->at(i);
                ui->tabla_productos->setItem(ui->tabla_productos->rowCount()-1,nombre,new QTableWidgetItem(temporal.getNombre()));
                ui->tabla_productos->setItem(ui->tabla_productos->rowCount()-1,tipo,new QTableWidgetItem(temporal.getTipo()));
                ui->tabla_productos->setItem(ui->tabla_productos->rowCount()-1,marca,new QTableWidgetItem(temporal.getMarca()));
            }
        }catch(...){
            QMessageBox::warning(this,"Error al cargar datos","No se pudieron cargar los datos");
        }

    }
}

simulador::~simulador()
{
    delete ui;
}

void simulador::on_ingresar_producto_clicked()
{
    if(ui->nombre_producto->text().isEmpty()||ui->marca_producto->text().isEmpty()||ui->precio_producto->text().isEmpty()){
        QMessageBox::information(this,"Parametros incompletos","Debe llenar todos los campos");

    }else{
        double monto;
        bool correcto =true;
        QString cadena_temporal=ui->precio_producto->text();
        for(int i=0; i<ui->precio_producto->text().length();i++){
            if(cadena_temporal[i]!='1'&&cadena_temporal[i]!='2'&&cadena_temporal[i]!='3'&&cadena_temporal[i]!='4'&&cadena_temporal[i]!='5'
                    &&cadena_temporal[i]!='6'&&cadena_temporal[i]!='7'&&cadena_temporal[i]!='8'&&cadena_temporal[i]!='9'&&cadena_temporal[i]!='.'
                    &&cadena_temporal[i]!='0'){
                correcto=false;
            }
        }
        if(correcto==false){
            QMessageBox::information(this,"Datos no validos","Debe ingresar solo numeros en el precio de productos, solo el caracter (.) Esta permitido");
        }else{
            try{
                monto=QString(ui->precio_producto->text()).toDouble();
                producto producto_nuevo(ui->nombre_producto->text(),ui->marca_producto->text(), ui->tipo_producto->text() ,monto);
                inventario->push_back(producto_nuevo);
                ui->nombre_producto->setText("");
                ui->marca_producto->setText("");
                ui->precio_producto->setText("");
                ui->tipo_producto->setText("");
                llenar_tabla_productos();

                QMessageBox::information(this,"Agrego exitoso","El registro de producto se ha creado y guardado exitosamente");

            }catch(...){
                QMessageBox::information(this,"Error de proceso","Ha ocurrido un error\nSugerencia: Verifique los datos ingresados");
            }
        }
    }

}



void simulador::on_cargar_productos_clicked()
{
    try{
        llenar_tabla_productos();
    }catch(...){

    }
}

void simulador::on_ver_producto_clicked()
{
    try{
        if(ui->tabla_productos->currentRow()>=0||ui->tabla_productos->currentRow()<ui->tabla_productos->rowCount()){
            posicion=ui->tabla_productos->currentRow();
            modificar_producto cambio(NULL,this->inventario);
            cambio.setposicion(posicion);
            producto temporal=inventario->at(posicion);
            cambio.setNombre_producto(temporal.getNombre());
            cambio.setMarca_producto(temporal.getMarca());
            cambio.setTipo_producto(temporal.getTipo());
            cambio.setPrecio_producto(temporal.getPrecio());
            cambio.setModal(true);
            cambio.exec();
        }

    }catch(...){

    }

}

void simulador::on_login_usuario_clicked()
{
    bool correcto=false;
    card*comprador;
    try{
        for(int i=0;i<tarjetas->size();i++){
            comprador=this->tarjetas->at(i);
            if(comprador->getNumero_tarjeta()==ui->tarjeta_simulador->text()){
                if(comprador->getPin()==ui->pin_simulador->text()){
                    correcto=true;
                    break;

                }

            }
        }
        if(correcto==false){
            QMessageBox::information(this,"Login","Numero de tarjeta y PIN no coinciden");

        }else{

            compras cliente(NULL,inventario);
            cliente.setTarjeta_de_compras(comprador);
            cliente.llenar_mercado();
            cliente.setModal(true);
            cliente.exec();
        }



    }catch(...){
        QMessageBox::information(this,"Error","No se pudo verificar el usuario");
    }
}
