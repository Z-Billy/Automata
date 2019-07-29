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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DFA
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionExit;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DFA)
    {
        if (DFA->objectName().isEmpty())
            DFA->setObjectName(QString::fromUtf8("DFA"));
        DFA->resize(800, 600);
        actionNew = new QAction(DFA);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(DFA);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(DFA);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(DFA);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionCopy = new QAction(DFA);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionCut = new QAction(DFA);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionPaste = new QAction(DFA);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionUndo = new QAction(DFA);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(DFA);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionExit = new QAction(DFA);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(DFA);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        DFA->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DFA);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        DFA->setMenuBar(menubar);
        statusbar = new QStatusBar(DFA);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DFA->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);

        retranslateUi(DFA);

        QMetaObject::connectSlotsByName(DFA);
    } // setupUi

    void retranslateUi(QMainWindow *DFA)
    {
        DFA->setWindowTitle(QCoreApplication::translate("DFA", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("DFA", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("DFA", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("DFA", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("DFA", "Save as", nullptr));
        actionCopy->setText(QCoreApplication::translate("DFA", "Copy", nullptr));
        actionCut->setText(QCoreApplication::translate("DFA", "Cut", nullptr));
        actionPaste->setText(QCoreApplication::translate("DFA", "Paste", nullptr));
        actionUndo->setText(QCoreApplication::translate("DFA", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("DFA", "Redo", nullptr));
        actionExit->setText(QCoreApplication::translate("DFA", "Exit", nullptr));
        menuFile->setTitle(QCoreApplication::translate("DFA", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("DFA", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DFA: public Ui_DFA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DFA_H
