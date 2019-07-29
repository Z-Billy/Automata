/********************************************************************************
** Form generated from reading UI file 'turing.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TURING_H
#define UI_TURING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Turing
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Turing)
    {
        if (Turing->objectName().isEmpty())
            Turing->setObjectName(QString::fromUtf8("Turing"));
        Turing->resize(565, 347);
        centralwidget = new QWidget(Turing);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 90, 241, 91));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        Turing->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Turing);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 565, 26));
        Turing->setMenuBar(menubar);
        statusbar = new QStatusBar(Turing);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Turing->setStatusBar(statusbar);

        retranslateUi(Turing);

        QMetaObject::connectSlotsByName(Turing);
    } // setupUi

    void retranslateUi(QMainWindow *Turing)
    {
        Turing->setWindowTitle(QCoreApplication::translate("Turing", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Turing", "start creat Turing ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Turing: public Ui_Turing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TURING_H
