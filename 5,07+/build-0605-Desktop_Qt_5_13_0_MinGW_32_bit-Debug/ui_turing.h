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

class Ui_Turing
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionFast_Run;
    QAction *actionMultiple_Run;
    QAction *actionStep_by_Step;
    QAction *actionState;
    QAction *actionEdge;
    QAction *actionDelete;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menubar;
    QMenu *menuRun;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Turing)
    {
        if (Turing->objectName().isEmpty())
            Turing->setObjectName(QString::fromUtf8("Turing"));
        Turing->resize(800, 600);
        QFont font;
        font.setPointSize(10);
        Turing->setFont(font);
        actionOpen = new QAction(Turing);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(Turing);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionFast_Run = new QAction(Turing);
        actionFast_Run->setObjectName(QString::fromUtf8("actionFast_Run"));
        actionMultiple_Run = new QAction(Turing);
        actionMultiple_Run->setObjectName(QString::fromUtf8("actionMultiple_Run"));
        actionStep_by_Step = new QAction(Turing);
        actionStep_by_Step->setObjectName(QString::fromUtf8("actionStep_by_Step"));
        actionState = new QAction(Turing);
        actionState->setObjectName(QString::fromUtf8("actionState"));
        actionEdge = new QAction(Turing);
        actionEdge->setObjectName(QString::fromUtf8("actionEdge"));
        actionDelete = new QAction(Turing);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        centralwidget = new QWidget(Turing);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Turing->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Turing);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuRun = new QMenu(menubar);
        menuRun->setObjectName(QString::fromUtf8("menuRun"));
        Turing->setMenuBar(menubar);
        statusbar = new QStatusBar(Turing);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Turing->setStatusBar(statusbar);
        toolBar = new QToolBar(Turing);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Turing->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuRun->menuAction());
        menuRun->addAction(actionFast_Run);
        menuRun->addAction(actionStep_by_Step);
        menuRun->addAction(actionMultiple_Run);
        toolBar->addAction(actionState);
        toolBar->addAction(actionEdge);
        toolBar->addAction(actionDelete);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);

        retranslateUi(Turing);

        QMetaObject::connectSlotsByName(Turing);
    } // setupUi

    void retranslateUi(QMainWindow *Turing)
    {
        Turing->setWindowTitle(QCoreApplication::translate("Turing", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("Turing", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("Turing", "Save", nullptr));
        actionFast_Run->setText(QCoreApplication::translate("Turing", "Fast Run", nullptr));
        actionMultiple_Run->setText(QCoreApplication::translate("Turing", "Multiple Run", nullptr));
        actionStep_by_Step->setText(QCoreApplication::translate("Turing", "Step by Step ", nullptr));
        actionState->setText(QCoreApplication::translate("Turing", "State", nullptr));
        actionEdge->setText(QCoreApplication::translate("Turing", "Edge", nullptr));
        actionDelete->setText(QCoreApplication::translate("Turing", "Delete", nullptr));
        menuRun->setTitle(QCoreApplication::translate("Turing", "Run", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Turing", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Turing: public Ui_Turing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TURING_H
