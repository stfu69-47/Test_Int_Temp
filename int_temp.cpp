#include "int_temp.h"
#include "./ui_int_temp.h"

Int_Temp::Int_Temp(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Int_Temp)
{
    ui->setupUi(this);
    //emit mySignal();
    //connect(ui->IOLink1, &QPushButton::clicked, this, [this](){ui->label1->setText("ffff");});
    connect(ui->IOLink1, &QPushButton::clicked, this, &QPushButton::setEnabled);
//    connect(ui->IOLink2, &QPushButton::clicked, this, &Int_Temp::pushButton);
//    connect(ui->IOLink3, &QPushButton::clicked, this, &Int_Temp::pushButton);
//    connect(ui->IOLink4, &QPushButton::clicked, this, &Int_Temp::pushButton);

    //ui->pushButton->setDisabled(true);

    //connect(ui->IOLink1, &QPushButton::clicked, this, [this, a](){ui->label->setText(QString("%1").arg(a));});
}


Int_Temp::~Int_Temp()
{
    delete ui;
}


void Int_Temp::pushButton()
{

}

