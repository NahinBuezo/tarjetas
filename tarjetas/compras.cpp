#include "compras.h"
#include "ui_compras.h"
#include <vector>
#include "producto.h"
#include "card.h"
#include <QString>
#include <QMessageBox>

compras::compras(QWidget *parent, vector<producto>* despensa) :
    QDialog(parent),
    ui(new Ui::compras)
{
    subtotal=0.0;
    total=0.0;
    this->mi_carrito=new vector<producto>();
    this->despensa=despensa;
    ui->setupUi(this);
}

compras::~compras()
{
    delete ui;
}
void compras::setTarjeta_de_compras(card *mi_tarjeta){
    this->comprador=mi_tarjeta;
}
void compras::llenar_mercado(){
    try{
        for(int i=0; i<ui->tabla_carrito->rowCount();i++){
            ui->tabla_carrito->removeRow(i);
        }


        for(int i=0; i<this->despensa->size();i++){
            ui->tabla_carrito->insertRow(ui->tabla_carrito->rowCount());
            producto temporal=this->despensa->at(i);
            ui->tabla_carrito->setItem(ui->tabla_carrito->rowCount()-1,nombre,new QTableWidgetItem(temporal.getNombre()));
            ui->tabla_carrito->setItem(ui->tabla_carrito->rowCount()-1,marca,new QTableWidgetItem(temporal.getMarca()));
            ui->tabla_carrito->setItem(ui->tabla_carrito->rowCount()-1,precio,new QTableWidgetItem(temporal.getPrecio()));
        }
    }catch(...){

    }

}

void compras::on_llevar_product_carrito_clicked()
{
    try{
        if(ui->tabla_carrito->currentRow()<0&&ui->tabla_carrito->currentRow()>ui->tabla_carrito->rowCount()-1){

        }else{
            posicion=ui->tabla_carrito->currentRow();
            this->mi_carrito->push_back(this->despensa->at(posicion));

            //se procede a llenar la tabla de caja

            while(ui->tabla_caja->rowCount()>0){
                ui->tabla_caja->removeRow(0);
            }


            for(int i=0; i<this->mi_carrito->size();i++){
                ui->tabla_caja->insertRow(ui->tabla_caja->rowCount());
                producto temporal=this->mi_carrito->at(i);
                ui->tabla_caja->setItem(ui->tabla_caja->rowCount()-1,nombre,new QTableWidgetItem(temporal.getNombre()));
                ui->tabla_caja->setItem(ui->tabla_caja->rowCount()-1,marca,new QTableWidgetItem(temporal.getMarca()));
                ui->tabla_caja->setItem(ui->tabla_caja->rowCount()-1,precio,new QTableWidgetItem(temporal.getPrecio()));
            }



        }
    }catch(...){

    }
}

void compras::on_calcular_factura_clicked()
{
    subtotal=0;
    total=0;
    for(int i=0; i<this->mi_carrito->size(); i++){
        producto escaneado=this->mi_carrito->at(i);
        this->subtotal+=escaneado.getPrecio();
    }
    total=(subtotal*0.15)+subtotal;
    ui->lb_subtotal->setText(QString::number(subtotal));
    ui->lb_impuesto->setText(QString::number(subtotal*0.15));
    ui->lb_total_factura->setText(QString::number(total));

}

void compras::on_pushButton_3_clicked()
{
    try{
        if(ui->tabla_caja->currentRow()<0&&ui->tabla_caja->currentRow()>ui->tabla_caja->currentRow()-1){

        }else{
            this->mi_carrito->erase(mi_carrito->begin()+ui->tabla_caja->currentRow());

            while(ui->tabla_caja->rowCount()>0){
                ui->tabla_caja->removeRow(0);
            }

            //ya retirado el producto del carrito(vector), se actualiza la tabla en caja
            for(int i=0; i<this->mi_carrito->size();i++){
                ui->tabla_caja->insertRow(ui->tabla_caja->rowCount());
                producto temporal=this->mi_carrito->at(i);
                ui->tabla_caja->setItem(ui->tabla_caja->rowCount()-1,nombre,new QTableWidgetItem(temporal.getNombre()));
                ui->tabla_caja->setItem(ui->tabla_caja->rowCount()-1,marca,new QTableWidgetItem(temporal.getMarca()));
                ui->tabla_caja->setItem(ui->tabla_caja->rowCount()-1,precio,new QTableWidgetItem(temporal.getPrecio()));
            }

            subtotal=0;
            total=0;
            for(int i=0; i<this->mi_carrito->size(); i++){
                producto escaneado=this->mi_carrito->at(i);
                this->subtotal+=escaneado.getPrecio();
            }
            total=(subtotal*0.15)+subtotal;
            ui->lb_subtotal->setText(QString::number(subtotal));
            ui->lb_impuesto->setText(QString::number(subtotal*0.15));
            ui->lb_total_factura->setText(QString::number(total));


        }
    }catch(...){

    }
}

void compras::on_pagar_factura_clicked()
{
    if(total==0){
        QMessageBox::information(this,"Informe de factura","No hay producto en caja");
    }else{
        if(this->comprador->getMonto()<total){
            QMessageBox::information(this,"Informe de caja","Saldo insuficiente para efectuar pago");
        }else{
            QString nuevo_gasto("Pago de compra");
            nuevo_gasto.append("\nSubtotal: ");
            nuevo_gasto.append(ui->lb_subtotal->text());
            nuevo_gasto.append("\nImpuesto: ");
            nuevo_gasto.append(ui->lb_impuesto->text());
            nuevo_gasto.append("\nTotal pago: ");
            nuevo_gasto.append(ui->lb_total_factura->text());
            comprador->setGastos(total);
            comprador->setHistorial_gastos(nuevo_gasto);
            ui->lb_impuesto->setText("");
            ui->lb_subtotal->setText("");
            ui->lb_total_factura->setText("");
            while(ui->tabla_caja->rowCount()>0){
                ui->tabla_caja->removeRow(0);
            }
            while(mi_carrito->empty()==false){
                mi_carrito->erase(mi_carrito->begin()+mi_carrito->size()-1);
            }
            this->total=0;

        }
    }
}
