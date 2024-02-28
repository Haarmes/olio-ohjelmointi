#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timeout();

private slots:
    void on_btnTimeTwoMinutes_clicked();

    void on_btnTimeFiveMinutes_clicked();

    void on_btnStartGame_clicked();

    void on_btnStopGame_clicked();
    void on_updateProgressBar();

    void on_btnSwitchPlayer1_clicked();

    void on_btnSwitchPlayer2_clicked();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short CurrentPlayer = 1;
    short gameTime;
    QTimer * pQTimer;

    void updateProgressBar();
    void setGameInfoText(QString, short);
};
#endif // MAINWINDOW_H
