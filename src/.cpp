#include ".h"

::(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_)
{
    ui->setupUi(this);
}

::~()
{
    delete ui; 
}