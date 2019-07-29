#ifndef TURING_H
#define TURING_H

#include <QMainWindow>

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

    void on_actionCopy_triggered();

    void on_actionCut_triggered();

    void on_actionPaste_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

private:
    Ui::Turing *ui;
};

#endif // TURING_H
