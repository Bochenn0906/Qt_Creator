#include "Sensor_reading.h"

Sensor_reading::Sensor_reading(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_Sensor_reading)
{
    ui->setupUi(this);
}

Sensor_reading::~Sensor_reading()
{
    delete ui; 
}