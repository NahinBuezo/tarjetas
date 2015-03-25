#ifndef BUSQUEDA_H
#define BUSQUEDA_H
#include "card.h"
#include <vector>
#include <QDialog>
using namespace std;
namespace Ui {
class busqueda;
}

class busqueda : public QDialog
{
    Q_OBJECT

public:
    explicit busqueda(QWidget *parent,vector<card*>* =0);
    ~busqueda();
    void llenar_campos(int,int);

private slots:
    void on_pushButton_clicked();


    void on_modificar_tarjeta_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::busqueda *ui;
    vector<card*>* tarjetas;
    int posicion;
    int tipo_card;
};

#endif // BUSQUEDA_H
