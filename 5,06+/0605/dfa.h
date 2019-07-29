#ifndef DFA_H
#define DFA_H

#include <QMainWindow>

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
    void on_actionCopy_triggered();

    void on_actionCut_triggered();

    void on_actionPaste_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionExit_triggered();

private:
    Ui::DFA *ui;
};

#endif // DFA_H
