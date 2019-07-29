#include "turing.h"
#include "ui_turing.h"
#include "QString"
#include "QFileDialog"
#include "QFile"
#include "QTextStream"

Turing::Turing(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Turing)
{
    ui->setupUi(this);
}

Turing::~Turing()
{
    delete ui;
}

