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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Turing
{
public:
    QAction *actionFast_Run;
    QAction *actionStep_by_Step;
    QAction *actionMultiple_Run;
    QAction *actionState;
    QAction *actionEdge;
    QAction *actionMove;
    QAction *actionDelete;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionStart_State;
    QAction *actionFinal_State;
    QWidget *centralwidget;
    QPushButton *pushButton_12;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_1;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_13;
    QMenuBar *menubar;
    QMenu *menuRun;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Turing)
    {
        if (Turing->objectName().isEmpty())
            Turing->setObjectName(QString::fromUtf8("Turing"));
        Turing->resize(800, 600);
        actionFast_Run = new QAction(Turing);
        actionFast_Run->setObjectName(QString::fromUtf8("actionFast_Run"));
        actionStep_by_Step = new QAction(Turing);
        actionStep_by_Step->setObjectName(QString::fromUtf8("actionStep_by_Step"));
        actionMultiple_Run = new QAction(Turing);
        actionMultiple_Run->setObjectName(QString::fromUtf8("actionMultiple_Run"));
        actionState = new QAction(Turing);
        actionState->setObjectName(QString::fromUtf8("actionState"));
        actionEdge = new QAction(Turing);
        actionEdge->setObjectName(QString::fromUtf8("actionEdge"));
        actionMove = new QAction(Turing);
        actionMove->setObjectName(QString::fromUtf8("actionMove"));
        actionDelete = new QAction(Turing);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionOpen = new QAction(Turing);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(Turing);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionStart_State = new QAction(Turing);
        actionStart_State->setObjectName(QString::fromUtf8("actionStart_State"));
        actionFinal_State = new QAction(Turing);
        actionFinal_State->setObjectName(QString::fromUtf8("actionFinal_State"));
        centralwidget = new QWidget(Turing);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(370, 480, 93, 28));
        QFont font;
        font.setPointSize(10);
        pushButton_12->setFont(font);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(360, 250, 93, 28));
        pushButton_8->setFont(font);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(540, 370, 93, 28));
        pushButton_7->setFont(font);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(510, 120, 93, 28));
        pushButton_4->setFont(font);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(180, 370, 93, 28));
        pushButton_9->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 30, 93, 28));
        pushButton_2->setFont(font);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(660, 30, 93, 28));
        pushButton_5->setFont(font);
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(20, 30, 93, 28));
        pushButton_1->setFont(font);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(680, 240, 93, 28));
        pushButton_6->setFont(font);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 130, 93, 28));
        pushButton_3->setFont(font);
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(30, 250, 93, 28));
        pushButton_10->setFont(font);
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(40, 470, 93, 28));
        pushButton_11->setFont(font);
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(690, 480, 93, 28));
        pushButton_13->setFont(font);
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
        toolBar->addSeparator();
        toolBar->addAction(actionStart_State);
        toolBar->addAction(actionFinal_State);
        toolBar->addSeparator();
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);

        retranslateUi(Turing);

        QMetaObject::connectSlotsByName(Turing);
    } // setupUi

    void retranslateUi(QMainWindow *Turing)
    {
        Turing->setWindowTitle(QCoreApplication::translate("Turing", "MainWindow", nullptr));
        actionFast_Run->setText(QCoreApplication::translate("Turing", "Fast Run", nullptr));
        actionStep_by_Step->setText(QCoreApplication::translate("Turing", "Step by Step", nullptr));
        actionMultiple_Run->setText(QCoreApplication::translate("Turing", "Multiple Run", nullptr));
        actionState->setText(QCoreApplication::translate("Turing", "State", nullptr));
        actionEdge->setText(QCoreApplication::translate("Turing", "Edge", nullptr));
        actionMove->setText(QCoreApplication::translate("Turing", "Move", nullptr));
        actionDelete->setText(QCoreApplication::translate("Turing", "Delete", nullptr));
        actionOpen->setText(QCoreApplication::translate("Turing", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("Turing", "Save", nullptr));
        actionStart_State->setText(QCoreApplication::translate("Turing", "Start State", nullptr));
        actionFinal_State->setText(QCoreApplication::translate("Turing", "Final State", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Turing", "State 12", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Turing", "State 8", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Turing", "State 7", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Turing", "State 4", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Turing", "State 9", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Turing", "State 2", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Turing", "State 5", nullptr));
        pushButton_1->setText(QCoreApplication::translate("Turing", "State 1", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Turing", "State 6", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Turing", "State 3", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Turing", "State 10", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Turing", "State 11", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Turing", "State 13", nullptr));
        menuRun->setTitle(QCoreApplication::translate("Turing", "Run", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Turing", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Turing: public Ui_Turing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TURING_H
