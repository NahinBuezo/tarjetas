#ifndef CARD_H
#define CARD_H
#include <sstream>
#include <QString>
#include <string>

using namespace std;
class card
{
protected:
 QString numero_tarjeta;
 double monto;
 QString nombre_cliente;
 QString pin;
 QString id;
 double gastos;
 QString historial_gastos;
 QString tipo;

public:
 card(QString, double, QString, QString, QString);
 card(const card&);
 virtual QString toQString()const;
 double getMonto()const;
 double getGastos()const;
 QString getTipo()const;
 QString getNumero_tarjeta()const;
 QString getNombre_cliente()const;
 QString getPin()const;
 QString getId()const;
 QString getHistorial_gastos()const;
 virtual void setGastos(double)=0;
 void setNumero_tarjeta(QString);
 void setMonto(double);
 void setNombre_cliente(QString);
 void setPin(QString);
 void setId(QString);
 void setHistorial_gastos(QString);
 void setTipo(QString);


    card();
};

#endif // CARD_H
