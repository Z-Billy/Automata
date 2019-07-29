#include "dfa.h"
#include "ui_dfa.h"
#include "QLabel"
#include "QLineEdit"
//#include "QLayoutItem"
//#include "QLayout"
//#include "QString"
//#include "QFileDialog"
//#include "QFile"
//#include "QTextStream"

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

// |

void DFA::on_actionState_triggered()
{
    QLabel *label =  new QLabel();
    label->setText("This is how i add a label");
    label->setMinimumWidth(100);// You can set other properties similarly
    QLineEdit *lineEdit = new QLineEdit();
    ui->horizontalLayout->addWidget(label);
    ui->horizontalLayout->addWidget(lineEdit);
}
