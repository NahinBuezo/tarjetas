#ifndef CREDITO_H
#define CREDITO_H
#include <QString>
#include "card.h"
using std::string;


class credito: public card{
public:
    credito(QString,double,QString,QString,QString);
    credito();
    virtual QString toQString() const;
    virtual void setGastos(double);
    QString getTipo()const;
    void setTipo(QString);
};

#endif // CREDITO_H
