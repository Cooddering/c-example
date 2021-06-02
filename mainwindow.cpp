#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QtMath>
#include <QString>
#include <qlistview.h>
#include <mainwindow.h>
#include <QMainWindow>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;

}
double walkSpeed(double textEdit, double textEdit_2, double textEdit_3, double  textEdit_4){




}

void MainWindow::on_pushButton_clicked()
{
    QString textWal = ui->textEdit->toPlainText();
    QString textSpeedOne = ui->textEdit_2->toPlainText();
    QString textSpeedTwo = ui->textEdit_3->toPlainText();
    QString textSpeedThere = ui->textEdit_4->toPlainText();

    double t1, t2, t3;
    double multipleBigValue, multipleSmollValue;
    double max;

    t1 = qFabs((textWal.toDouble()/(textSpeedOne.toDouble() - textSpeedTwo.toDouble())));
    t2 = qFabs((textWal.toDouble())/(textSpeedOne.toDouble() + textSpeedTwo.toDouble()));
    t3 = qFabs((textWal.toDouble())/(textSpeedOne.toDouble() + textSpeedThere.toDouble()));


    max = t1 * t2 * t3;
    for (int i = 1; i < t1 && i < t2 && i < t3; i++)
    {
        if (int(t1) % i == 0 && int(t1) % i == 0 && int(t3) % i == 0)
            multipleBigValue = double(i);


    }
     multipleSmollValue = max / multipleBigValue;

     ui->label_5->setText(QString::number(multipleSmollValue));


}
