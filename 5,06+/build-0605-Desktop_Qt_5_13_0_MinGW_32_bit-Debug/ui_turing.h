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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Turing
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

    void setupUi(QMainWindow *Turing)
    {
        if (Turing->objectName().isEmpty())
            Turing->setObjectName(QString::fromUtf8("Turing"));
        Turing->resize(800, 600);
        QFont font;
        font.setPointSize(10);
        Turing->setFont(font);
        actionNew = new QAction(Turing);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionOpen = new QAction(Turing);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(Turing);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(Turing);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionCopy = new QAction(Turing);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionCut = new QAction(Turing);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionPaste = new QAction(Turing);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionUndo = new QAction(Turing);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(Turing);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionExit = new QAction(Turing);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(Turing);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Turing->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Turing);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 29));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        Turing->setMenuBar(menubar);
        statusbar = new QStatusBar(Turing);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Turing->setStatusBar(statusbar);

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

        retranslateUi(Turing);

        QMetaObject::connectSlotsByName(Turing);
    } // setupUi

    void retranslateUi(QMainWindow *Turing)
    {
        Turing->setWindowTitle(QCoreApplication::translate("Turing", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("Turing", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("Turing", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("Turing", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("Turing", "Save as", nullptr));
        actionCopy->setText(QCoreApplication::translate("Turing", "Copy", nullptr));
        actionCut->setText(QCoreApplication::translate("Turing", "Cut", nullptr));
        actionPaste->setText(QCoreApplication::translate("Turing", "Paste", nullptr));
        actionUndo->setText(QCoreApplication::translate("Turing", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("Turing", "Redo", nullptr));
        actionExit->setText(QCoreApplication::translate("Turing", "Exit", nullptr));
        menuFile->setTitle(QCoreApplication::translate("Turing", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("Turing", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Turing: public Ui_Turing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TURING_H
