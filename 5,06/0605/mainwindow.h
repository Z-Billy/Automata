#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dfa.h"
#include "turing.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Exit_clicked();

    void on_DFA_clicked();

    void on_Turing_clicked();

private:
    Ui::MainWindow *ui;
    DFA *dfa;
    Turing *turing;
};

#endif // MAINWINDOW_H
