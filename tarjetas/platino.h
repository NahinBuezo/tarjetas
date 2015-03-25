#ifndef PLATINO_H
#define PLATINO_H
#include "card.h"
#include "credito.h"

class platino: public credito
{
public:
    platino(QString,double,QString,QString,QString);
    platino();
    virtual QString toQString() const;
    virtual void setGastos(double);
    QString getTipo()const;
    void setTipo(QString);
};

#endif // PLATINO_H
