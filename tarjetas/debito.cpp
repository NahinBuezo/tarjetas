#include "debito.h"
#include "card.h"
#include <QString>
#include <QMessageBox>

debito::debito()
{
}
debito::debito(QString numero_tarjeta,double monto,QString nombre_cliente,QString pin,QString id):
    card(numero_tarjeta,monto,nombre_cliente,pin,id){
}
QString debito::toQString()const{
    QString ss;
    ss.append("Tarjeta de debito\n");
    ss.append("Numero de Tarjeta: ");
    ss.append(numero_tarjeta);
    ss.append(" Nombre del cliente: ");
    ss.append(nombre_cliente);
    ss.append("\n");
    ss.append("Monto o credito de tarjeta: ");
    ss.append(QString::number(monto));
    ss.append(" Gastos: ");
    ss.append(QString::number(gastos));
    ss.append("\nCuenta con un impuesto extra  del 2% en sus compras realizadas con la tarjeta");
    return ss;
}

void debito::setGastos(double compra){
    this->gastos+=(compra+(compra*0.02));
    double gasto_reciente=compra+(compra*0.02);
    setMonto(getMonto()-gasto_reciente);
    QString reporte_gasto("Reporte de factura\ntiene un impuesto extra del 2% en su compra\nsu gasto real es de: ");
    reporte_gasto.append(QString::number(gasto_reciente));
    QMessageBox::information(NULL,"Reporte de factura",reporte_gasto);
}
void debito::setTipo(QString tipo){
    this->tipo=tipo;
}
QString debito::getTipo()const{
    return tipo;
}
