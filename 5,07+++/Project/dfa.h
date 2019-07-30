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

private:
    Ui::DFA *ui;
};

#endif // DFA_H
