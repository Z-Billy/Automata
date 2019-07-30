#include "dfa.h"
#include "ui_dfa.h"
#include "QPushButton"
#include "QString"
#include <array>
#include "QString"
#include<iostream>

using namespace std;

static int start_flag = 0;
static int final_flag = 0 ;

DFA::DFA(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DFA)
{
    ui->setupUi(this);
    array<QPushButton*,13>State={ui->pushButton_1,ui->pushButton_2,ui->pushButton_3,ui->pushButton_4,ui->pushButton_5,ui->pushButton_6,ui->pushButton_7
                                 ,ui->pushButton_8,ui->pushButton_9,ui->pushButton_10,ui->pushButton_11,ui->pushButton_12,ui->pushButton_13};
    for(unsigned int i=0 ; i<13 ;++i)
    {
        State[i]->hide();
    }
}

DFA::~DFA()
{
    delete ui;
}

void DFA::on_actionState_triggered()
{
    array<QPushButton*,13>State={ui->pushButton_1,ui->pushButton_2,ui->pushButton_3,ui->pushButton_4,ui->pushButton_5,ui->pushButton_6,ui->pushButton_7
                                 ,ui->pushButton_8,ui->pushButton_9,ui->pushButton_10,ui->pushButton_11,ui->pushButton_12,ui->pushButton_13};
    static unsigned int count =0;
    if(count<13)
    {
        State[count]->show();
        ++count;
    }
}

