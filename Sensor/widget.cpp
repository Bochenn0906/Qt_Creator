#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //连接信号与槽 四个pramater： 谁发出 发什么 谁处理  如何处理
    connect(ui->cmdlineEdit, SIGNAL(returnPressed()),this, SLOT(on_confirmButton_clicked()));
    connect(ui->cancelButton, &QPushButton::clicked, this, &Widget::on_cancelButton_clicked);
    connect(ui->browseButton, &QPushButton::clicked, [this]()
    {
        QMessageBox::information(this, "Note","click to browse");
    });
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_confirmButton_clicked()
{
    //获取lineedit data
    QString program = ui->cmdlineEdit->text();
    //创建process对象
    QProcess *myProcess = new QProcess(this);
    myProcess->start(program);
}


void Widget::on_cancelButton_clicked()
{
    this->close();
}
