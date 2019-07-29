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
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DFA
{
public:
    QAction *actionFast_Run;
    QAction *actionStep_by_Step;
    QAction *actionMuitiple_Run;
    QAction *actionState;
    QAction *actionEdge;
    QAction *actionMove;
    QAction *actionDelete;
    QAction *actionOpen;
    QAction *actionSave;
    QWidget *centralwidget;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QCommandLinkButton *commandLinkButton;
    QMenuBar *menubar;
    QMenu *menuRun;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *DFA)
    {
        if (DFA->objectName().isEmpty())
            DFA->setObjectName(QString::fromUtf8("DFA"));
        DFA->resize(800, 600);
        actionFast_Run = new QAction(DFA);
        actionFast_Run->setObjectName(QString::fromUtf8("actionFast_Run"));
        actionStep_by_Step = new QAction(DFA);
        actionStep_by_Step->setObjectName(QString::fromUtf8("actionStep_by_Step"));
        actionMuitiple_Run = new QAction(DFA);
        actionMuitiple_Run->setObjectName(QString::fromUtf8("actionMuitiple_Run"));
        actionState = new QAction(DFA);
        actionState->setObjectName(QString::fromUtf8("actionState"));
        actionEdge = new QAction(DFA);
        actionEdge->setObjectName(QString::fromUtf8("actionEdge"));
        actionMove = new QAction(DFA);
        actionMove->setObjectName(QString::fromUtf8("actionMove"));
        actionDelete = new QAction(DFA);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        actionOpen = new QAction(DFA);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(DFA);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        centralwidget = new QWidget(DFA);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 30, 93, 28));
        QFont font;
        font.setPointSize(10);
        pushButton_1->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 30, 93, 28));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 130, 93, 28));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(490, 120, 93, 28));
        pushButton_4->setFont(font);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(640, 30, 93, 28));
        pushButton_5->setFont(font);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(660, 240, 93, 28));
        pushButton_6->setFont(font);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(520, 370, 93, 28));
        pushButton_7->setFont(font);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(340, 250, 93, 28));
        pushButton_8->setFont(font);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(160, 370, 93, 28));
        pushButton_9->setFont(font);
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 250, 93, 28));
        pushButton_10->setFont(font);
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(20, 470, 93, 28));
        pushButton_11->setFont(font);
        pushButton_12 = new QPushButton(centralwidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(350, 480, 93, 28));
        pushButton_12->setFont(font);
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(670, 480, 93, 28));
        pushButton_13->setFont(font);
        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName(QString::fromUtf8("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(106, 20, 221, 41));
        DFA->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DFA);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuRun = new QMenu(menubar);
        menuRun->setObjectName(QString::fromUtf8("menuRun"));
        DFA->setMenuBar(menubar);
        statusbar = new QStatusBar(DFA);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DFA->setStatusBar(statusbar);
        toolBar = new QToolBar(DFA);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        DFA->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuRun->menuAction());
        menuRun->addAction(actionFast_Run);
        menuRun->addAction(actionStep_by_Step);
        menuRun->addAction(actionMuitiple_Run);
        toolBar->addAction(actionState);
        toolBar->addAction(actionEdge);
        toolBar->addAction(actionDelete);
        toolBar->addSeparator();
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);

        retranslateUi(DFA);

        QMetaObject::connectSlotsByName(DFA);
    } // setupUi

    void retranslateUi(QMainWindow *DFA)
    {
        DFA->setWindowTitle(QCoreApplication::translate("DFA", "MainWindow", nullptr));
        actionFast_Run->setText(QCoreApplication::translate("DFA", "Fast Run", nullptr));
        actionStep_by_Step->setText(QCoreApplication::translate("DFA", "Step by Step", nullptr));
        actionMuitiple_Run->setText(QCoreApplication::translate("DFA", "Muitiple Run", nullptr));
        actionState->setText(QCoreApplication::translate("DFA", "State", nullptr));
        actionEdge->setText(QCoreApplication::translate("DFA", "Edge", nullptr));
        actionMove->setText(QCoreApplication::translate("DFA", "Move", nullptr));
        actionDelete->setText(QCoreApplication::translate("DFA", "Delete", nullptr));
        actionOpen->setText(QCoreApplication::translate("DFA", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("DFA", "Save", nullptr));
        pushButton_1->setText(QCoreApplication::translate("DFA", "State 1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DFA", "State 2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("DFA", "State 3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("DFA", "State 4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("DFA", "State 5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("DFA", "State 6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("DFA", "State 7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("DFA", "State 8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("DFA", "State 9", nullptr));
        pushButton_10->setText(QCoreApplication::translate("DFA", "State 10", nullptr));
        pushButton_11->setText(QCoreApplication::translate("DFA", "State 11", nullptr));
        pushButton_12->setText(QCoreApplication::translate("DFA", "State 12", nullptr));
        pushButton_13->setText(QCoreApplication::translate("DFA", "State 13", nullptr));
        commandLinkButton->setText(QString());
        menuRun->setTitle(QCoreApplication::translate("DFA", "Run", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("DFA", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DFA: public Ui_DFA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DFA_H
