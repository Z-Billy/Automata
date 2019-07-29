#include "turing.h"
#include "ui_turing.h"
#include "QPushButton"
#include "QString"
#include <array>
#include "QString"

using namespace std;

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
    /*static unsigned int count =0;
    array<QString,13>Name={"1","2","3","4","5","6","7","8","9","10","11","12","13"};
    array<QPushButton*,13>State={ui->pushButton_1,ui->pushButton_2,ui->pushButton_3,ui->pushButton_4,ui->pushButton_5,ui->pushButton_6,ui->pushButton_7
                                 ,ui->pushButton_8,ui->pushButton_9,ui->pushButton_10,ui->pushButton_11,ui->pushButton_12,ui->pushButton_13};
    QString name = "State_"+Name[count];
    if (count<18)
    {
        State[count]->setText(name);
        name.clear();
        name = "State_";
        ++count;
    }*/
}
