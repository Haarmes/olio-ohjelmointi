#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer=new QTimer();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer = nullptr;
}

void MainWindow::timeout()
{

}

void MainWindow::on_btnTimeTwoMinutes_clicked()
{
    gameTime = 120;
    ui->progressBarPlayer1->setMaximum(60);
    ui->progressBarPlayer2->setMaximum(60);
    ui->progressBarPlayer1->setValue(60);
    ui->progressBarPlayer2->setValue(60);
    setGameInfoText(QString("ready to play"), 20);
}


void MainWindow::on_btnTimeFiveMinutes_clicked()
{
    gameTime = 300;
    ui->progressBarPlayer1->setMaximum(150);
    ui->progressBarPlayer2->setMaximum(150);
    ui->progressBarPlayer1->setValue(150);
    ui->progressBarPlayer2->setValue(150);
    setGameInfoText(QString("ready to play"), 20);
}

void MainWindow::updateProgressBar()
{
    if( CurrentPlayer ==1){
        if(player1Time == 0){
            pQTimer->stop();
            setGameInfoText(QString("Player 2 WON!!"),20 );
        }
        ui->progressBarPlayer1->setValue(player1Time);
        player1Time -= 1;
    }
    if( CurrentPlayer ==2){
        if(player2Time == 0){
            pQTimer->stop();
            setGameInfoText(QString("Player 1 WON!!"), 20);
        }
        ui->progressBarPlayer2->setValue(player2Time);
        player2Time -= 1;
    }
}

void MainWindow::setGameInfoText(QString gameStatus, short fontSize)
{
    QFont qFontAndSize("Segoe UI", fontSize);
    ui->labelGameStatus->setText(gameStatus);
    ui->labelGameStatus->setFont(qFontAndSize);
}


void MainWindow::on_btnStartGame_clicked()
{
    player1Time = gameTime/2;
    player2Time = gameTime/2;
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(on_updateProgressBar()));
    pQTimer->start(1000);
    setGameInfoText(QString("Game ongoing"), 20);
}


void MainWindow::on_btnStopGame_clicked()
{
    setGameInfoText(QString("New game via start button"), 20);
    pQTimer->stop();
    ui->progressBarPlayer2->setValue(0);
    ui->progressBarPlayer1->setValue(0);
    CurrentPlayer = 1;
    disconnect(pQTimer, SIGNAL(timeout()), this, SLOT(on_updateProgressBar()));
}

void MainWindow::on_updateProgressBar()
{
    updateProgressBar();
}


void MainWindow::on_btnSwitchPlayer1_clicked()
{
    CurrentPlayer = 2;
}


void MainWindow::on_btnSwitchPlayer2_clicked()
{
    CurrentPlayer = 1;
}

