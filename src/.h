#pragma once
#include "ui_.h"
#include <QMainWindow>

class  : public QMainWindow {
    Q_OBJECT
    
public:
    (QWidget* parent = nullptr);
    ~();

private:
    Ui_* ui;
};