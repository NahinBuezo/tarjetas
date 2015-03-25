#include "dorada.h"
#include "card.h"
#include "credito.h"
#include <QString>
#include <QMessageBox>
dorada::dorada()
{
}
dorada::dorada(QString numero_tarjeta,double monto,QString nombre_cliente,QString pin,QString id):
    credito(numero_tarjeta,monto,nombre_cliente,pin,id){
}
QString dorada::toQString()const{
    QString ss;
    ss.append("Tarjeta de credito dorada\n");
    ss.append("Numero de Tarjeta: ");
    ss.append(numero_tarjeta);
    ss.append(" Nombre del cliente: ");
    ss.append(nombre_cliente);
    ss.append("\n");
    ss.append("Monto o credito de tarjeta: ");
    ss.append(QString::number(monto));
    ss.append(" Gastos: ");
    ss.append(QString::number(gastos));
    ss.append("Cuenta con un descuento del 7% en sus compras");
    return ss;
}

void dorada::setGastos(double compra){
    this->gastos+=(compra-(compra*0.07));
    double gasto_reciente=compra-(compra*0.07);
    setMonto(getMonto()-gasto_reciente);
    QString reporte_gasto("Reporte de factura\ntiene un descuento del 7% en su compra\nsu gasto real es de: ");
    reporte_gasto.append(QString::number(gasto_reciente));
    QMessageBox::information(NULL,"Reporte de factura",reporte_gasto);
}
void dorada::setTipo(QString tipo){
    this->tipo=tipo;
}
QString dorada::getTipo()const{
    return tipo;
}
