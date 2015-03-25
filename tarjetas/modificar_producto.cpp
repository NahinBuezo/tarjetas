#include "modificar_producto.h"
#include "ui_modificar_producto.h"
#include <vector>
#include "producto.h"
#include "simulador.h"
#include <QString>
#include "simulador.h"
#include <QMessageBox>

modificar_producto::modificar_producto(QWidget *parent, vector<producto>*inventario) :
    QDialog(parent),
    ui(new Ui::modificar_producto)
{
    this->inventario=inventario;
    ui->setupUi(this);
}

modificar_producto::~modificar_producto()
{
    delete ui;
}

void modificar_producto::setposicion(int posicion){
    this->posicion=posicion;
}
void modificar_producto::setNombre_producto(QString nombre){
    ui->detalle_nombre_producto->setText(nombre);
}
void modificar_producto::setMarca_producto(QString marca){
    ui->detalle_marca_producto->setText(marca);
}
void modificar_producto::setPrecio_producto(double precio){
    ui->detalle_precio_producto->setText(QString::number(precio));
}
void modificar_producto::setTipo_producto(QString tipo){
    ui->detalle_tipo_producto->setText(tipo);
}

void modificar_producto::on_remover_producto_clicked()
{
   try{
        inventario->erase(inventario->begin()+posicion);
        ui->detalle_nombre_producto->setText("");
        ui->detalle_marca_producto->setText("");
        ui->detalle_precio_producto->setText("");
        ui->detalle_tipo_producto->setText("");

    }catch(...){}
}

void modificar_producto::on_modificar_product_clicked()
{
    double monto;
    bool correcto =true;
    QString cadena_temporal=ui->detalle_precio_producto->text();
    for(int i=0; i<ui->detalle_precio_producto->text().length();i++){
        if(cadena_temporal[i]!='1'&&cadena_temporal[i]!='2'&&cadena_temporal[i]!='3'&&cadena_temporal[i]!='4'&&cadena_temporal[i]!='5'
                &&cadena_temporal[i]!='6'&&cadena_temporal[i]!='7'&&cadena_temporal[i]!='8'&&cadena_temporal[i]!='9'&&cadena_temporal[i]!='.'){
            correcto=false;
        }
    }
    if(correcto==false){
        QMessageBox::information(this,"Datos no validos","Debe ingresar solo numeros en el precio de productos, solo el caracter (.) Esta permitido");
    }else{
        try{
            inventario->erase(inventario->begin()+posicion);
            monto=QString(ui->detalle_precio_producto->text()).toDouble();
            producto producto_nuevo(ui->detalle_nombre_producto->text(),ui->detalle_marca_producto->text(),ui->detalle_tipo_producto->text(),monto);
            inventario->push_back(producto_nuevo);
            ui->detalle_nombre_producto->setText("");
            ui->detalle_marca_producto->setText("");
            ui->detalle_tipo_producto->setText("");
            ui->detalle_precio_producto->setText("");

            QMessageBox::information(this,"Modificacion exitosa","El registro de producto se ha modificado y guardado exitosamente");

        }catch(...){
            QMessageBox::information(this,"Error de proceso","Ha ocurrido un error\nSugerencia: Verifique los datos ingresados");
        }
    }

}
