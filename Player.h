#ifndef PLAYER_H
#define PLAYER_H
#include <QString>
class Player{
private:
    QString color;
    QString name;
    int brick=0;
    int wood=0;
    int sheep=0;
    int stone=0;
    int wheat=0;
    int road=12;
    int home=5;
    int city=4;
    int point=0;
public:
    int Getcity(){
        return city;
    }
    void pluscity(int a){
        city+=a;
    }
    QString Getcolor(){
        return color;
    }
    QString Getname(){
        return name;
    }
    int Getbrick(){
        return brick;
    }
    int Getstone(){
        return stone;
    }
    int Getwheat(){
        return wheat;
    }
    int Getsheep(){
        return sheep;
    }
    int Getwood(){
        return wood;
    }
    int Getroad(){
        return road;
    }
    int Gethome(){
        return home;
    }
    void Plusbrick(int a){
        brick+=a;
    }
    void Plusstone(int a){
        stone+=a;
    }
    void Plusroad(int a){
        road+=a;
    }
    void Plushome(int a){
        home+=a;
    }
    void Pluswood(int a){
        wood+=a;
    }
    void Pluswheat(int a){
        wheat+=a;
    }
    void Plussheep(int a){
        sheep+=a;
    }
    void Setcolor(QString col){
        color=col;
    }
    void Setname(QString nm){
        name=nm;
    }
    int calpoint(){
        point=(5-home)+2*(4-city);
        return point;
    }
};
#endif // PLAYER_H
