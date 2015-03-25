#ifndef COMPRAS_H
#define COMPRAS_H

#include <QDialog>
#include <vector>
#include <QString>
#include "producto.h"
#include "card.h"

namespace Ui {
class compras;
}

class compras : public QDialog
{
    Q_OBJECT

public:
    explicit compras(QWidget *parent = 0, vector<producto>* =0);
    ~compras();
    void setTarjeta_de_compras(card*);
    void llenar_mercado();

private slots:
    void on_llevar_product_carrito_clicked();

    void on_calcular_factura_clicked();

    void on_pushButton_3_clicked();

    void on_pagar_factura_clicked();

private:
    double subtotal;
    double total;
    vector<producto>* mi_carrito;
    int posicion;
    card* comprador;
    vector<producto>*despensa;
    Ui::compras *ui;
    enum columna{
        nombre,marca,precio
    };
};

#endif // COMPRAS_H
