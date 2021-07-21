#ifndef BUILDING_H
#define BUILDING_H
#include <QLabel>
#include <QCheckBox>
#include <QRadioButton>
class Building{
protected:
    QLabel* label;
    int point;
public:
    Building(QLabel* l){
        label=l;
    }
    virtual QLabel* getlabel()=0;
};

class Road:public Building{
private:
    QCheckBox* box;

public:
    Road(QLabel* _l,QCheckBox *bx):Building(_l){
        box=bx;
       point=0;
    }
    void sit(){
        qDebug()<<label->text();
    }
    QLabel* getlabel(){
        return label;
    }
    QCheckBox* getbox(){
        return box;
    }
};
class Home:public Building{
private:
    QRadioButton* rad;
public:
    Home(QLabel* _l,QRadioButton* _r):Building(_l){
        rad=_r;
        point=1;
    }
    QLabel* getlabel(){
        return label;
    }
    QRadioButton* getrad(){
        return rad;
    }

};

#endif // BUILDING_H
