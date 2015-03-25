#ifndef DEBITO_H
#define DEBITO_H
#include "card.h"
#include <QString>

class debito: public card{
public:
    debito(QString,double,QString,QString,QString);
    debito();
    virtual QString toQString() const;
    virtual void setGastos(double);
    void setTipo(QString);
    QString getTipo()const;
};

#endif // DEBITO_H
