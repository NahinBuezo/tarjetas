#include "card.h"
#include <sstream>
#include <string>
#include <QString>

using namespace std;
card::card()
{
}
card::card(QString numero_tarjeta,double monto,QString nombre_cliente,QString pin,QString id){
    this->numero_tarjeta=numero_tarjeta;
    this->monto=monto;
    this->nombre_cliente=nombre_cliente;
    this->pin=pin;
    this->id=id;
    gastos=0.0;

}

card::card(const card& other):numero_tarjeta(other.numero_tarjeta),pin(other.pin),monto(other.monto),nombre_cliente(other.nombre_cliente)
  ,id(other.id){

}

QString card::toQString()const{
    QString ss;
    ss.append("Numero de Tarjeta: ");
    ss.append(numero_tarjeta);
    ss.append(" Nombre del cliente: ");
    ss.append(nombre_cliente);
    ss.append("\n");
    ss.append("Monto o credito de tarjeta: ");
    ss.append(QString::number(monto));
    ss.append(" Gastos: ");
    ss.append(QString::number(gastos));
    return ss;
}
double card::getMonto()const{
    return monto;
}
double card::getGastos()const{
    return gastos;
}
QString card::getNumero_tarjeta()const{
    return numero_tarjeta;
}
QString card::getNombre_cliente()const{
    return nombre_cliente;
}
QString card::getPin()const{
    return pin;
}
QString card::getId()const{
    return id;
}
QString card::getHistorial_gastos()const{
    return  historial_gastos;
}
QString card::getTipo()const{
    return tipo;
}


void card::setNumero_tarjeta(QString numero_tarjeta){
    this->numero_tarjeta=numero_tarjeta;
}

void card::setMonto(double monto){
    this->monto=monto;
}

void card::setNombre_cliente(QString nombre_cliente){
    this->nombre_cliente=nombre_cliente;
}

void card::setPin(QString pin){
    this->pin=pin;
}

void card::setId(QString id){
    this->id=id;
}

void card::setHistorial_gastos(QString transaccion){
    historial_gastos.append("\n");
    historial_gastos.append(transaccion);
}
