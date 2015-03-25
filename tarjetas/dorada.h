#ifndef DORADA_H
#define DORADA_H
#include "card.h"
#include "credito.h"
#include <QString>

class dorada: public credito
{
public:
    dorada(QString,double,QString,QString,QString);
    dorada();
    virtual QString toQString() const;
    virtual void setGastos(double);
    QString getTipo()const;
    void setTipo(QString);
};

#endif // DORADA_H
