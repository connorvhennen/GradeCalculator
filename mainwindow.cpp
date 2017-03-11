#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSpacerItem>
#include <QDesktopServices>
#include <QTextEdit>
#include <QTextBrowser>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //updating progress bar value according to respective horizontal slider position
    connect(ui-> horizontalSlider, SIGNAL(valueChanged(int)),ui -> progressBar, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_2, SIGNAL(valueChanged(int)),ui -> progressBar_2, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_3, SIGNAL(valueChanged(int)),ui -> progressBar_3, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_4, SIGNAL(valueChanged(int)),ui -> progressBar_4, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_4, SIGNAL(valueChanged(int)),ui -> progressBar_4, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_5, SIGNAL(valueChanged(int)),ui -> progressBar_5, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_6, SIGNAL(valueChanged(int)),ui -> progressBar_6, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_7, SIGNAL(valueChanged(int)),ui -> progressBar_7, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_8, SIGNAL(valueChanged(int)),ui -> progressBar_8, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_9, SIGNAL(valueChanged(int)),ui -> progressBar_9, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_10, SIGNAL(valueChanged(int)),ui -> progressBar_10, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_11, SIGNAL(valueChanged(int)),ui -> progressBar_11, SLOT(setValue(int)));

    //updating spinbox value according to respectiveprogress bar value
    connect(ui -> progressBar, SIGNAL(valueChanged(int)), ui-> spinBox, SLOT(setValue(int)));
    connect(ui -> progressBar_2, SIGNAL(valueChanged(int)), ui-> spinBox_2, SLOT(setValue(int)));
    connect(ui -> progressBar_3, SIGNAL(valueChanged(int)), ui-> spinBox_3, SLOT(setValue(int)));
    connect(ui -> progressBar_4, SIGNAL(valueChanged(int)), ui-> spinBox_4, SLOT(setValue(int)));
    connect(ui -> progressBar_5, SIGNAL(valueChanged(int)), ui-> spinBox_5, SLOT(setValue(int)));
    connect(ui -> progressBar_6, SIGNAL(valueChanged(int)), ui-> spinBox_6, SLOT(setValue(int)));
    connect(ui -> progressBar_7, SIGNAL(valueChanged(int)), ui-> spinBox_7, SLOT(setValue(int)));
    connect(ui -> progressBar_8, SIGNAL(valueChanged(int)), ui-> spinBox_8, SLOT(setValue(int)));
    connect(ui -> progressBar_9, SIGNAL(valueChanged(int)), ui-> spinBox_9, SLOT(setValue(int)));
    connect(ui -> progressBar_10, SIGNAL(valueChanged(int)), ui-> spinBox_10, SLOT(setValue(int)));
    connect(ui -> progressBar_11, SIGNAL(valueChanged(int)), ui-> spinBox_11, SLOT(setValue(int)));


