#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "functions.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSpacerItem>
#include <QDesktopServices>
#include <QTextEdit>
#include <QTextBrowser>
#include <QSpinBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui-> horizontalSlider, SIGNAL(valueChanged(int)),ui -> progressBar, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_2, SIGNAL(valueChanged(int)),ui -> progressBar_2, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_3, SIGNAL(valueChanged(int)),ui -> progressBar_3, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_4, SIGNAL(valueChanged(int)),ui -> progressBar_4, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_4, SIGNAL(valueChanged(int)),ui -> progressBar_4, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_5, SIGNAL(valueChanged(int)),ui -> progressBar_5, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_6, SIGNAL(valueChanged(int)),ui -> progressBar_6, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_7, SIGNAL(valueChanged(int)),ui -> progressBar_7, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_8, SIGNAL(valueChanged(int)),ui -> progressBar_8, SLOT(setValue(int)));

    connect(ui -> progressBar, SIGNAL(valueChanged(int)), ui-> spinBox, SLOT(setValue(int)));
    connect(ui -> progressBar_2, SIGNAL(valueChanged(int)), ui-> spinBox_2, SLOT(setValue(int)));
    connect(ui -> progressBar_3, SIGNAL(valueChanged(int)), ui-> spinBox_3, SLOT(setValue(int)));
    connect(ui -> progressBar_4, SIGNAL(valueChanged(int)), ui-> spinBox_4, SLOT(setValue(int)));
    connect(ui -> progressBar_5, SIGNAL(valueChanged(int)), ui-> spinBox_5, SLOT(setValue(int)));
    connect(ui -> progressBar_6, SIGNAL(valueChanged(int)), ui-> spinBox_6, SLOT(setValue(int)));
    connect(ui -> progressBar_7, SIGNAL(valueChanged(int)), ui-> spinBox_7, SLOT(setValue(int)));
    connect(ui -> progressBar_8, SIGNAL(valueChanged(int)), ui-> spinBox_8, SLOT(setValue(int)));

    connect(ui-> horizontalSlider_9, SIGNAL(valueChanged(int)),ui -> progressBar_9, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_10, SIGNAL(valueChanged(int)),ui -> progressBar_10, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_11, SIGNAL(valueChanged(int)),ui -> progressBar_11, SLOT(setValue(int)));

    connect(ui -> progressBar_9, SIGNAL(valueChanged(int)), ui-> spinBox_9, SLOT(setValue(int)));
    connect(ui -> progressBar_10, SIGNAL(valueChanged(int)), ui-> spinBox_10, SLOT(setValue(int)));
    connect(ui -> progressBar_11, SIGNAL(valueChanged(int)), ui-> spinBox_11, SLOT(setValue(int)));

    ui -> hw1TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
    ui -> hw2TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
    ui -> hw3TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
    ui -> hw4TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
    ui -> hw5TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
    ui -> hw6TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
    ui -> hw7TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
    ui -> hw8TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
    ui -> midterm1TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
    ui -> midterm2TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
    ui -> finalExamTextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
    ui -> overallScoreTextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");

    QLabel* finalV = new QLabel(QString::number(calculateFinalGrade()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

