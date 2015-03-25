#include "producto.h"
#include <QString>

producto::producto(QString nombre,QString marca,QString tipo,double precio)
{
    this->nombre=nombre;
    this->marca=marca;
    this->tipo=tipo;
    this->precio=precio;
}
QString producto::getNombre(){
    return nombre;
}
QString producto::getMarca(){
    return marca;
}
QString producto::getTipo(){
    return tipo;
}
double producto::getPrecio(){
    return precio;
}

void producto::setNombre(QString nombre){
    this->nombre=nombre;
}
void producto::setMarca(QString marca){
    this->marca=marca;
}
void producto::setTipo(QString tipo){
    this->tipo=tipo;
}
void producto::setPrecio(double precio){
    this->precio=precio;
}

