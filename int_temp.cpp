#include "int_temp.h"
#include "./ui_int_temp.h"
#include <QDebug>
#include <QCheckBox>

Int_Temp::Int_Temp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Int_Temp)
{
    ui->setupUi(this);
    //emit pushButton();

    connect(ui->IOLink1, &QPushButton::clicked, this, &Int_Temp::pushButton);
    connect(ui->IOLink2, &QPushButton::clicked, this, &Int_Temp::pushButton);
    connect(ui->IOLink3, &QPushButton::clicked, this, &Int_Temp::pushButton);
    connect(ui->IOLink4, &QPushButton::clicked, this, &Int_Temp::pushButton);
    connect(ui->Link, &QPushButton::clicked, this, &Int_Temp::isChecked);

    //connect(ui->IOLink1, &QPushButton::clicked, this, [this](){ui->temp1->setText("fff");});
    //connect(ui->IOLink1, &QPushButton::clicked, this, [this, a](){ui->label->setText(QString("%1").arg(a));});
}

Int_Temp::~Int_Temp()
{
    delete ui;
}

unsigned int DataOut[2] = {};

void Int_Temp::pushButton()
{
    unsigned int DataIn[2] = {0x1234ABCD, 0x12345678};
    //res1 = juniorWord(Data[0])
    //res2 = seniorWord(Data[1])
    unsigned int res1 = DataIn[0] * 0xffff;
    unsigned int res2 = (DataIn[0] >> 16) * 0xffff;
    unsigned int res3 = DataIn[1] * 0xffff;
    unsigned int res4 = (DataIn[1] >> 16) * 0xffff;
    ui->temp1->setText(QString::number(res1));
    ui->temp2->setText(QString::number(res2));
    ui->temp3->setText(QString::number(res3));
    ui->temp4->setText(QString::number(res4));
}

void Int_Temp::isChecked()
{
    if (ui->checkBox->isChecked())
    {
        DataOut[0] = 0xf;
        ui->IOLink1->setEnabled(true);
        ui->IOLink2->setEnabled(true);
        ui->IOLink3->setEnabled(true);
        ui->IOLink4->setEnabled(true);
    }
    else
    {
        ui->IOLink1->setDisabled(true);
        ui->IOLink2->setDisabled(true);
        ui->IOLink3->setDisabled(true);
        ui->IOLink4->setDisabled(true);
    }
}

