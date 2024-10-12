#include "Sensor.h"

Sensor::Sensor(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_Sensor)
{
    ui->setupUi(this);
}

Sensor::~Sensor()
{
    delete ui; 
}