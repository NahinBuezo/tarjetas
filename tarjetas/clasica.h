#ifndef CLASICA_H
#define CLASICA_H
#include "card.h"
#include "credito.h"
#include <QString>


class clasica: public credito
{
public:
    clasica(QString,double,QString,QString,QString);
    clasica();
    ~clasica();
    virtual QString toQString() const;
    virtual void setGastos(double);
    QString getTipo()const;
    void setTipo(QString);
};

#endif // CLASICA_H
