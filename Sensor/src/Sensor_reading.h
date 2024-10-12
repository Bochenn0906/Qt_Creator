#pragma once
#include "ui_Sensor_reading.h"
#include <QMainWindow>

class Sensor_reading : public QMainWindow {
    Q_OBJECT
    
public:
    Sensor_reading(QWidget* parent = nullptr);
    ~Sensor_reading();

private:
    Ui_Sensor_reading* ui;
};