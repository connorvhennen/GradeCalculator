#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSpacerItem>
#include <QDesktopServices>
#include <QTextEdit>
#include <QTextBrowser>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui -> ten10bhorzslider -> hide();
    ui -> tenBhorzSlider2 -> hide();
    ui -> tenBhw -> hide();
    ui -> tenBhwLabel2 -> hide();
    ui -> tenBporgBar -> hide();
    ui -> tenBprogBar -> hide();
    ui -> tenBSpinBox -> hide();
    ui -> tenBspinBox -> hide();

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

void MainWindow::reset(){

    ui -> horizontalSlider ->setValue(0);
    ui -> horizontalSlider_2 ->setValue(0);
    ui -> horizontalSlider_3 ->setValue(0);
    ui -> horizontalSlider_4 ->setValue(0);
    ui -> horizontalSlider_5 ->setValue(0);
    ui -> horizontalSlider_6 ->setValue(0);
    ui -> horizontalSlider_7 ->setValue(0);
    ui -> horizontalSlider_8 ->setValue(0);
    ui -> horizontalSlider_9 ->setValue(0);
    ui -> horizontalSlider_10 ->setValue(0);
    ui -> horizontalSlider_11 ->setValue(0);

    ui -> radioButton -> setChecked(false);
    ui -> radioButton -> setEnabled(true);

    ui -> radioButton_2 -> setChecked(false);
    ui -> radioButton_2 -> setEnabled(true);

    int picLevel = ui -> comboBox -> currentIndex();

    if(picLevel == 0 && MainWindow::pic == 1){
          setTo_AfromB();
      }
    else if(picLevel == 0 && MainWindow::pic == 2){
          setTo_AfromC();
      }
     else if(picLevel == 1 && MainWindow::pic == 0){
          setTo_BfromA();
     }
    else if(picLevel == 1 && MainWindow::pic == 2){
         setTo_BfromC();
    }
    else if(picLevel == 2 && MainWindow::pic == 0){
         setTo_CfromA();
    }
    else if(picLevel == 2 && MainWindow::pic == 1){
         setTo_CfromB();
    }

}

void MainWindow::setTo_AfromB(){
    ui -> hw2Label_9 ->setText("Midterm #2");
    ui -> ten10bhorzslider -> hide();
    ui -> tenBhorzSlider2 -> hide();
    ui -> tenBhw -> hide();
    ui -> tenBhwLabel2 -> hide();
    ui -> tenBporgBar -> hide();
    ui -> tenBprogBar -> hide();
    ui -> tenBSpinBox -> hide();
    ui -> tenBspinBox -> hide();

    ui ->spinBox_11 -> show();
    ui ->hw2Label_10 -> show();
    ui ->horizontalSlider_11 ->show();
    ui ->progressBar_11 ->show();

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
    //MainWindow::ui -> -> deleteLater();
}

void MainWindow::setTo_AfromC(){
    pic = 0;

    ui ->horizontalSlider_5 ->show();
    ui ->horizontalSlider_6 ->show();
    ui ->horizontalSlider_7 -> show();
    ui ->horizontalSlider_8 -> show();
    ui ->horizontalSlider_11 -> show();
    ui ->hw2Label_3 -> setText("Hw #4");
    ui ->hw2Label_4 -> show();
    ui ->hw2Label_5 -> show();
    ui ->hw2Label_6 -> show();
    ui ->hw2Label_7 -> show();
    ui ->hw2Label_9 -> setText("Midterm 1");
    ui -> progressBar_5 -> show();
    ui -> progressBar_6 -> show();
    ui -> progressBar_7 -> show();
    ui -> progressBar_8 -> show();
    ui -> progressBar_11 -> show();

    ui -> spinBox_5 -> show();
    ui -> spinBox_6 -> show();
    ui -> spinBox_7 -> show();
    ui -> spinBox_8 -> show();
    ui -> spinBox_11 -> show();
    ui -> hw2Label_10 -> show();

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

    pic = 0;

}

