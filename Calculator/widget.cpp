#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Calculator");

    QFont f("仿宋", 14);
    ui->resultDisplay->setFont(f);

    QIcon con("D:\\Embedded\\Qt_projects\\Calculator\\back.jpg");
    ui->backButton->setIcon(con);

    ui->equalButton->setStyleSheet("background:#496989");
    ui->equalButton->setStyleSheet("background:#000");
    ui->equalButton->setStyleSheet("background:#000");
    ui->equalButton->setStyleSheet("background:#000");
    ui->equalButton->setStyleSheet("background:#000");
    ui->equalButton->setStyleSheet("background:#000");
    ui->equalButton->setStyleSheet("background:#000");
}


Widget::~Widget()
{
    delete ui;
}

void Widget::on_oneButton_clicked()
{
    expression += "1";
    ui->resultDisplay->setText(expression);
}
void Widget::on_twoButton_clicked()
{
    expression += "2";
    ui->resultDisplay->setText(expression);
}
void Widget::on_threeButton_clicked()
{
    expression += "3";
    ui->resultDisplay->setText(expression);
}
void Widget::on_fourButton_clicked()
{
    expression += "4";
    ui->resultDisplay->setText(expression);
}
void Widget::on_fiveButton_clicked()
{
    expression += "5";
    ui->resultDisplay->setText(expression);
}
void Widget::on_sixButton_clicked()
{
    expression += "6";
    ui->resultDisplay->setText(expression);
}
void Widget::on_sevenButton_clicked()
{
    expression += "7";
    ui->resultDisplay->setText(expression);
}
void Widget::on_eightButton_clicked()
{
    expression += "8";
    ui->resultDisplay->setText(expression);
}
void Widget::on_nineButton_clicked()
{
    expression += "9";
    ui->resultDisplay->setText(expression);
}
void Widget::on_zeroButton_clicked()
{
    expression += "0";
    ui->resultDisplay->setText(expression);
}
void Widget::on_lbraButton_clicked()
{
    expression += "(";
    ui->resultDisplay->setText(expression);
}
void Widget::on_rbraButton_clicked()
{
    expression += ")";
    ui->resultDisplay->setText(expression);
}
void Widget::on_plusButton_clicked()
{
    expression += "+";
    ui->resultDisplay->setText(expression);
}
void Widget::on_divButton_clicked()
{
    expression += "/";
    ui->resultDisplay->setText(expression);
}
void Widget::on_multiButton_clicked()
{
    expression += "*";
    ui->resultDisplay->setText(expression);
}
void Widget::on_minusButton_clicked()
{
    expression += "-";
    ui->resultDisplay->setText(expression);
}


void Widget::on_cleanButton_clicked()
{
    expression.clear();
    ui->resultDisplay->clear();
}


void Widget::on_backButton_clicked()
{
    expression.chop(1);
    ui->resultDisplay->setText(expression);
}




