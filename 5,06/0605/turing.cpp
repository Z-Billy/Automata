#include "turing.h"
#include "ui_turing.h"

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