void MainWindow::compute_sum10b() const{
    double homeworkScores = 0;
    std::vector<double> scores(1);
    double midterm1Score =0;
    double finalExamScore = 0;



    scores.push_back(ui->spinBox-> value() );
    scores.push_back(ui->spinBox_2-> value() );
    scores.push_back(ui->spinBox_3-> value() );
    scores.push_back(ui->spinBox_4-> value() );
    scores.push_back(ui->spinBox_5-> value() );
    scores.push_back(ui->spinBox_6-> value() );
    scores.push_back(ui->spinBox_7-> value() );
    scores.push_back(ui->spinBox_8-> value() );
    scores.push_back(ui->tenBSpinBox-> value() );
    scores.push_back(ui->tenBspinBox-> value() );


    std::make_heap (++scores.begin(),scores.end());
    std::sort_heap(++scores.begin(), scores.end());

    //drops lowest homework
    for(size_t i = 2; i <= 10; ++i){
        homeworkScores = homeworkScores + scores[i]/9;
    }

    midterm1Score = ui -> spinBox_9 ->value();
    finalExamScore = ui ->spinBox_10 ->value();

    double schema1Final = (homeworkScores * 0.3) + (midterm1Score * 0.3) + (finalExamScore * 0.4);
    double schema2Final = (homeworkScores * 0.3) + (finalExamScore * 0.7);
    double finalGrade = 0;
    if(schema1Final >= schema2Final){
        finalGrade = schema1Final;
    }
    else if(schema1Final < schema2Final){
        finalGrade = schema2Final;
    }

    QString text(QString::number(finalGrade));
    ui->label->setText(text);
}

