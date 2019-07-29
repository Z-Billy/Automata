#include "turing.h"
#include "ui_turing.h"
#include "QApplication"

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

void Turing::on_actionCopy_triggered()
{

}

void Turing::on_actionCut_triggered()
{

}

void Turing::on_actionPaste_triggered()
{

}

void Turing::on_actionUndo_triggered()
{

}

void Turing::on_actionRedo_triggered()
{

}

void Turing::on_actionExit_triggered()
{
    QApplication::quit();
}
