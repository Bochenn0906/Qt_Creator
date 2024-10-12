#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionNew_project_N, &QAction::triggered, this, &MainWindow::actionNewSlot);
    connect(ui->actionOpen_O, &QAction::triggered, this, &MainWindow::actionOpenSlot);
    connect(ui->actionSave_as_S, &QAction::triggered, this, &MainWindow::actionSaveSlot);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::actionNewSlot()
{
    ui->textEdit->clear();
    this->setWindowTitle("New_text.text");
}

void MainWindow::actionOpenSlot()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Select File",
                                                    QCoreApplication::applicationFilePath(), "*.cpp");
    if (fileName.isEmpty())
    {
        QMessageBox::warning(this, "warning", "select a file");
    }
    else
    {
        //qDebug() << fileName;
        QFile file(fileName);
        file.open(QIODevice::ReadOnly);
        QByteArray ba = file.readAll();
        ui->textEdit->setText(QString(ba));
        file.close();
    }
}

void MainWindow::actionSaveSlot()
{
    QString fileName = QFileDialog::getSaveFileName(this, "select a file",
                                                    QCoreApplication::applicationFilePath());
    if (fileName.isEmpty())
    {
        QMessageBox::warning(this, "warning", "select a file");
    }
    else
    {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly)) {
            QMessageBox::warning(this, "Warning", "Cannot open file for writing");
            return;
        }
        QTextStream stream(&file);
        stream << ui->textEdit->toPlainText();
        file.close();
    }
}

void MainWindow::keyPressedEvent(QKeyEvent *k)
{
    if (k->modifiers() == Qt::ControlModifier && k->key() == Qt::Key_S)
    {
        actionSaveSlot();
    }
}

