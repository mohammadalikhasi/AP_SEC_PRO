#include "playertrade.h"
#include "ui_playertrade.h"

PlayerTrade::PlayerTrade(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlayerTrade)
{
    ui->setupUi(this);


    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(set()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(SEND()));
}

PlayerTrade::~PlayerTrade()
{
    delete ui;
}
void PlayerTrade::set(){
    ui->pushButton->setDisabled(true);
}
void PlayerTrade::SEND(){
    QVector<int> vc;
    vc.push_back(ui->spinBox->value());
    vc.push_back(ui->spinBox_2->value());
    vc.push_back(ui->spinBox_3->value());
    vc.push_back(ui->spinBox_4->value());
    vc.push_back(ui->spinBox_5->value());
    vc.push_back(ui->spinBox_6->value());
    vc.push_back(ui->spinBox_7->value());
    vc.push_back(ui->spinBox_8->value());
    vc.push_back(ui->spinBox_9->value());
    vc.push_back(ui->spinBox_10->value());
    if(!ui->pushButton->isEnabled()){
        ui->pushButton->setEnabled(true);
        emit send(first,second,vc);
        this->close();
    }
}