void MainWindow::schemaCheck10b() const{
    double homeworkScores = 0;
    std::vector<double> scores(1);
    double midterm1Score =0;
    double finalExamScore = 0;



    scores.push_back(ui->spinBox-> value() );
    scores.push_back(ui->spinBox_2-> value() );
    scores.push_back(ui->spinBox_3-> value() );
    scores.push_back(ui->spinBox_4-> value() );
    scores.push_back(ui->spinBox_5-> value() );
    scores.push_back(ui->spinBox_6-> value() );
    scores.push_back(ui->spinBox_7-> value() );
    scores.push_back(ui->spinBox_8-> value() );
    scores.push_back(ui->tenBSpinBox-> value() );
    scores.push_back(ui->tenBspinBox-> value() );


    std::make_heap (++scores.begin(),scores.end());
    std::sort_heap(++scores.begin(), scores.end());

    //drops lowest homework
    for(size_t i = 1; i <= 10; ++i){
        homeworkScores = homeworkScores + scores[i]/9;
    }

    midterm1Score = ui -> spinBox_9 ->value();
    finalExamScore = ui ->spinBox_10 ->value();

    double schema1total = (homeworkScores * 0.3) + (midterm1Score * 0.3) + (finalExamScore * 0.4);
    double schema2total = (homeworkScores * 0.3) + (finalExamScore * 0.7);


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

void MainWindow::setTo_BfromA(){
    pic = 1;

    ui -> ten10bhorzslider -> show();
    ui -> tenBhorzSlider2 -> show();
    ui -> tenBhw -> show();
    ui -> tenBhwLabel2 -> show();
    ui -> tenBporgBar -> show();
    ui -> tenBprogBar -> show();
    ui -> tenBSpinBox -> show();
    ui -> tenBspinBox -> show();

    QString final = "Final Exam";
    ui -> hw2Label_9 ->setText(final);
    ui ->spinBox_11 -> hide();
    ui ->hw2Label_10 -> hide();
    ui ->horizontalSlider_11 ->hide();
    ui ->progressBar_11 ->hide();

    disconnect(ui-> horizontalSlider, SIGNAL(valueChanged(int)),ui -> progressBar, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_2, SIGNAL(valueChanged(int)),ui -> progressBar_2, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_3, SIGNAL(valueChanged(int)),ui -> progressBar_3, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_4, SIGNAL(valueChanged(int)),ui -> progressBar_4, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_4, SIGNAL(valueChanged(int)),ui -> progressBar_4, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_5, SIGNAL(valueChanged(int)),ui -> progressBar_5, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_6, SIGNAL(valueChanged(int)),ui -> progressBar_6, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_7, SIGNAL(valueChanged(int)),ui -> progressBar_7, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_8, SIGNAL(valueChanged(int)),ui -> progressBar_8, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_9, SIGNAL(valueChanged(int)),ui -> progressBar_9, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_10, SIGNAL(valueChanged(int)),ui -> progressBar_10, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_11, SIGNAL(valueChanged(int)),ui -> progressBar_11, SLOT(setValue(int)));

    //updating spinbox value according to respectiveprogress bar value
    disconnect(ui -> progressBar, SIGNAL(valueChanged(int)), ui-> spinBox, SLOT(setValue(int)));
    disconnect(ui -> progressBar_2, SIGNAL(valueChanged(int)), ui-> spinBox_2, SLOT(setValue(int)));
    disconnect(ui -> progressBar_3, SIGNAL(valueChanged(int)), ui-> spinBox_3, SLOT(setValue(int)));
    disconnect(ui -> progressBar_4, SIGNAL(valueChanged(int)), ui-> spinBox_4, SLOT(setValue(int)));
    disconnect(ui -> progressBar_5, SIGNAL(valueChanged(int)), ui-> spinBox_5, SLOT(setValue(int)));
    disconnect(ui -> progressBar_6, SIGNAL(valueChanged(int)), ui-> spinBox_6, SLOT(setValue(int)));
    disconnect(ui -> progressBar_7, SIGNAL(valueChanged(int)), ui-> spinBox_7, SLOT(setValue(int)));
    disconnect(ui -> progressBar_8, SIGNAL(valueChanged(int)), ui-> spinBox_8, SLOT(setValue(int)));
    disconnect(ui -> progressBar_9, SIGNAL(valueChanged(int)), ui-> spinBox_9, SLOT(setValue(int)));
    disconnect(ui -> progressBar_10, SIGNAL(valueChanged(int)), ui-> spinBox_10, SLOT(setValue(int)));
    disconnect(ui -> progressBar_11, SIGNAL(valueChanged(int)), ui-> spinBox_11, SLOT(setValue(int)));

    QObject::disconnect( ui->spinBox ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );
    QObject::disconnect( ui->spinBox_2 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() ) );
    QObject::disconnect( ui->spinBox_3 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );
    QObject::disconnect( ui->spinBox_4 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() ) );
    QObject::disconnect( ui->spinBox_5 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );
    QObject::disconnect( ui->spinBox_6 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() ) );
    QObject::disconnect( ui->spinBox_7,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );
    QObject::disconnect( ui->spinBox_8 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() ) );
    QObject::disconnect( ui->spinBox_9 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );
    QObject::disconnect( ui->spinBox_10 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() ) );
    QObject::disconnect( ui->spinBox_11 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );

    QObject::disconnect( ui->spinBox_9 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( schemaCheck() )  );
    QObject::disconnect( ui->spinBox_10 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( schemaCheck() )  );
    QObject::disconnect( ui->spinBox_11 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( schemaCheck() )  );

    QObject::disconnect( ui -> comboBox, SIGNAL(currentIndexChanged(int) ), this,
                      SLOT(reset()));

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
    connect(ui->ten10bhorzslider, SIGNAL(valueChanged(int)),ui -> tenBprogBar, SLOT(setValue(int)));
    connect(ui-> tenBhorzSlider2, SIGNAL(valueChanged(int)),ui -> tenBporgBar, SLOT(setValue(int)));

    //connect to spinboxes
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
     connect(ui -> tenBporgBar, SIGNAL(valueChanged(int)), ui-> tenBspinBox, SLOT(setValue(int)));
     connect(ui -> tenBprogBar, SIGNAL(valueChanged(int)), ui-> tenBSpinBox, SLOT(setValue(int)));

     QObject::connect( ui->spinBox ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum10b() )  );
     QObject::connect( ui->spinBox_2 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum10b() ) );
     QObject::connect( ui->spinBox_3 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum10b() )  );
     QObject::connect( ui->spinBox_4 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum10b() ) );
     QObject::connect( ui->spinBox_5 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum10b() )  );
     QObject::connect( ui->spinBox_6 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum10b() ) );
     QObject::connect( ui->spinBox_7,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum10b() )  );
     QObject::connect( ui->spinBox_8 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum10b() ) );
     QObject::connect( ui->spinBox_9 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum10b() )  );
     QObject::connect( ui->spinBox_10 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum10b() ) );
     QObject::connect( ui->tenBspinBox ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum10b() )  );
     QObject::connect( ui->tenBSpinBox ,SIGNAL( valueChanged(int) ),
                          this, SLOT( compute_sum10b() ) );

     QObject::connect( ui->spinBox_9 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( schemaCheck10b() )  );
     QObject::connect( ui->spinBox_10 ,SIGNAL( valueChanged(int) ),
                          this, SLOT( schemaCheck10b() )  );


     QObject::connect( ui -> comboBox, SIGNAL(currentIndexChanged(int) ), this,
                       SLOT(reset()));


    pic = 1;
}

