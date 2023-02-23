#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>

double calcval = 0.0;
bool divflag = false;
bool mulflag = false;
bool addflag = false;
bool subflag = false;
bool percentflag = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->display->setText(QString::number(calcval));
    const int size = 10;
    QPushButton* nums[size];
    for (int i = 0; i < size; ++i) {
        QString button = 'b' + QString::number(i);
        nums[i] = MainWindow::findChild<QPushButton*>(button);
        connect(nums[i], SIGNAL(released()), this, SLOT(numPressed()));
    }
    connect(ui->bdot, SIGNAL(released()), this, SLOT(dotPressed()));

    connect(ui->badd, SIGNAL(released()), this, SLOT(operationPressed()));

    connect(ui->bclear, SIGNAL(released()), this, SLOT(operationPressed()));

    connect(ui->bsub, SIGNAL(released()), this, SLOT(operationPressed()));

    connect(ui->bmul, SIGNAL(released()), this, SLOT(operationPressed()));

    connect(ui->bdiv, SIGNAL(released()), this, SLOT(operationPressed()));

    connect(ui->bequal, SIGNAL(released()), this, SLOT(equalPressed()));

    connect(ui->bsign, SIGNAL(released()), this, SLOT(changeSignPressed()));

    connect(ui->bpercent, SIGNAL(released()), this, SLOT(operationPressed()));

    connect(ui->bsqrt, SIGNAL(released()), this, SLOT(operationPressed()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numPressed() {
    QPushButton* button = (QPushButton*)sender();
    QString bval = button->text();
    QString displayval = ui->display->text();
    if (displayval.toDouble() == 0 && displayval[1] != '.') {
        ui->display->setText(bval);
    }
    else {
        ui->display->setText(displayval + bval);
    }
}

void MainWindow::operationPressed(){

    QPushButton *button = (QPushButton *)sender();

    QString butVal = button->text();

    if (butVal == "AC") {
        subflag = false;
        addflag = false;
        divflag = false;
        percentflag = false;
        mulflag = false;
        ui->display->setText("");
        return;
    }

    if (subflag || addflag || divflag || percentflag || mulflag) { return; }

    QString displayval = ui->display->text();
    calcval = displayval.toDouble();

    if(QString::compare(butVal, "√", Qt::CaseInsensitive) == 0){ ui->display->setText(QString::number(sqrt(calcval))); return; }

    else if(QString::compare(butVal, "/", Qt::CaseInsensitive) == 0){ divflag = true; }

    else if(QString::compare(butVal, "*", Qt::CaseInsensitive) == 0){ mulflag = true; }

    else if(QString::compare(butVal, "%", Qt::CaseInsensitive) == 0){ percentflag = true; }

    else if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0){ addflag = true; }

    else if(QString::compare(butVal, "-", Qt::CaseInsensitive) == 0){ subflag = true; }

    ui->display->setText("");
}

void MainWindow::equalPressed(){

    double solution = 0.0;

    QString displayval = ui->display->text();
    double dblDisplayVal = displayval.toDouble();

        if (addflag){ solution = calcval + dblDisplayVal;  addflag = false; }

        else if (subflag){ solution = calcval - dblDisplayVal; subflag = false; }

        else if (mulflag){ solution = calcval * dblDisplayVal; mulflag = false; }

        else if (percentflag) { solution = (calcval * dblDisplayVal) / 100; percentflag = false;}

        else if (divflag) { solution = calcval / dblDisplayVal; divflag = false; }

    ui->display->setText(QString::number(solution));

}

void MainWindow::changeSignPressed() {

    QString displayval = ui->display->text();

    if(displayval.toDouble()) { ui->display->setText(QString::number(-1 * displayval.toDouble())); }
}

void MainWindow::dotPressed() {
    QString displayval = ui->display->text();
    if (displayval.size() && !displayval.contains('.')) {
        displayval += '.';
        ui->display->setText(displayval);
    }
}


