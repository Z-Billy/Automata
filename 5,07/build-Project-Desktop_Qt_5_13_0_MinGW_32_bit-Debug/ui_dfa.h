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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DFA
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionFast_Run;
    QAction *actionStep_by_Step;
    QAction *actionEdge_2;
    QAction *actionDelete_2;
    QAction *actionState;
    QAction *actionMultiple_Run;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menubar;
    QMenu *menuCreate;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *DFA)
    {
        if (DFA->objectName().isEmpty())
            DFA->setObjectName(QString::fromUtf8("DFA"));
        DFA->resize(766, 548);
        QFont font;
        font.setPointSize(10);
        DFA->setFont(font);
        actionOpen = new QAction(DFA);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(DFA);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionFast_Run = new QAction(DFA);
        actionFast_Run->setObjectName(QString::fromUtf8("actionFast_Run"));
        actionStep_by_Step = new QAction(DFA);
        actionStep_by_Step->setObjectName(QString::fromUtf8("actionStep_by_Step"));
        actionEdge_2 = new QAction(DFA);
        actionEdge_2->setObjectName(QString::fromUtf8("actionEdge_2"));
        actionDelete_2 = new QAction(DFA);
        actionDelete_2->setObjectName(QString::fromUtf8("actionDelete_2"));
        actionState = new QAction(DFA);
        actionState->setObjectName(QString::fromUtf8("actionState"));
        actionMultiple_Run = new QAction(DFA);
        actionMultiple_Run->setObjectName(QString::fromUtf8("actionMultiple_Run"));
        centralwidget = new QWidget(DFA);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        DFA->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DFA);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 766, 26));
        menuCreate = new QMenu(menubar);
        menuCreate->setObjectName(QString::fromUtf8("menuCreate"));
        DFA->setMenuBar(menubar);
        statusbar = new QStatusBar(DFA);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DFA->setStatusBar(statusbar);
        toolBar = new QToolBar(DFA);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        DFA->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuCreate->menuAction());
        menuCreate->addAction(actionFast_Run);
        menuCreate->addAction(actionStep_by_Step);
        menuCreate->addAction(actionMultiple_Run);
        toolBar->addAction(actionState);
        toolBar->addAction(actionEdge_2);
        toolBar->addAction(actionDelete_2);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);

        retranslateUi(DFA);

        QMetaObject::connectSlotsByName(DFA);
    } // setupUi

    void retranslateUi(QMainWindow *DFA)
    {
        DFA->setWindowTitle(QCoreApplication::translate("DFA", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("DFA", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("DFA", "Save", nullptr));
        actionFast_Run->setText(QCoreApplication::translate("DFA", "Fast Run", nullptr));
        actionStep_by_Step->setText(QCoreApplication::translate("DFA", "Step by Step", nullptr));
        actionEdge_2->setText(QCoreApplication::translate("DFA", "Edge", nullptr));
        actionDelete_2->setText(QCoreApplication::translate("DFA", "Delete", nullptr));
        actionState->setText(QCoreApplication::translate("DFA", "State", nullptr));
        actionMultiple_Run->setText(QCoreApplication::translate("DFA", "Multiple Run", nullptr));
        menuCreate->setTitle(QCoreApplication::translate("DFA", "Run", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("DFA", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DFA: public Ui_DFA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DFA_H
