#include "turing.h"
#include "ui_turing.h"
#include "QApplication"
#include "QTabWidget"
#include "QWidget"
#include "QString"
#include <iostream>
#include "QFileDialog"
#include "QFile"
#include "QTextStream"

using namespace std;

unsigned int Turing::p=1;

Turing::Turing(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Turing)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tabWidget);
    ui->statusbar->addPermanentWidget(ui->textEdit,1);
}

Turing::~Turing()
{
    delete ui;
}

void Turing::on_actionNew_triggered()
{
    new_page += p;
    new_page += " ";
    ui->tabWidget->addTab(&page, new_page);
    ++p;
}

void Turing::on_actionOpen_triggered()
{
    QString filter ="All File (*.*) ;; Text (*.text) ";
    QString filename = QFileDialog::getOpenFileName(this,"Opne File","C:/Users/Asus/Documents",filter);
    QFile file (filename);
    path = filename;
    file.open(QFile::ReadOnly | QFile::Text);
    QTextStream File (&file);
    QString txt = File.readAll();
    ui->textEdit->setText(txt);
    file.close();
}

void Turing::on_actionSave_triggered()
{

}

void Turing::on_actionSave_as_triggered()
{

}

void Turing::on_actionExit_triggered()
{
    QApplication::quit();
}

void Turing::on_actionFast_Run_triggered()
{

}

void Turing::on_actionStep_by_Step_triggered()
{

}

void Turing::on_actionMultiple_Run_triggered()
{

}

void Turing::on_actionState_triggered()
{

}

void Turing::on_actionEdge_triggered()
{

}

void Turing::on_actionMove_triggered()
{

}

void Turing::on_actionUndo_triggered()
{

}

void Turing::on_actionRedo_triggered()
{

}

void Turing::on_actionDelete_triggered()
{

}
