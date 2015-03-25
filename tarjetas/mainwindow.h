#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <vector>
#include "card.h"
#include "producto.h"


#include <QMainWindow>
using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_entrar_administracion_clicked();

    void on_entrar_simulador_clicked();

    void on_informacion_clicked();


private:
    Ui::MainWindow *ui;
    vector<producto>* inventario;
    vector <card*>* billetera;
};

#endif // MAINWINDOW_H
