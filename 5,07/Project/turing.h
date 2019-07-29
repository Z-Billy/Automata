#ifndef TURING_H
#define TURING_H

#include <QMainWindow>
#include "QWidget"
#include "QString"

namespace Ui {
class Turing;
}

class Turing : public QMainWindow
{
    Q_OBJECT

public:
    explicit Turing(QWidget *parent = nullptr);
    ~Turing();

private slots:
    void on_actionExit_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionFast_Run_triggered();

    void on_actionStep_by_Step_triggered();

    void on_actionMultiple_Run_triggered();

    void on_actionState_triggered();

    void on_actionEdge_triggered();

    void on_actionMove_triggered();

    void on_actionDelete_triggered();

private:
    Ui::Turing *ui;
    QWidget page;
    QString new_page = "Page ";
    static unsigned int p;
    QString path;
};

#endif // TURING_H
