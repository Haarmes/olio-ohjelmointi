#include "mainwindow.h"
#include "ui_mainwindow.h"

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



void MainWindow::on_btnCount_clicked()
{
    QString number;
    number=ui->lineEditCountNumber->text();
    int numberint = number.toInt();
    numberint = numberint+1;
    number = QString::number(numberint);
    ui->lineEditCountNumber->setText(number);
}


void MainWindow::on_btnReset_clicked()
{
    ui->lineEditCountNumber->setText("0");
}

