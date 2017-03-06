#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSpinBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    friend class functions;

public:
    explicit MainWindow(QWidget *parent = 0);
    int calculateFinalGrade();
    int getScore(QSpinBox *x);
    ~MainWindow();

    Ui::MainWindow *ui;
private slots:
    //void on_horizontalSlider_sliderMoved(int position);


private:


};

#endif // MAINWINDOW_H
