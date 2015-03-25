#ifndef SIMULADOR_H
#define SIMULADOR_H
#include "mainwindow.h"
#include <QDialog>
#include <vector>
#include "producto.h"
#include "card.h"
#include <QString>
#include "modificar_producto.h"
namespace Ui {
class simulador;
}

class simulador : public QDialog
{
    Q_OBJECT

public:
    explicit simulador(QWidget *parent = 0, vector<card *> * =0);
    ~simulador();
    void agregar_producto(producto);
    void llenar_tabla_productos();
    void llenar_inventario(vector<producto>*);

private slots:
    void on_ingresar_producto_clicked();

    void on_cargar_productos_clicked();

    void on_ver_producto_clicked();

    void on_login_usuario_clicked();

private:
    vector <producto>* inventario;
    vector <card*>* tarjetas;
    int posicion;
    Ui::simulador *ui;
    enum columna{
        nombre,tipo,marca
    };
};

#endif // SIMULADOR_H
