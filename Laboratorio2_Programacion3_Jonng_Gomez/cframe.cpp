#include "cframe.h"
#include "ui_cframe.h"
#include <QCoreApplication>
#include <QApplication>
#include "sstream"

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
    bool paso = false;
    bool puerta = false;

    QString numero = ui->num_tarjeta->text();
    int tamaño = numero.length();


    for (int i = tamaño - 1; i >= 0; --i) {
        int digito = numero[i].digitValue();

        if (paso) {
            digito *= 2;
            if (digito > 9) {
                digito = (digito / 10) + (digito % 10);
            }
        }

        suma += digito;
        paso = !paso;
    }


    if (suma % 10 == 0) {
        puerta = true;
        ui->txt_mostrar->setText("La tarjeta es válida.");
    } else {
        puerta = false;
        ui->txt_mostrar->setText("La tarjeta es inválida.");
    }
        // ui->txt_mostrar->setText("La tarjeta es inválida.");
}


void cframe::on_Btn_conver1_clicked()
{
    QString input = ui->LE_Ingreso->text();
    if (input.isEmpty() || input.length() != 1) {
        ui->LE_Respuesta->setText("Por favor, ingrese una sola letra.");
        return;
    }

    char letra = input.toStdString()[0];
    int decimal = static_cast<int>(letra);

    std::string binario;
    for (int i = 7; i >= 0; --i) {
        binario += (decimal & (1 << i)) ? '1' : '0';
    }

    ui->LE_Respuesta->setText(QString("Binario: %1").arg(QString::fromStdString(binario)));
}


void cframe::on_Btn_conver2_clicked()
{
    QString input = ui->LE_Ingreso->text();
    if (input.isEmpty() || input.length() != 1) {
        ui->LE_Respuesta->setText("Por favor, ingrese una sola letra.");
        return;
    }

    char letra = input.toStdString()[0];
    int decimal = static_cast<int>(letra);
    ui->LE_Respuesta->setText(QString("Decimal: %1").arg(decimal));
}


void cframe::on_Btn_conver3_clicked()
{
    QString input = ui->LE_Ingreso->text();
    if (input.isEmpty() || input.length() != 1) {
        ui->LE_Respuesta->setText("Por favor, ingrese una sola letra.");
        return;
    }

    char letra = input.toStdString()[0];
    int decimal = static_cast<int>(letra);
    std::stringstream ss;
    ss << std::hex << std::uppercase << decimal;
    ui->LE_Respuesta->setText(QString("Hexadecimal: %1").arg(QString::fromStdString(ss.str())));
}


void cframe::on_Btn_conver4_clicked()
{
    QString input = ui->LE_Ingreso->text();
    if (input.isEmpty() || input.length() != 8) {
        ui->LE_Respuesta->setText("Por favor, ingrese un número binario de 8 bits.");
        return;
    }

    std::string binario = input.toStdString();
    int decimal = 0;

    for (char bit : binario) {
        decimal = (decimal << 1) | (bit == '1' ? 1 : 0);
    }

    char letra = static_cast<char>(decimal);
    ui->LE_Respuesta->setText(QString("Letra: %1").arg(QString(letra)));
}


void cframe::on_Btn_conver5_clicked()
{
    QString input = ui->LE_Ingreso->text();
    bool ok;
    int decimal = input.toInt(&ok);

    if (!ok || decimal < 0 || decimal > 225)
    //if (!ok || decimal < 0 || decimal > 255)
    {
        ui->LE_Respuesta->setText("Número decimal no válido. Ingrese un valor entre 0 y 255.");
    } else {
        char letra = static_cast<char>(decimal);
        ui->LE_Respuesta->setText(QString("Letra: %1").arg(QString(letra)));
    }
}


void cframe::on_Btn_conver6_clicked()
{
    QString input = ui->LE_Ingreso->text();
    bool ok;
    int decimal = input.toInt(&ok, 16);

    if (!ok || decimal < 0 || decimal > 255) {
        ui->LE_Respuesta->setText("Número hexadecimal no válido. Ingrese un valor correcto.");
    } else {
        char letra = static_cast<char>(decimal);
        ui->LE_Respuesta->setText(QString("Letra: %1").arg(QString(letra)));
    }
}


void cframe::on_Regresar_conver_clicked()
{

}

