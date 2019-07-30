#include "turing.h"
#include "ui_turing.h"
#include "QPushButton"
#include "QString"
#include <array>
#include "QString"
#include <iostream>

using namespace std;

static int start_flag = 0;
static int final_flag = 0 ;

Turing::Turing(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Turing)
{
    ui->setupUi(this);
    array<QPushButton*,13>State={ui->pushButton_1,ui->pushButton_2,ui->pushButton_3,ui->pushButton_4,ui->pushButton_5,ui->pushButton_6,ui->pushButton_7
                                 ,ui->pushButton_8,ui->pushButton_9,ui->pushButton_10,ui->pushButton_11,ui->pushButton_12,ui->pushButton_13};
    for(unsigned int i=0 ; i<13 ;++i)
    {
        State[i]->hide();
    }
}

Turing::~Turing()
{
    delete ui;
}

void Turing::on_actionState_triggered()
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

void Turing::on_actionStart_State_triggered()
{
   /* array<QPushButton*,13>State={ui->pushButton_1,ui->pushButton_2,ui->pushButton_3,ui->pushButton_4,ui->pushButton_5,ui->pushButton_6,ui->pushButton_7
                                 ,ui->pushButton_8,ui->pushButton_9,ui->pushButton_10,ui->pushButton_11,ui->pushButton_12,ui->pushButton_13};

    if(start_flag==0 )
    {
        int x;
        cout<<"Enter number of the State that you want "<<endl;
        cin>>x;
        State[x]->setText("Start");
        start_flag=1;
    }
    else
    {
        cout<<"Start state already is "<<endl;
    }*/
}

void Turing::on_actionFinal_State_triggered()
{
    array<QPushButton*,13>State={ui->pushButton_1,ui->pushButton_2,ui->pushButton_3,ui->pushButton_4,ui->pushButton_5,ui->pushButton_6,ui->pushButton_7
                                 ,ui->pushButton_8,ui->pushButton_9,ui->pushButton_10,ui->pushButton_11,ui->pushButton_12,ui->pushButton_13};
    if(final_flag==0 )
    {
        cout<<"Click the State that you want to be Final "<<endl;
        for (unsigned int i=0 ; i<13 ;++i)
        {
            if(State[i]->clicked())
            {
                State[i]->setText("Start");
                start_flag=1;
                break;
            }

        }
    }
    else
    {
        cout<<"Final state already is "<<endl;
    }
}


