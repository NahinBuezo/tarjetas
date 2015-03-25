#ifndef MODIFICAR_PRODUCTO_H
#define MODIFICAR_PRODUCTO_H
#include "producto.h"
#include "simulador.h"
#include <vector>

#include <QDialog>

namespace Ui {
class modificar_producto;
}

class modificar_producto : public QDialog
{
    Q_OBJECT

public:
    explicit modificar_producto(QWidget *parent = 0, vector<producto>* =0);
    ~modificar_producto();
    void setposicion(int);
    void setNombre_producto(QString);
    void setMarca_producto(QString);
    void setTipo_producto(QString);
    void setPrecio_producto(double);

private slots:
    void on_remover_producto_clicked();

    void on_modificar_product_clicked();

private:
    int posicion;
    vector <producto>* inventario;
    Ui::modificar_producto *ui;
};

#endif // MODIFICAR_PRODUCTO_H
