#ifndef TILE_H
#define TILE_H
#include "Building.h"

class Tile{
private:
    QVector<Road*>  road;
    QVector<Home*> home;
    int number;
    int resource;

public:
    Tile(QVector<Road*> _road,
    QVector<Home*> _home,int _number,int _resource){

        road=_road;
        home=_home;
        number=_number;
        resource=_resource;
    }
    int Getnum(){
        return number;
    }
    QVector<Home*> Gethome(){
        return home;
    }
    int Getrec(){
        return resource;
    }
};
#endif // TILE_H
