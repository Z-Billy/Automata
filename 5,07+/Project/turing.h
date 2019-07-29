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

private:
    Ui::Turing *ui;
};

#endif // TURING_H
