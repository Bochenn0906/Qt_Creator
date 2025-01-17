#include "mywidget.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>

//argc: 命令行变量的数量；argv：命令行变量的数组
int main(int argc, char *argv[])
{
    //a应用程序对象，在qt中应用程序对象有且仅有一个
    QApplication a(argc, argv);

    //窗口对象 myWidget父类 -> Qwidget
    myWidget w;

    //窗口对象，默认不会显示，必须调用show方法显示
    w.show();

    //让应用程序对象进入消息循环
    //让代码阻塞至此
    return a.exec();
}