void MainWindow::setTo_BfromC(){

    ui->tenBhorzSlider2 ->setValue(0);
    ui->ten10bhorzslider ->setValue(0);
    ui->tenBprogBar ->setValue(0);
    ui->tenBporgBar ->setValue(0);
    setTo_AfromC();
    setTo_BfromA();
    pic = 1;
}


void MainWindow::compute_sum10c() const{
    double homeworkScores = 0;
    std::vector<double> scores(1);
    double midterm1Score =0;
    double projectScore = 0;
    double finalExamScore = 0;


    // Wouldn't it be nice if we could get the needed values
    // directly from the spinBoxes???

    scores.push_back(ui->spinBox-> value() );
    scores.push_back(ui->spinBox_2-> value() );
    scores.push_back(ui->spinBox_3-> value() );
    scores.push_back(ui->spinBox_4-> value() );
    scores.push_back(ui->spinBox_9-> value() );
    scores.push_back(ui->spinBox_10-> value() );

    for(size_t i = 1; i<= 3;++i){
        homeworkScores = homeworkScores + scores[i]/3;
    }

    midterm1Score = scores[5];
    projectScore = scores[4];
    finalExamScore = scores[6];

    double finalGradeSchema1 = .15*homeworkScores + .25*midterm1Score + .30*finalExamScore + .35*projectScore;

    double finalGradeSchema2 = .15*homeworkScores + .50*finalExamScore + .35*projectScore;


    double finalGrade = 0;
    if(finalGradeSchema1 >= finalGradeSchema2)
    {
        finalGrade = finalGradeSchema1;

    }
    else
    {
        finalGrade = finalGradeSchema2;

    }

    QString text(QString::number(finalGrade));
    ui->label->setText(text);
}

