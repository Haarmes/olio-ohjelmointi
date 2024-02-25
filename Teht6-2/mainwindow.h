#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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



private slots:
    void on_btnNumber1_clicked();

    void on_btnNumber2_clicked();

    void on_btnNumber3_clicked();

    void on_btnNumber4_clicked();

    void on_btnNumber5_clicked();

    void on_btnNumber6_clicked();

    void on_btnNumber7_clicked();

    void on_btnNumber8_clicked();

    void on_btnNumber9_clicked();

    void on_btnNumber0_clicked();

    void on_btnPlusSign_clicked();

    void on_btnMinusSign_clicked();

    void on_btnMultiplySign_clicked();

    void on_btnDivideSign_clicked();

    void on_btnClear_clicked();

    void on_btnEnter_clicked();

private:
    Ui::MainWindow *ui;
    QString number1, number2;
    int state = 1;
    float result;
    short operand;

    void numberClickedHandler(QString);
    void ClearAndEnterClickHandler(short);
    void addSubMulDivClickHandler(short);
    void resetLineEdits();
};
#endif // MAINWINDOW_H
