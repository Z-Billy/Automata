#include "dfa.h"
#include "ui_dfa.h"
#include "QApplication"
#include "QTabWidget"
#include "QWidget"
#include "QString"
#include <iostream>
#include <vector>
#include "QFileDialog"
#include "QFile"

using namespace std;

unsigned int DFA::p=1;

DFA::DFA(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DFA)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->tabWidget);
    ui->statusbar->addPermanentWidget(ui->textEdit,1);
}

DFA::~DFA()
{
    delete ui;
}

void DFA::on_actionNew_triggered()
{
    /*new_page += p;
    new_page += " ";
    ui->tabWidget->addTab(page[p-1] , new_page);
    page.push_back(nullptr);
    ++p;*/
}

void DFA::on_actionOpen_triggered()
{
    QString filter ="All File (*.*) ;; Code (*.cpp) ;; Text (*.text) ";
    QString filename = QFileDialog::getOpenFileName(this,"Opne File","C:/Users/Asus/Documents",filter);
    QFile file (filename);
    path = filename;
    /*file.open(QFile::ReadOnly|QFile::);
    QTabWidget File(&file);
    QWidget tab = File.readAll();
    ui->tabWidget->setTab();*/
    file.close();
}

void DFA::on_actionSave_triggered()
{

}

void DFA::on_actionSave_as_triggered()
{

}

void DFA::on_actionExit_triggered()
{
    QApplication::quit();
}

void DFA::on_actionFast_Run_triggered()
{

}

void DFA::on_actionStep_by_Step_triggered()
{

}

void DFA::on_actionMulty_Run_triggered()
{

}

void DFA::on_actionState_2_triggered()
{

}

void DFA::on_actionEdge_2_triggered()
{

}

void DFA::on_actionMove_2_triggered()
{

}

void DFA::on_actionUndo_triggered()
{

}

void DFA::on_actionRedo_triggered()
{

}

void DFA::on_actionDelete_2_triggered()
{

}

// |
