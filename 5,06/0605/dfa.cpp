#include "dfa.h"
#include "ui_dfa.h"

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
