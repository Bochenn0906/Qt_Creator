/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QPushButton *StartButton;
    QPushButton *PauseButton;
    QPushButton *SingleButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 731, 521));
        label->setScaledContents(true);
        StartButton = new QPushButton(Widget);
        StartButton->setObjectName("StartButton");
        StartButton->setGeometry(QRect(220, 570, 75, 23));
        PauseButton = new QPushButton(Widget);
        PauseButton->setObjectName("PauseButton");
        PauseButton->setGeometry(QRect(420, 570, 75, 23));
        SingleButton = new QPushButton(Widget);
        SingleButton->setObjectName("SingleButton");
        SingleButton->setGeometry(QRect(320, 570, 75, 23));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QString());
        StartButton->setText(QCoreApplication::translate("Widget", "Start", nullptr));
        PauseButton->setText(QCoreApplication::translate("Widget", "Pause", nullptr));
        SingleButton->setText(QCoreApplication::translate("Widget", "single", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
