#ifndef BANK_H
#define BANK_H
class Bank{
private:
    int brick=20;
    int wood=20;
    int wheat=20;
    int stone=20;
    int sheep=20;
public:
    int getwood(){
        return wood;
    }
    int getbrick(){
        return brick;
    }
    int getwheat(){
        return wheat;
    }
    int getstone(){
        return stone;
    }
    int getsheep(){
        return sheep;
    }
    void pluswood(int a){
        wood+=a;
    }
    void plusstone(int a){
        stone+=a;
    }
    void pluswheat(int a){
        wheat+=a;
    }
    void plussheep(int a){
        sheep+=a;
    }
    void plusbrick(int a){
        brick+=a;
    }
};
#endif // BANK_H
