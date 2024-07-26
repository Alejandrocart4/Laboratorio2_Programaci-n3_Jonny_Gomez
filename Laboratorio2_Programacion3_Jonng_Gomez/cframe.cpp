#include "cframe.h"
#include "ui_cframe.h"
#include <QCoreApplication>
#include <QApplication>

cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
{
    ui->setupUi(this);
}

cframe::~cframe()
{
    delete ui;
}




void cframe::on_pB_Ex1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void cframe::on_pB_Ex2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void cframe::on_pB_Ex3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void cframe::on_pB_Close_clicked()
{
   QCoreApplication::quit();
}

void cframe::on_SB_Fila_valueChanged(int arg1)
{
    int height = ui->SB_Fila->value();

    QString triangulo;
    int width = 2 * height - 1;

    for (int i = 1; i <= height; ++i) {
        int Asteriscos = 2 * i - 1;

        int Espacios = (width - Asteriscos) / 2;

        triangulo += QString(Espacios, ' ');
        triangulo += QString(Asteriscos, '*');
        triangulo += '\n';
    }

    ui->txt_Mostrar->setText(triangulo);
}


void cframe::on_PB_calcular_clicked()
{



    int suma = 0;
    bool control = false;
    bool validez = false;

    QString numero = ui->num_tarjeta->text();
    int tamaño = numero.length();


    for (int i = tamaño - 1; i >= 0; --i) {
        int digito = numero[i].digitValue();

        if (control) {
            digito *= 2;
            if (digito > 9) {
                digito = (digito / 10) + (digito % 10);
            }
        }

        suma += digito;
        control = !control;
    }


    if (suma % 10 == 0) {
        validez = true;
        ui->txt_mostrar->setText("Su Tarjeta es Valida");
    } else {
        validez = false;
        ui->txt_mostrar->setText("Su Tarjeta NO es Valida");
    }
        // ui->txt_mostrar->setText("La tarjeta es inválida.");


}

