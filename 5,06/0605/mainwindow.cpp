#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QApplication"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Exit_clicked()
{
    QApplication::quit();
}

void MainWindow::on_DFA_clicked()
{
    dfa = new DFA (this);
    dfa->show();
}

void MainWindow::on_Turing_clicked()
{
    turing = new Turing (this);
    turing->show();
}
