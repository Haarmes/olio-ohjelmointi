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

void MainWindow::on_btnNumber1_clicked()
{
    QString numberPressed = "1";
    numberClickedHandler(numberPressed);
}


void MainWindow::on_btnNumber2_clicked()
{
    QString numberPressed = "2";
    numberClickedHandler(numberPressed);
}


void MainWindow::on_btnNumber3_clicked()
{
    QString numberPressed = "3";
    numberClickedHandler(numberPressed);
}



void MainWindow::on_btnNumber4_clicked()
{
    QString numberPressed = "4";
    numberClickedHandler(numberPressed);
}




void MainWindow::on_btnNumber5_clicked()
{
    QString numberPressed = "5";
    numberClickedHandler(numberPressed);
}


void MainWindow::on_btnNumber6_clicked()
{
    QString numberPressed = "6";
    numberClickedHandler(numberPressed);
}


void MainWindow::on_btnNumber7_clicked()
{
    QString numberPressed = "7";
    numberClickedHandler(numberPressed);
}


void MainWindow::on_btnNumber8_clicked()
{
    QString numberPressed = "8";
    numberClickedHandler(numberPressed);
}


void MainWindow::on_btnNumber9_clicked()
{
    QString numberPressed = "9";
    numberClickedHandler(numberPressed);
}


void MainWindow::on_btnNumber0_clicked()
{
    QString numberPressed = "0";
    numberClickedHandler(numberPressed);
}


void MainWindow::on_btnPlusSign_clicked()
{
    short signPressed = 0;
    addSubMulDivClickHandler(signPressed);
}


void MainWindow::on_btnMinusSign_clicked()
{
    short signPressed = 1;
    addSubMulDivClickHandler(signPressed);
}


void MainWindow::on_btnMultiplySign_clicked()
{
    short signPressed = 2;
    addSubMulDivClickHandler(signPressed);
}


void MainWindow::on_btnDivideSign_clicked()
{
    short signPressed = 3;
    addSubMulDivClickHandler(signPressed);
}


void MainWindow::on_btnClear_clicked()
{
    short btnPressed = 0;
    ClearAndEnterClickHandler(btnPressed);
}


void MainWindow::on_btnEnter_clicked()
{
    short btnPressed = 1;
    ClearAndEnterClickHandler(btnPressed);
}

void MainWindow::numberClickedHandler(QString numberPressed)
{
    if(state==1){
        qDebug() <<"Number1 before =  "<< number1; // Current Number1
        QString newNumber = number1+numberPressed;
        ui->lineEditNum1->setText(newNumber);
        number1 = newNumber;
    }
    if(state==2){
        qDebug() << "Number2 before = " <<number2; // Current Number2
        QString newNumber = number2+numberPressed;
        ui->lineEditNum2->setText(newNumber);
        number2 = newNumber;
    }
}

void MainWindow::ClearAndEnterClickHandler(short btnPressed)
{
    if(btnPressed==0){
        number1 = "";
        number2 = "";
        state = 1;
        resetLineEdits();
    }
    if(btnPressed==1){
        float number1Float = number1.toFloat();
        float number2Float = number2.toFloat();
        if(operand == 0){
            result = number1Float + number2Float;
            ui->lineEditResult->setText(QString::number(result));
        }
        if(operand == 1){
            result = number1Float - number2Float;
            ui->lineEditResult->setText(QString::number(result));
        }
        if(operand == 2){
            result = number1Float * number2Float;
            ui->lineEditResult->setText(QString::number(result));
        }
        if(operand == 3){
            result = number1Float / number2Float;
            ui->lineEditResult->setText(QString::number(result));
        }
    }
}

void MainWindow::addSubMulDivClickHandler(short signPressed)
{
    qDebug() << "Pressed sign id = " << signPressed;
    operand = signPressed;
    state = 2;
}

void MainWindow::resetLineEdits()
{
    ui->lineEditNum1->setText("");
    ui->lineEditNum2->setText("");
    ui->lineEditResult->setText("");
}

