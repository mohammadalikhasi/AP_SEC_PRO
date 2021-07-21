#include "information.h"
#include "ui_information.h"

information::information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::information)
{
    ui->setupUi(this);
    cls=new QPushButton("close",this);
    user1=new QLabel("username1:",this);
    user2=new QLabel("username2:",this);
    user3=new QLabel("username3:",this);
    col1=new QLabel("color1:",this);
    col2=new QLabel("color2:",this);
    col3=new QLabel("color3:",this);
    bx1=new QComboBox(this);
    bx1->addItem("red");
    bx1->addItem("yellow");
    bx1->addItem("green");
    bx1->addItem("blue");
    bx2=new QComboBox(this);
    bx2->addItem("red");
    bx2->addItem("yellow");
    bx2->addItem("green");
    bx2->addItem("blue");
    bx3=new QComboBox(this);
    bx3->addItem("red");
    bx3->addItem("yellow");
    bx3->addItem("green");
    bx3->addItem("blue");
    line1=new QLineEdit(this);
    line3=new QLineEdit(this);
    line2=new QLineEdit(this);



    user1->setGeometry(20,30,100,20);
    line1->setGeometry(100,30,300,20);
    user2->setGeometry(20,130,100,20);
    line2->setGeometry(100,130,300,20);
    user3->setGeometry(20,230,100,20);
    line3->setGeometry(100,230,300,20);
    col1->setGeometry(20,80,100,20);
    col2->setGeometry(20,180,100,20);
    col3->setGeometry(20,280,100,20);
    bx1->setGeometry(100,80,200,20);
    bx2->setGeometry(100,180,200,20);
    bx3->setGeometry(100,280,200,20);
    cls->setGeometry(350,380,100,30);


    connect(cls,SIGNAL(clicked()),this,SLOT(CLS()));
}


information::~information()
{
    delete ui;
}
void information::CLS(){
    if(line1->text()!=line2->text()&&line3->text()!=line2->text()){
        if(bx1->currentIndex()!=bx2->currentIndex()&&bx1->currentIndex()!=bx3->currentIndex()){
            emit infoadded();
            this->close();
        }
    }
}