void MainWindow::schemaCheck10c() const{
    double homeworkScores = 0;
    std::vector<double> scores(1);
    double midterm1Score =0;
    double projectScore = 0;
    double finalExamScore = 0;


    // Wouldn't it be nice if we could get the needed values
    // directly from the spinBoxes???

    scores.push_back(ui->spinBox-> value() );
    scores.push_back(ui->spinBox_2-> value() );
    scores.push_back(ui->spinBox_3-> value() );
    scores.push_back(ui->spinBox_4-> value() );
    scores.push_back(ui->spinBox_9-> value() );
    scores.push_back(ui->spinBox_10-> value() );

    for(size_t i = 1; i<= 3;++i){
        homeworkScores = homeworkScores + scores[i]/3;
    }

    midterm1Score = scores[5];
    projectScore = scores[4];
    finalExamScore = scores[6];

    double schema1total =  .25*midterm1Score + .30*finalExamScore + .35*projectScore;

    double schema2total = .50*finalExamScore + .35*projectScore;

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


void MainWindow::setTo_CfromA(){

    disconnect(ui-> horizontalSlider, SIGNAL(valueChanged(int)),ui -> progressBar, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_2, SIGNAL(valueChanged(int)),ui -> progressBar_2, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_3, SIGNAL(valueChanged(int)),ui -> progressBar_3, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_4, SIGNAL(valueChanged(int)),ui -> progressBar_4, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_4, SIGNAL(valueChanged(int)),ui -> progressBar_4, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_5, SIGNAL(valueChanged(int)),ui -> progressBar_5, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_6, SIGNAL(valueChanged(int)),ui -> progressBar_6, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_7, SIGNAL(valueChanged(int)),ui -> progressBar_7, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_8, SIGNAL(valueChanged(int)),ui -> progressBar_8, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_9, SIGNAL(valueChanged(int)),ui -> progressBar_9, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_10, SIGNAL(valueChanged(int)),ui -> progressBar_10, SLOT(setValue(int)));
    disconnect(ui-> horizontalSlider_11, SIGNAL(valueChanged(int)),ui -> progressBar_11, SLOT(setValue(int)));

    //updating spinbox value according to respectiveprogress bar value
    disconnect(ui -> progressBar, SIGNAL(valueChanged(int)), ui-> spinBox, SLOT(setValue(int)));
    disconnect(ui -> progressBar_2, SIGNAL(valueChanged(int)), ui-> spinBox_2, SLOT(setValue(int)));
    disconnect(ui -> progressBar_3, SIGNAL(valueChanged(int)), ui-> spinBox_3, SLOT(setValue(int)));
    disconnect(ui -> progressBar_4, SIGNAL(valueChanged(int)), ui-> spinBox_4, SLOT(setValue(int)));
    disconnect(ui -> progressBar_5, SIGNAL(valueChanged(int)), ui-> spinBox_5, SLOT(setValue(int)));
    disconnect(ui -> progressBar_6, SIGNAL(valueChanged(int)), ui-> spinBox_6, SLOT(setValue(int)));
    disconnect(ui -> progressBar_7, SIGNAL(valueChanged(int)), ui-> spinBox_7, SLOT(setValue(int)));
    disconnect(ui -> progressBar_8, SIGNAL(valueChanged(int)), ui-> spinBox_8, SLOT(setValue(int)));
    disconnect(ui -> progressBar_9, SIGNAL(valueChanged(int)), ui-> spinBox_9, SLOT(setValue(int)));
    disconnect(ui -> progressBar_10, SIGNAL(valueChanged(int)), ui-> spinBox_10, SLOT(setValue(int)));
    disconnect(ui -> progressBar_11, SIGNAL(valueChanged(int)), ui-> spinBox_11, SLOT(setValue(int)));

    QObject::disconnect( ui->spinBox ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );
    QObject::disconnect( ui->spinBox_2 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() ) );
    QObject::disconnect( ui->spinBox_3 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );
    QObject::disconnect( ui->spinBox_4 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() ) );
    QObject::disconnect( ui->spinBox_5 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );
    QObject::disconnect( ui->spinBox_6 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() ) );
    QObject::disconnect( ui->spinBox_7,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );
    QObject::disconnect( ui->spinBox_8 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() ) );
    QObject::disconnect( ui->spinBox_9 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );
    QObject::disconnect( ui->spinBox_10 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() ) );
    QObject::disconnect( ui->spinBox_11 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum() )  );

    QObject::disconnect( ui->spinBox_9 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( schemaCheck() )  );
    QObject::disconnect( ui->spinBox_10 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( schemaCheck() )  );
    QObject::disconnect( ui->spinBox_11 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( schemaCheck() )  );

    QObject::disconnect( ui -> comboBox, SIGNAL(currentIndexChanged(int) ), this,
                      SLOT(reset()));

    ui ->horizontalSlider_5 ->hide();
    ui ->horizontalSlider_6 -> hide();
    ui ->horizontalSlider_7 -> hide();
    ui ->horizontalSlider_8 -> hide();
    ui ->horizontalSlider_11 -> hide();
    ui ->hw2Label_3 -> setText("Project");
    ui ->hw2Label_4 -> hide();
    ui ->hw2Label_5 -> hide();
    ui ->hw2Label_6 -> hide();
    ui ->hw2Label_7 -> hide();
    ui ->hw2Label_9 -> setText("Final Exam");
    ui -> progressBar_5 -> hide();
    ui -> progressBar_6 -> hide();
    ui -> progressBar_7 -> hide();
    ui -> progressBar_8 -> hide();
    ui -> progressBar_11 -> hide();
    //delete spinboxes 6-8 and 11
    ui -> spinBox_5 -> hide();
    ui -> spinBox_6 -> hide();
    ui -> spinBox_7 -> hide();
    ui -> spinBox_8 -> hide();
    ui -> spinBox_11 -> hide();
    ui -> hw2Label_10 -> hide();

    connect(ui-> horizontalSlider, SIGNAL(valueChanged(int)),ui -> progressBar, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_2, SIGNAL(valueChanged(int)),ui -> progressBar_2, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_3, SIGNAL(valueChanged(int)),ui -> progressBar_3, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_4, SIGNAL(valueChanged(int)),ui -> progressBar_4, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_9, SIGNAL(valueChanged(int)),ui -> progressBar_9, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_10, SIGNAL(valueChanged(int)),ui -> progressBar_10, SLOT(setValue(int)));

    connect(ui-> horizontalSlider, SIGNAL(valueChanged(int)),ui -> spinBox, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_2, SIGNAL(valueChanged(int)),ui -> spinBox_2, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_3, SIGNAL(valueChanged(int)),ui -> spinBox_3, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_4, SIGNAL(valueChanged(int)),ui -> spinBox_4, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_9, SIGNAL(valueChanged(int)),ui -> spinBox_9, SLOT(setValue(int)));
    connect(ui-> horizontalSlider_10, SIGNAL(valueChanged(int)),ui -> spinBox_10, SLOT(setValue(int)));

    QObject::connect( ui->spinBox ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum10c() )  );
    QObject::connect( ui->spinBox_2 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum10c() ) );
    QObject::connect( ui->spinBox_3 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum10c() )  );
    QObject::connect( ui->spinBox_4 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum10c() ) );
    QObject::connect( ui->spinBox_9,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum10c() )  );
    QObject::connect( ui->spinBox_10,SIGNAL( valueChanged(int) ),
                         this, SLOT( compute_sum10c() )  );
    QObject::connect( ui->spinBox_4 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( schemaCheck10c() )  );
    QObject::connect( ui->spinBox_9 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( schemaCheck10c() )  );
    QObject::connect( ui->spinBox_10 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( schemaCheck10c() )  );

    QObject::connect( ui -> comboBox, SIGNAL(currentIndexChanged(int) ), this,
                      SLOT(reset()));

    pic = 2;
 }


void MainWindow::setTo_CfromB(){


    setTo_AfromB();
    setTo_CfromA();
    pic = 2;


}

//need to implement setTo_CfromB, setTo_BfromC (have some implementation), setTo_AfromB, setTo_BfromA(have some implementation- disconnected all the A stuff but need to implement B stuff now)
