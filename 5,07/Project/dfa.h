#ifndef DFA_H
#define DFA_H

#include <QMainWindow>
#include "QWidget"
#include "QString"
#include <vector>

namespace Ui {
class DFA;
}

class DFA : public QMainWindow
{
    Q_OBJECT

public:
    explicit DFA(QWidget *parent = nullptr);
    ~DFA();

private slots:

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionExit_triggered();

    void on_actionState_2_triggered();

    void on_actionEdge_2_triggered();

    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSave_as_triggered();

    void on_actionFast_Run_triggered();

    void on_actionMulty_Run_triggered();

    void on_actionStep_by_Step_triggered();

    void on_actionDelete_2_triggered();

    void on_actionMove_2_triggered();

private:
    Ui::DFA *ui;
    std::vector<QWidget*>page;
    QString new_page = "Page ";
    static unsigned int p;
    QString path;
};

#endif // DFA_H
