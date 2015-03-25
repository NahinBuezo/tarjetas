#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H

#include "card.h"
#include <vector>
#include <QDialog>
#include <QString>
using namespace std;
namespace Ui {
class administracion;
}

class administracion : public QDialog
{
    Q_OBJECT

public:
    explicit administracion(QWidget *parent = 0, vector<card *> * =0);
    ~administracion();
    void setTarjetas(vector<card>);
    void llenar_tabla(int);
    void vaciar();

private slots:


    void on_pushButton_2_clicked();


    void on_nueva_card_clicked();


    void on_lista_tipos_tarjeta_currentIndexChanged(int index);



private:
    Ui::administracion *ui;
    vector <card*>* tarjetas;
    QString num_tarjeta;
    QString nombre_clientes;
    enum columna{
        numero,nombre
    };
};

#endif // ADMINISTRACION_H
