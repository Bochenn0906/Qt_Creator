#include "Sensor_reading.h"

#include <QApplication>
#pragma comment(lib, "user32.lib")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Sensor_reading w;
    w.show();
    return a.exec();
}