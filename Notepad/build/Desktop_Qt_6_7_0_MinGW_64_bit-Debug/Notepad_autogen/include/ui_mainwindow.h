/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_project_N;
    QAction *actionOpen_O;
    QAction *actionSave_as_S;
    QAction *actionCut_C;
    QAction *actionCopy_C;
    QAction *actionPaste_P;
    QAction *actionBuild_All_Projects;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menuNew_N;
    QMenu *menuOpen_O;
    QMenu *menuBuild_B;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionNew_project_N = new QAction(MainWindow);
        actionNew_project_N->setObjectName("actionNew_project_N");
        actionOpen_O = new QAction(MainWindow);
        actionOpen_O->setObjectName("actionOpen_O");
        actionSave_as_S = new QAction(MainWindow);
        actionSave_as_S->setObjectName("actionSave_as_S");
        actionCut_C = new QAction(MainWindow);
        actionCut_C->setObjectName("actionCut_C");
        actionCopy_C = new QAction(MainWindow);
        actionCopy_C->setObjectName("actionCopy_C");
        actionPaste_P = new QAction(MainWindow);
        actionPaste_P->setObjectName("actionPaste_P");
        actionBuild_All_Projects = new QAction(MainWindow);
        actionBuild_All_Projects->setObjectName("actionBuild_All_Projects");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName("menu_F");
        menuNew_N = new QMenu(menubar);
        menuNew_N->setObjectName("menuNew_N");
        menuOpen_O = new QMenu(menubar);
        menuOpen_O->setObjectName("menuOpen_O");
        menuBuild_B = new QMenu(menubar);
        menuBuild_B->setObjectName("menuBuild_B");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menuNew_N->menuAction());
        menubar->addAction(menuOpen_O->menuAction());
        menubar->addAction(menuBuild_B->menuAction());
        menu_F->addAction(actionNew_project_N);
        menu_F->addAction(actionOpen_O);
        menu_F->addAction(actionSave_as_S);
        menuNew_N->addAction(actionCut_C);
        menuNew_N->addAction(actionCopy_C);
        menuNew_N->addAction(actionPaste_P);
        menuBuild_B->addAction(actionBuild_All_Projects);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew_project_N->setText(QCoreApplication::translate("MainWindow", "New project(&N)", nullptr));
        actionOpen_O->setText(QCoreApplication::translate("MainWindow", "Open(&O)", nullptr));
        actionSave_as_S->setText(QCoreApplication::translate("MainWindow", "Save as(&S)", nullptr));
        actionCut_C->setText(QCoreApplication::translate("MainWindow", "Cut(&T)", nullptr));
        actionCopy_C->setText(QCoreApplication::translate("MainWindow", "Copy(&C)", nullptr));
        actionPaste_P->setText(QCoreApplication::translate("MainWindow", "Paste(&P)", nullptr));
        actionBuild_All_Projects->setText(QCoreApplication::translate("MainWindow", "Build All Projects", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "File(&F)", nullptr));
        menuNew_N->setTitle(QCoreApplication::translate("MainWindow", "New(&N)", nullptr));
        menuOpen_O->setTitle(QCoreApplication::translate("MainWindow", "View(&V)", nullptr));
        menuBuild_B->setTitle(QCoreApplication::translate("MainWindow", "Build(&B)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
