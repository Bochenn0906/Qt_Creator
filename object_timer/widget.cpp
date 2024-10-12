#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    picID = 2;

    QPixmap pix("C:\\Users\\Admin\\Desktop\\material\\1.JPG");
    ui->label->setPixmap(pix);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_StartButton_clicked()
{
    myTimerId = this->startTimer(TIMEOUT);
}

void Widget::timerEvent(QTimerEvent *event){
    if (event->timerId() != myTimerId)
        return;

    QString path("C:\\Users\\Admin\\Desktop\\material\\");
        path += QString::number(picID);
        path += ".JPG";

        QPixmap pix(path);
        ui->label->setPixmap(pix);

        picID++;

        if(11 == picID)
            picID = 1;

}

void Widget::on_PauseButton_clicked()
{
    this->killTimer(myTimerId);
}

