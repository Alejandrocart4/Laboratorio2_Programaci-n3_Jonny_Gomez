#ifndef CFRAME_H
#define CFRAME_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class cframe;
}
QT_END_NAMESPACE

class cframe : public QMainWindow
{
    Q_OBJECT

public:
    cframe(QWidget *parent = nullptr);
    ~cframe();



private slots:
    void on_pB_Ex1_clicked();

    void on_pB_Ex2_clicked();

    void on_pB_Ex3_clicked();

    void on_pB_Close_clicked();


    void on_SB_Fila_valueChanged(int arg1);

    void on_PB_calcular_clicked();

private:
    Ui::cframe *ui;
};
#endif // CFRAME_H
