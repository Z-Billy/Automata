/********************************************************************************
** Form generated from reading UI file 'dfa.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DFA_H
#define UI_DFA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DFA
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DFA)
    {
        if (DFA->objectName().isEmpty())
            DFA->setObjectName(QString::fromUtf8("DFA"));
        DFA->resize(585, 389);
        centralwidget = new QWidget(DFA);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 130, 181, 91));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        DFA->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DFA);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 585, 26));
        DFA->setMenuBar(menubar);
        statusbar = new QStatusBar(DFA);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DFA->setStatusBar(statusbar);

        retranslateUi(DFA);

        QMetaObject::connectSlotsByName(DFA);
    } // setupUi

    void retranslateUi(QMainWindow *DFA)
    {
        DFA->setWindowTitle(QCoreApplication::translate("DFA", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("DFA", "start creat dfa ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DFA: public Ui_DFA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DFA_H