//    ui -> hw1TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
//    ui -> hw2TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
//    ui -> hw3TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
//    ui -> hw4TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
//    ui -> hw5TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
//    ui -> hw6TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
//    ui -> hw7TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
//    ui -> hw8TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
//    ui -> midterm1TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
//    ui -> midterm2TextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
//    ui -> finalExamTextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");
//    ui -> overallScoreTextBox ->setStyleSheet(" QTextBrowser { background-color: rgba(255, 255, 255, 30);}");

    QObject::connect( ui->spinBox ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );
    QObject::connect( ui->spinBox_2 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() ) );
    QObject::connect( ui->spinBox_3 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );
    QObject::connect( ui->spinBox_4 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() ) );
    QObject::connect( ui->spinBox_5 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );
    QObject::connect( ui->spinBox_6 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() ) );
    QObject::connect( ui->spinBox_7,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );
    QObject::connect( ui->spinBox_8 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() ) );
    QObject::connect( ui->spinBox_9 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );
    QObject::connect( ui->spinBox_10 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() ) );
    QObject::connect( ui->spinBox_11 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );

    QObject::connect( ui->spinBox_9 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( schemaCheck() )  );
    QObject::connect( ui->spinBox_10 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( schemaCheck() )  );
    QObject::connect( ui->spinBox_11 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( schemaCheck() )  );

    QObject::connect( ui -> comboBox, SIGNAL(currentIndexChanged(int) ), this,
                      SLOT(reset()));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::compute_sum() const {

    double homeworkScores = 0;
    std::vector<double> scores(1);
    double midterm1Score =0;
    double midterm2Score = 0;
    double finalExamScore = 0;


    // Wouldn't it be nice if we could get the needed values
    // directly from the spinBoxes???

    scores.push_back(ui->spinBox-> value() );
    scores.push_back(ui->spinBox_2-> value() );
    scores.push_back(ui->spinBox_3-> value() );
    scores.push_back(ui->spinBox_4-> value() );
    scores.push_back(ui->spinBox_5-> value() );
    scores.push_back(ui->spinBox_6-> value() );
    scores.push_back(ui->spinBox_7-> value() );
    scores.push_back(ui->spinBox_8-> value() );
    scores.push_back(ui->spinBox_9-> value() );
    scores.push_back(ui->spinBox_10-> value() );
    scores.push_back(ui->spinBox_11-> value() );

    homeworkScores = 0;
    for(size_t i = 1; i <= 8; ++i){
        homeworkScores = homeworkScores + scores[i]/8;
    }

    midterm1Score = scores[9];
    midterm2Score = scores[10];
    finalExamScore = scores[11];

    double finalGradeSchema1 = .25*homeworkScores + .20*midterm1Score + .20*midterm2Score + .35*finalExamScore;

    double finalGradeSchema2 = 0;
    if(midterm1Score >= midterm2Score){
    finalGradeSchema2 = .25*homeworkScores + .3*midterm1Score + .44*finalExamScore;
}
    else finalGradeSchema2 = .25*homeworkScores + .3*midterm2Score + .44*finalExamScore;

    bool schema1;
    double finalGrade = 0;
    if(finalGradeSchema1 >= finalGradeSchema2)
    {
        finalGrade = finalGradeSchema1;
        schema1 = true;
    }
    else
    {
        finalGrade = finalGradeSchema2;
        schema1 = false;
    }

    QString text(QString::number(finalGrade));
    ui->label->setText(text);


}

void MainWindow::schemaCheck() const{
    std::vector<double> scores(1);
    double midterm1Score =0;
    double midterm2Score = 0;
    double finalExamScore = 0;


    midterm1Score = ui->spinBox_9-> value();
    midterm2Score = ui->spinBox_10-> value();
    finalExamScore = ui->spinBox_11-> value();

    double maxMidterm = 0;
    if(midterm1Score >= midterm2Score){
        maxMidterm = midterm1Score;
    }
    else maxMidterm = midterm2Score;

    double schema1total = .20*midterm1Score + .20*midterm2Score + .35*finalExamScore;
    double schema2total = .3*maxMidterm + .44*finalExamScore;

    if(schema1total > schema2total){
        ui -> radioButton->click();
        ui -> radioButton -> setChecked(true);
        ui -> radioButton_2 -> setDisabled(true);
        ui -> radioButton_2 -> setChecked(false);
    }
    else if(schema1total < schema2total)
    {
        ui -> radioButton_2->click();
        ui -> radioButton_2 -> setChecked(true);
        ui -> radioButton -> setDisabled(true);
        ui -> radioButton -> setChecked(false);
    }
}

void MainWindow::reset() const{
      int picLevel = ui -> comboBox -> currentIndex();

      if(picLevel == 0){
          setTo_10A();
      }
      if(picLevel == 1){
          setTo_10B();
      }
      if(picLevel == 2){
          setTo_10C();
      }




//    ui -> horizontalSlider ->setValue(0);
//    ui -> horizontalSlider_2 ->setValue(0);
//    ui -> horizontalSlider_3 ->setValue(0);
//    ui -> horizontalSlider_4 ->setValue(0);
//    ui -> horizontalSlider_5 ->setValue(0);
//    ui -> horizontalSlider_6 ->setValue(0);
//    ui -> horizontalSlider_7 ->setValue(0);
//    ui -> horizontalSlider_8 ->setValue(0);
//    ui -> horizontalSlider_9 ->setValue(0);
//    ui -> horizontalSlider_10 ->setValue(0);
//    ui -> horizontalSlider_11 ->setValue(0);

//    ui -> radioButton -> setChecked(false);
//    ui -> radioButton -> setEnabled(true);

//    ui -> radioButton_2 -> setChecked(false);
//    ui -> radioButton_2 -> setEnabled(true);

}

void MainWindow::setTo_10A() const{
    //MainWindow::ui ->centralWidget -> deleteLater();
}

void MainWindow::setTo_10B() const{
   // delete parent();

}

void MainWindow::setTo_10C() const{
   // delete parent();

}
