#include "dfa.h"
#include "ui_dfa.h"
#include "QApplication"

DFA::DFA(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DFA)
{
    ui->setupUi(this);
}

DFA::~DFA()
{
    delete ui;
}

void DFA::on_actionCopy_triggered()
{

}

void DFA::on_actionCut_triggered()
{

}

void DFA::on_actionPaste_triggered()
{

}

void DFA::on_actionUndo_triggered()
{

}

void DFA::on_actionRedo_triggered()
{

}

void DFA::on_actionExit_triggered()
{
    QApplication::quit();
}
