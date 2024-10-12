#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_oneButton_clicked();
    void on_twoButton_clicked();
    void on_threeButton_clicked();
    void on_fourButton_clicked();
    void on_fiveButton_clicked();
    void on_sixButton_clicked();
    void on_sevenButton_clicked();
    void on_eightButton_clicked();
    void on_nineButton_clicked();
    void on_zeroButton_clicked();
    void on_lbraButton_clicked();
    void on_rbraButton_clicked();
    void on_plusButton_clicked();
    void on_minusButton_clicked();
    void on_multiButton_clicked();
    void on_divButton_clicked();
    void on_cleanButton_clicked();
    void on_backButton_clicked();

    void on_equalButton_clicked();

private:
    Ui::Widget *ui;
    QString expression;
};
#endif // WIDGET_H
