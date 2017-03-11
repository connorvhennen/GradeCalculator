#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QString>
#include <QEvent>
#include <QAbstractButton>
#include <QComboBox>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //void on_horizontalSlider_sliderMoved(int position);
    void compute_sum() const;
    void schemaCheck() const;

//    void compute_sum_10B() const;
//    void schemaCheck_10B() const;

//    void compute_sum_10C() const;
//    void schemaCheck_10C() const;

    void reset() const;
    void setTo_10A() const;
    void setTo_10B() const;
    void setTo_10C() const;



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H


