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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *resultDisplay;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *equalButton;
    QPushButton *threeButton;
    QPushButton *sixButton;
    QPushButton *divButton;
    QPushButton *SevenButton;
    QPushButton *cleanButton;
    QPushButton *rbraButton;
    QPushButton *lbraButton;
    QPushButton *nineButton;
    QPushButton *oneButton;
    QPushButton *fiveButton;
    QPushButton *twoButton;
    QPushButton *eightButton;
    QPushButton *multiButton;
    QPushButton *zeroButton;
    QPushButton *fourButton;
    QPushButton *plusButton;
    QPushButton *minusButton;
    QPushButton *backButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(200, 308);
        Widget->setMinimumSize(QSize(200, 308));
        Widget->setMaximumSize(QSize(200, 308));
        resultDisplay = new QLineEdit(Widget);
        resultDisplay->setObjectName("resultDisplay");
        resultDisplay->setGeometry(QRect(10, 10, 181, 41));
        resultDisplay->setFrame(false);
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 60, 181, 241));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        equalButton = new QPushButton(widget);
        equalButton->setObjectName("equalButton");
        equalButton->setMinimumSize(QSize(40, 40));
        equalButton->setMaximumSize(QSize(40, 90));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font.setPointSize(11);
        equalButton->setFont(font);

        gridLayout->addWidget(equalButton, 3, 3, 2, 1);

        threeButton = new QPushButton(widget);
        threeButton->setObjectName("threeButton");
        threeButton->setMinimumSize(QSize(40, 40));
        threeButton->setMaximumSize(QSize(40, 40));
        threeButton->setFont(font);

        gridLayout->addWidget(threeButton, 3, 2, 1, 1);

        sixButton = new QPushButton(widget);
        sixButton->setObjectName("sixButton");
        sixButton->setMinimumSize(QSize(40, 40));
        sixButton->setMaximumSize(QSize(40, 40));
        sixButton->setFont(font);

        gridLayout->addWidget(sixButton, 2, 2, 1, 1);

        divButton = new QPushButton(widget);
        divButton->setObjectName("divButton");
        divButton->setMinimumSize(QSize(40, 40));
        divButton->setMaximumSize(QSize(40, 40));
        divButton->setFont(font);

        gridLayout->addWidget(divButton, 0, 1, 1, 1);

        SevenButton = new QPushButton(widget);
        SevenButton->setObjectName("SevenButton");
        SevenButton->setMinimumSize(QSize(40, 40));
        SevenButton->setMaximumSize(QSize(40, 40));
        SevenButton->setFont(font);

        gridLayout->addWidget(SevenButton, 1, 0, 1, 1);

        cleanButton = new QPushButton(widget);
        cleanButton->setObjectName("cleanButton");
        cleanButton->setMinimumSize(QSize(40, 40));
        cleanButton->setMaximumSize(QSize(40, 40));
        cleanButton->setFont(font);

        gridLayout->addWidget(cleanButton, 0, 0, 1, 1);

        rbraButton = new QPushButton(widget);
        rbraButton->setObjectName("rbraButton");
        rbraButton->setMinimumSize(QSize(40, 40));
        rbraButton->setMaximumSize(QSize(40, 40));
        rbraButton->setFont(font);

        gridLayout->addWidget(rbraButton, 4, 2, 1, 1);

        lbraButton = new QPushButton(widget);
        lbraButton->setObjectName("lbraButton");
        lbraButton->setMinimumSize(QSize(40, 40));
        lbraButton->setMaximumSize(QSize(40, 40));
        lbraButton->setFont(font);

        gridLayout->addWidget(lbraButton, 4, 0, 1, 1);

        nineButton = new QPushButton(widget);
        nineButton->setObjectName("nineButton");
        nineButton->setMinimumSize(QSize(40, 40));
        nineButton->setMaximumSize(QSize(40, 40));
        nineButton->setFont(font);

        gridLayout->addWidget(nineButton, 1, 2, 1, 1);

        oneButton = new QPushButton(widget);
        oneButton->setObjectName("oneButton");
        oneButton->setMinimumSize(QSize(40, 40));
        oneButton->setMaximumSize(QSize(40, 40));
        oneButton->setFont(font);

        gridLayout->addWidget(oneButton, 3, 0, 1, 1);

        fiveButton = new QPushButton(widget);
        fiveButton->setObjectName("fiveButton");
        fiveButton->setMinimumSize(QSize(40, 40));
        fiveButton->setMaximumSize(QSize(40, 40));
        fiveButton->setFont(font);

        gridLayout->addWidget(fiveButton, 2, 1, 1, 1);

        twoButton = new QPushButton(widget);
        twoButton->setObjectName("twoButton");
        twoButton->setMinimumSize(QSize(40, 40));
        twoButton->setMaximumSize(QSize(40, 40));
        twoButton->setFont(font);

        gridLayout->addWidget(twoButton, 3, 1, 1, 1);

        eightButton = new QPushButton(widget);
        eightButton->setObjectName("eightButton");
        eightButton->setMinimumSize(QSize(40, 40));
        eightButton->setMaximumSize(QSize(40, 40));
        eightButton->setFont(font);

        gridLayout->addWidget(eightButton, 1, 1, 1, 1);

        multiButton = new QPushButton(widget);
        multiButton->setObjectName("multiButton");
        multiButton->setMinimumSize(QSize(40, 40));
        multiButton->setMaximumSize(QSize(40, 40));
        multiButton->setFont(font);

        gridLayout->addWidget(multiButton, 0, 2, 1, 1);

        zeroButton = new QPushButton(widget);
        zeroButton->setObjectName("zeroButton");
        zeroButton->setMinimumSize(QSize(40, 40));
        zeroButton->setMaximumSize(QSize(40, 40));
        zeroButton->setFont(font);

        gridLayout->addWidget(zeroButton, 4, 1, 1, 1);

        fourButton = new QPushButton(widget);
        fourButton->setObjectName("fourButton");
        fourButton->setMinimumSize(QSize(40, 40));
        fourButton->setMaximumSize(QSize(40, 40));
        fourButton->setFont(font);

        gridLayout->addWidget(fourButton, 2, 0, 1, 1);

        plusButton = new QPushButton(widget);
        plusButton->setObjectName("plusButton");
        plusButton->setMinimumSize(QSize(40, 40));
        plusButton->setMaximumSize(QSize(40, 90));
        plusButton->setFont(font);

        gridLayout->addWidget(plusButton, 1, 3, 1, 1);

        minusButton = new QPushButton(widget);
        minusButton->setObjectName("minusButton");
        minusButton->setMinimumSize(QSize(40, 40));
        minusButton->setMaximumSize(QSize(40, 40));
        minusButton->setFont(font);

        gridLayout->addWidget(minusButton, 2, 3, 1, 1);

        backButton = new QPushButton(widget);
        backButton->setObjectName("backButton");
        backButton->setMinimumSize(QSize(40, 40));
        backButton->setMaximumSize(QSize(40, 90));
        backButton->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("back.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon);
        backButton->setIconSize(QSize(22, 22));

        gridLayout->addWidget(backButton, 0, 3, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Calculator", nullptr));
        equalButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
        threeButton->setText(QCoreApplication::translate("Widget", "3", nullptr));
        sixButton->setText(QCoreApplication::translate("Widget", "6", nullptr));
        divButton->setText(QCoreApplication::translate("Widget", "/", nullptr));
        SevenButton->setText(QCoreApplication::translate("Widget", "7", nullptr));
        cleanButton->setText(QCoreApplication::translate("Widget", "C", nullptr));
        rbraButton->setText(QCoreApplication::translate("Widget", ")", nullptr));
        lbraButton->setText(QCoreApplication::translate("Widget", "(", nullptr));
        nineButton->setText(QCoreApplication::translate("Widget", "9", nullptr));
        oneButton->setText(QCoreApplication::translate("Widget", "1", nullptr));
        fiveButton->setText(QCoreApplication::translate("Widget", "5", nullptr));
        twoButton->setText(QCoreApplication::translate("Widget", "2", nullptr));
        eightButton->setText(QCoreApplication::translate("Widget", "8", nullptr));
        multiButton->setText(QCoreApplication::translate("Widget", "*", nullptr));
        zeroButton->setText(QCoreApplication::translate("Widget", "0", nullptr));
        fourButton->setText(QCoreApplication::translate("Widget", "4", nullptr));
        plusButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        minusButton->setText(QCoreApplication::translate("Widget", "-", nullptr));
        backButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
