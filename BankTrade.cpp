#include "banktrade.h"
#include "ui_banktrade.h"

BankTrade::BankTrade(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BankTrade)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Brick");
    ui->comboBox->addItem("Sheep");
    ui->comboBox->addItem("Stone");
    ui->comboBox->addItem("Wheat");
    ui->comboBox->addItem("Wood");
    ui->comboBox_2->addItem("Brick");
    ui->comboBox_2->addItem("Sheep");
    ui->comboBox_2->addItem("Stone");
    ui->comboBox_2->addItem("Wheat");
    ui->comboBox_2->addItem("Wood");



    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(DONE()));
}

BankTrade::~BankTrade()
{
    delete ui;
}
void BankTrade::DONE(){
    this->close();
    emit selected(ui->comboBox->currentIndex(),ui->comboBox_2->currentIndex());
}
