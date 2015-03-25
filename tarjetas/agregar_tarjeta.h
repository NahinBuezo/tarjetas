#ifndef AGREGAR_TARJETA_H
#define AGREGAR_TARJETA_H
#include "card.h"
#include "administracion.h"
#include <vector>
#include <QDialog>
using namespace std;
namespace Ui {
class agregar_tarjeta;
}

class agregar_tarjeta : public QDialog
{
    Q_OBJECT

public:
    explicit agregar_tarjeta(QWidget *parent = 0, vector<card *> * =0);

    ~agregar_tarjeta();
    void agregado(card*);
    void datos_aleatorios();

private slots:
    void on_pushButton_clicked();


private:
    vector <card*>* tarjetas;
    Ui::agregar_tarjeta *ui;
};

#endif // AGREGAR_TARJETA_H
