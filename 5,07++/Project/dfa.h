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
    void on_actionState_triggered();

    void on_pushButton_7_clicked();

private:
    Ui::DFA *ui;
};

#endif // DFA_H
