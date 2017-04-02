#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QString>
#include <QEvent>
#include <QAbstractButton>
#include <QComboBox>
#include <algorithm>
#include <vector>


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

    void reset();
    void setTo_AfromB();
    void setTo_AfromC();
    void setTo_BfromC();
    void setTo_BfromA();
    void setTo_CfromA();
    void setTo_CfromB();

    void compute_sum10c() const;
    void schemaCheck10c() const;

    void compute_sum10b() const;
    //void schemaCheck10b() const;


public:
    int pic = 0;

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H


