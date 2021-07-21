#ifndef PORT_H
#define PORT_H
#include "Building.h"
class Port{
private:
    Home* h1;
    Home* h2;
    int resource;
    int resourcenum;
public:
    Port(Home* h11,Home* h21,int rec,int rec2){
        h1=h11;
        h2=h21;
        resource=rec;
        resourcenum=rec2;
    }
    Home* home1(){
        return h1;
    }
    Home* home2(){
        return h2;
    }
    int res(){
        return resource;
    }
};
#endif // PORT_H
