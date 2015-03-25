#include "platino.h"
#include "card.h"
#include "credito.h"
#include <QString>
#include <QMessageBox>

platino::platino()
{
}
platino::platino(QString numero_tarjeta,double monto,QString nombre_cliente,QString pin,QString id):
    credito(numero_tarjeta,monto,nombre_cliente,pin,id){
}
QString platino::toQString()const{
    QString ss;
    ss.append("Tarjeta de credito platino\n");
    ss.append("Numero de Tarjeta: ");
    ss.append(numero_tarjeta);
    ss.append("\nNombre del cliente: ");
    ss.append(nombre_cliente);
    ss.append("\n");
    ss.append("Monto o credito de tarjeta: ");
    ss.append(QString::number(monto));
    ss.append("\nGastos: ");
    ss.append(QString::number(gastos));
    ss.append("\nsCuenta con un descuento del 3% en sus compras");
    return ss;
}

void platino::setGastos(double compra){
    this->gastos+=(compra-(compra*0.03));
    double gasto_reciente=compra-(compra*0.03);
    setMonto(getMonto()-gasto_reciente);

    QString reporte_gasto("Reporte de factura\ntiene un descuento del 3% en su compra\nsu gasto real es de: ");
    reporte_gasto.append(QString::number(gasto_reciente));
    QMessageBox::information(NULL,"Reporte de factura",reporte_gasto);
}
void platino::setTipo(QString tipo){
    this->tipo=tipo;
}
QString platino::getTipo()const{
    return tipo;
}
