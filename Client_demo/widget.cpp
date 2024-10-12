#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    socket = new QTcpSocket;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_LinkButton_clicked()
{
    QString IP = ui->ipLineEdit->text();
    QString port = ui->ipLineEdit->text();

    socket->connectToHost(QHostAddress(IP), port.toShort());

    connect(socket, &QTcpSocket::connected, [this]()
{
        QMessageBox::information(this, "connecting tips", "successfully connected");

    });

    connect(socket, &QTcpSocket::disconnected, [this]()
{
        QMessageBox::warning(this, "connecting tips", "unsually connected, connection interrupting");

    });

}


void Widget::on_pushButton_2_clicked()
{
    this->close();
}

