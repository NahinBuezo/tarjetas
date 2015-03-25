#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <QString>

class producto
{
    double precio;
    QString nombre,marca,tipo;
public:
    producto(QString,QString,QString,double);
    double getPrecio();
    QString getNombre();
    QString getMarca();
    QString getTipo();
    void setPrecio(double);
    void setNombre(QString);
    void setMarca(QString);
    void setTipo(QString);
};

#endif // PRODUCTO_H
