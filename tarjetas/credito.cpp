#include "credito.h"
#include "card.h"
#include <QString>


credito::credito()
{
}
credito::credito(QString numero_tarjeta,double monto,QString nombre_cliente,QString pin,QString id):
    card(numero_tarjeta,monto,nombre_cliente,pin,id){
}
QString credito::toQString()const{
    QString ss;
    ss.append("Tarjeta de credito\n");
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

void credito::setGastos(double compra){
    this->gastos+=(compra+(compra*0.02));
}

QString credito::getTipo()const{
    return tipo;
}
