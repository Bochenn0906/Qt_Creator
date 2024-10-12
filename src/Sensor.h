#pragma once
#include "ui_Sensor.h"
#include <QMainWindow>

class Sensor : public QMainWindow {
    Q_OBJECT
    
public:
    Sensor(QWidget* parent = nullptr);
    ~Sensor();

private:
    Ui_Sensor* ui;
};