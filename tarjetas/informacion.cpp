#include "informacion.h"
#include "ui_informacion.h"
#include <QString>

informacion::informacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::informacion)
{

    ui->setupUi(this);
}

informacion::~informacion()
{
    delete ui;
}
void informacion::imprimir_detalles(QString texto){
    ui->texto_tarjeta->setText(texto);
}
