#include "mainwindow.h"
#include "ui_mainwindow.h"

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <QWidget>
#include <QSpinBox>

namespace Ui {
class Functions;
}

class Functions : public QWidget
{
    Q_OBJECT

public:
    explicit Functions(QWidget *parent = 0);
    explicit Functions(QWidget *parent = 0, QSpinBox *box = 0);
    int getScore(QSpinBox *x) const;
    int calculateFinalGrade() const;
    ~Functions();

private:
    Ui::Functions *ui;
};

#endif // FUNCTIONS_H
