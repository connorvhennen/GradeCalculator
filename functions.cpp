#include "functions.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_functions.h"

Functions::Functions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Functions)
{
    ui->setupUi(this);
}


int Functions::getScore(QSpinBox *x) const{
    int score = 0;

    QSpinBox* gradePart = new QSpinBox;
    gradePart = x;
    score = gradePart -> value();
    return score;
}

int Functions::calculateFinalGrade() const{
    double finalGrade = 0;
    Ui_MainWindow::spinBox -> value;
    //finalGrade = getScore(MainWindow::ui ->spinBox)
            //*getScore(ui -> MainWindow::spinBox_2)*getScore(ui -> spinBox_3)*getScore(ui -> spinBox_4)*getScore(ui -> spinBox_5)*getScore(ui -> spinBox_6)*getScore(ui -> spinBox_7)*getScore(ui -> spinBox_8)*getScore(ui -> spinBox_9)*getScore(ui -> spinBox_10)*getScore(ui -> spinBox_11);

//    new QLabel(QString::number(finalGrade));

//    MainWindow::connect(finalGrade,SIGNAL(valueChanged(double),ui -> finalScoreValue, SLOT(setValue(double))));
}




Functions::~Functions()
{
    delete ui;
}
