#ifndef INFORMACION_H
#define INFORMACION_H

#include <QDialog>
#include <QString>

namespace Ui {
class informacion;
}

class informacion : public QDialog
{
    Q_OBJECT

public:
    explicit informacion(QWidget *parent = 0);
    ~informacion();
    void imprimir_detalles(QString);

private:
    Ui::informacion *ui;
};

#endif // INFORMACION_H
