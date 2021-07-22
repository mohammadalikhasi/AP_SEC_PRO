#ifndef MAP_H
#define MAP_H
#include "Building.h"
#include "Tile.h"
#include "Port.h"
#include "Player.h"
#include "Bank.h"
class Map:public QObject{
Q_OBJECT;
private:
    QVector<Tile*> tiles;
    QVector<Road*> road;
    QVector<Home*> home;
    QVector<Port*> port;
    Player* p1,*p2,*p3;
    Bank* bank;
public:
    Map(QVector<Tile*> tile,Player* q1,Player* q2,Player* q3,QVector<Road*> r,QVector<Home*> h,QVector<Port*>_p,Bank* b){
        tiles=tile;
        p1=q1;
        p2=q2;
        p3=q3;
        road=r;
        home=h;
        port=_p;
        bank=b;
    }
    Map(){

    }
    Player* Getp1(){
        return p1;
    }
    Player* Getp2(){
        return p2;
    }
    Player* Getp3(){
        return p3;
    }
    void divide1(int a,int b){
        Player* cur;
        if(a%3==1)
            cur=p1;
        if(a%3==2)
            cur=p2;
        if(a%3==0)
            cur=p3;
        for(int i=0;i<tiles.size();i++){
            QVector<Home*> h=tiles[i]->Gethome();
            for(int j=0;j<6;j++){
                if(h[j]==home[b]){
                    qDebug()<<"ok";
                    switch (tiles[i]->Getrec()) {
                    case(1):
                        if(bank->getbrick()>0){
                        cur->Plusbrick(1);
                        bank->plusbrick(-1);
                        }
                        break;
                    case(2):
                        if(bank->getsheep()>0){
                        cur->Plussheep(1);
                        bank->plussheep(-1);
                        }
                        break;
                    case(3):
                        if(bank->getstone()>0){
                        cur->Plusstone(1);
                        bank->plusstone(-1);
                        }
                        break;
                    case(4):
                        if(bank->getwheat()>0){
                        cur->Pluswheat(1);
                        bank->pluswheat(-1);
                        }
                        break;
                    case(5):
                        if(bank->getwood()>0){
                        cur->Pluswood(1);
                        bank->pluswood(-1);
                        }
                        break;
                    }
                }
            }
        }
        if(a%3==1)
            p1=cur;
        if(a%3==2)
            p2=cur;
        if(a%3==0)
            p3=cur;
        emit Turn();
    }
public slots:

    void divide(int a){


        for(int i=0;i<tiles.size();i++){
            if(tiles[i]->Getnum()==a){
                QVector<Home*>h=tiles[i]->Gethome();
                for(int j=0;j<h.size();j++){
                    if(h[j]->getlabel()->text()==p1->Getcolor()){
                        switch(tiles[i]->Getrec()){
                        case(1):
                            if(bank->getbrick()>0){
                            p1->Plusbrick(1);
                            bank->plusbrick(-1);
                            }
                            break;
                        case(2):
                            if(bank->getsheep()>0){
                            p1->Plussheep(1);
                            bank->plussheep(-1);
                            }
                            break;
                        case(3):
                            if(bank->getstone()>0){
                            p1->Plusstone(1);
                            bank->plusstone(-1);
                            }
                            break;
                        case(4):
                            if(bank->getwheat()>0){
                            p1->Pluswheat(1);
                            bank->pluswheat(-1);
                            }
                            break;
                        case(5):
                            if(bank->getwood()>0){
                            p1->Pluswood(1);
                            bank->pluswood(-1);
                            }
                            break;
                        }
                    }
                        if(h[j]->getlabel()->text()==p2->Getcolor()){
                            switch(tiles[i]->Getrec()){
                            case(1):
                                if(bank->getbrick()>0){
                                p2->Plusbrick(1);
                                bank->plusbrick(-1);
                                }
                                break;
                            case(2):
                                if(bank->getsheep()>0){
                                p2->Plussheep(1);
                                bank->plussheep(-1);
                                }
                                break;
                            case(3):
                                if(bank->getstone()>0){
                                p2->Plusstone(1);
                                bank->plusstone(-1);
                                }
                                break;
                            case(4):
                                if(bank->getwheat()>0){
                                p2->Pluswheat(1);
                                bank->pluswheat(-1);
                                }
                                break;
                            case(5):
                                if(bank->getwood()>0){
                                p2->Pluswood(1);
                                bank->pluswood(-1);
                                }
                                break;
                            }
                          }
                        if(h[j]->getlabel()->text()==p3->Getcolor()){
                            switch(tiles[i]->Getrec()){
                            case(1):
                                if(bank->getbrick()>0){
                                p3->Plusbrick(1);
                                bank->plusbrick(-1);
                                }
                                break;
                            case(2):
                                if(bank->getsheep()>0){
                                p3->Plussheep(1);
                                bank->plussheep(-1);
                                }
                                break;
                            case(3):
                                if(bank->getstone()>0){
                                p3->Plusstone(1);
                                bank->plusstone(-1);
                                }
                                break;
                            case(4):
                                if(bank->getwheat()>0){
                                p3->Pluswheat(1);
                                bank->pluswheat(-1);
                                }
                                break;
                            case(5):
                                if(bank->getwood()>0){
                                p3->Pluswood(1);
                                bank->pluswood(-1);
                                }
                                break;
                            }
                 }
                        if(h[j]->getlabel()->text()=="c"+p1->Getcolor()){
                            switch(tiles[i]->Getrec()){
                            case(1):
                                if(bank->getbrick()>1){
                                p1->Plusbrick(2);
                                bank->plusbrick(-2);
                                }
                                break;
                            case(2):
                                if(bank->getsheep()>1){
                                p1->Plussheep(2);
                                bank->plussheep(-2);
                                }
                                break;
                            case(3):
                                if(bank->getstone()>1){
                                p1->Plusstone(2);
                                bank->plusstone(-2);
                                }
                                break;
                            case(4):
                                if(bank->getwheat()>1){
                                p1->Pluswheat(2);
                                bank->pluswheat(-2);
                                }
                                break;
                            case(5):
                                if(bank->getwood()>1){
                                p1->Pluswood(2);
                                bank->pluswood(-2);
                                }
                                break;
                            }
                 }
                        if(h[j]->getlabel()->text()=="c"+p2->Getcolor()){
                            switch(tiles[i]->Getrec()){
                            case(1):
                                if(bank->getbrick()>1){
                                p2->Plusbrick(2);
                                bank->plusbrick(-2);
                                }
                                break;
                            case(2):
                                if(bank->getsheep()>1){
                                p2->Plussheep(2);
                                bank->plussheep(-2);
                                }
                                break;
                            case(3):
                                if(bank->getstone()>1){
                                p2->Plusstone(2);
                                bank->plusstone(-2);
                                }
                                break;
                            case(4):
                                if(bank->getwheat()>1){
                                p2->Pluswheat(2);
                                bank->pluswheat(-2);
                                }
                                break;
                            case(5):
                                if(bank->getwood()>1){
                                p2->Pluswood(2);
                                bank->pluswood(-2);
                                }
                                break;
                            }

                 }
                        if(h[j]->getlabel()->text()=="c"+p3->Getcolor()){
                            switch(tiles[i]->Getrec()){
                            case(1):
                                if(bank->getbrick()>1){
                                p3->Plusbrick(2);
                                bank->plusbrick(-2);
                                }
                                break;
                            case(2):
                                if(bank->getsheep()>1){
                                p3->Plussheep(2);
                                bank->plussheep(-2);
                                }
                                break;
                            case(3):
                                if(bank->getstone()>1){
                                p3->Plusstone(2);
                                bank->plusstone(-2);
                                }
                                break;
                            case(4):
                                if(bank->getwheat()>1){
                                p3->Pluswheat(2);
                                bank->pluswheat(-2);
                                }
                                break;
                            case(5):
                                if(bank->getwood()>1){
                                p3->Pluswood(2);
                                bank->pluswood(-2);
                                }
                                break;
                            }
                 }
       }
     }
    }
        emit changed();
        qDebug()<<bank->getbrick();
   }
    void BuildRoad(int a,int b){
        if(a%3==1){
            if(road[b]->getlabel()->isHidden()){
                if(p1->Getroad()>0&&p1->Getbrick()>0&&p1->Getwood()>0){
                    p1->Plusbrick(-1);
                    p1->Pluswood(-1);
                    road[b]->getbox()->hide();
                    p1->Plusroad(-1);
                    bank->plusbrick(1);
                    bank->pluswood(1);
                    road[b]->getlabel()->setVisible(true);
                    road[b]->getlabel()->setText(p1->Getcolor());
                    road[b]->getlabel()->setStyleSheet("background-color:"+p1->Getcolor()+";"+"color:"+p1->Getcolor()+";");

                }
                else{
                    road[b]->getbox()->setChecked(false);
                }

            }
        }
        if(a%3==2){
            if(road[b]->getlabel()->isHidden()){
                if(p2->Getroad()>0&&p2->Getbrick()>0&&p2->Getwood()>0){
                    p2->Plusbrick(-1);
                    p2->Pluswood(-1);
                    road[b]->getbox()->hide();
                    p2->Plusroad(-1);
                    bank->plusbrick(1);
                    bank->pluswood(1);
                    road[b]->getlabel()->setVisible(true);
                    road[b]->getlabel()->setText(p2->Getcolor());
                    road[b]->getlabel()->setStyleSheet("background-color:"+p2->Getcolor()+";"+"color:"+p2->Getcolor()+";");

                }
                else{
                    road[b]->getbox()->setChecked(false);
                }

            }
        }
        if(a%3==0){
            if(road[b]->getlabel()->isHidden()){
                if(p3->Getroad()>0&&p3->Getbrick()>0&&p3->Getwood()>0){
                    p3->Plusbrick(-1);
                    p3->Pluswood(-1);
                    road[b]->getbox()->hide();
                    p3->Plusroad(-1);
                    bank->plusbrick(1);
                    bank->pluswood(1);
                    road[b]->getlabel()->setVisible(true);
                    road[b]->getlabel()->setText(p3->Getcolor());
                    road[b]->getlabel()->setStyleSheet("background-color:"+p3->Getcolor()+";"+"color:"+p3->Getcolor()+";");

                }
                else{
                    road[b]->getbox()->setChecked(false);
                }

            }
        }

        emit Turn();
    }
    void Buildhome1(int a,int b,int c,int d,int f,int g){

        if(a%3==1){
        if(home[b]->getlabel()->text()==p1->Getcolor()&&p1->Getstone()>2&&p1->Getwheat()>1&&p1->Getcity()>0){
            p1->Pluswheat(-2);
            p1->Plusstone(-3);
            bank->pluswheat(2);
            bank->plusstone(3);
            p1->Plushome(+1);
            p1->pluscity(-1);
            home[b]->getrad()->hide();
            home[b]->getlabel()->setVisible(true);
            home[b]->getlabel()->setText("c"+p1->Getcolor());
            home[b]->getlabel()->setStyleSheet("background-color:"+p1->Getcolor()+";"+"color:"+p1->Getcolor()+";");
            emit Turn();
            return;
        }
        if(home[b]->getlabel()->isHidden()&&(p1->Getcolor()==road[c]->getlabel()->text()||p1->Getcolor()==road[d]->getlabel()->text())&&p1->Getwood()>0&&p1->Getwheat()>0&&p1->Getsheep()>0&&p1->Getsheep()>0
                &&p1->Getcolor()!=home[f]->getlabel()->text()&&p1->Getcolor()!=home[g]->getlabel()->text()&&p1->Gethome()>0){
           home[54]->getrad()->setChecked(true);
            p1->Plusbrick(-1);
            p1->Plussheep(-1);
            p1->Pluswheat(-1);
            p1->Pluswood(-1);
            bank->plusbrick(1);
            bank->plussheep(1);
            bank->pluswheat(1);
            bank->pluswood(1);
            p1->Plushome(-1);
            home[b]->getlabel()->setVisible(true);
            home[b]->getlabel()->setText(p1->Getcolor());
            home[b]->getlabel()->setStyleSheet("background-color:"+p1->Getcolor()+";"+"color:"+p1->Getcolor()+";");
            if(a<7)
                divide1(a,b);
            emit Turn();
            return;
        }
            home[54]->getrad()->setChecked(true);
        }
        if(a%3==2){
        if(home[b]->getlabel()->text()==p2->Getcolor()&&p2->Getstone()>2&&p2->Getwheat()>1&&p2->Getcity()>0){
            p2->Pluswheat(-2);
            p2->Plusstone(-3);
            bank->pluswheat(2);
            bank->plusstone(3);
            p2->Plushome(+1);
            p2->pluscity(-1);
            home[b]->getrad()->hide();
            home[b]->getlabel()->setVisible(true);
            home[b]->getlabel()->setText("c"+p2->Getcolor());
            home[b]->getlabel()->setStyleSheet("background-color:"+p2->Getcolor()+";"+"color:"+p2->Getcolor()+";");
            emit Turn();
            return;
        }
        if(home[b]->getlabel()->isHidden()&&(p2->Getcolor()==road[c]->getlabel()->text()||p2->Getcolor()==road[d]->getlabel()->text())&&p2->Getwood()>0&&p2->Getwheat()>0&&p2->Getsheep()>0&&p2->Getsheep()>0
                &&p2->Getcolor()!=home[f]->getlabel()->text()&&p2->Getcolor()!=home[g]->getlabel()->text()&&p2->Gethome()>0){
           home[54]->getrad()->setChecked(true);
            p2->Plusbrick(-1);
            p2->Plussheep(-1);
            p2->Pluswheat(-1);
            p2->Pluswood(-1);
            bank->plusbrick(1);
            bank->plussheep(1);
            bank->pluswheat(1);
            bank->pluswood(1);
            p2->Plushome(-1);
            home[b]->getlabel()->setVisible(true);
            home[b]->getlabel()->setText(p2->Getcolor());
            home[b]->getlabel()->setStyleSheet("background-color:"+p2->Getcolor()+";"+"color:"+p2->Getcolor()+";");
            if(a<7)
                divide1(a,b);
            emit Turn();
            return;
        }
            home[54]->getrad()->setChecked(true);
        }
        if(a%3==0){
        if(home[b]->getlabel()->text()==p3->Getcolor()&&p3->Getstone()>2&&p3->Getwheat()>1&&p3->Getcity()>0){
            p3->Pluswheat(-2);
            p3->Plusstone(-3);
            bank->pluswheat(2);
            bank->plusstone(3);
            p3->Plushome(+1);
            p3->pluscity(-1);
            home[b]->getrad()->hide();
            home[b]->getlabel()->setVisible(true);
            home[b]->getlabel()->setText("c"+p3->Getcolor());
            home[b]->getlabel()->setStyleSheet("background-color:"+p3->Getcolor()+";"+"color:"+p3->Getcolor()+";");
            emit Turn();
            return;
        }
        if(home[b]->getlabel()->isHidden()&&(p3->Getcolor()==road[c]->getlabel()->text()||p3->Getcolor()==road[d]->getlabel()->text())&&p3->Getwood()>0&&p3->Getwheat()>0&&p3->Getsheep()>0&&p3->Getsheep()>0
                &&p3->Getcolor()!=home[f]->getlabel()->text()&&p3->Getcolor()!=home[g]->getlabel()->text()&&p3->Gethome()>0){
           home[54]->getrad()->setChecked(true);
            p3->Plusbrick(-1);
            p3->Plussheep(-1);
            p3->Pluswheat(-1);
            p3->Pluswood(-1);
            bank->plusbrick(1);
            bank->plussheep(1);
            bank->pluswheat(1);
            bank->pluswood(1);
            p3->Plushome(-1);
            home[b]->getlabel()->setVisible(true);
            home[b]->getlabel()->setText(p3->Getcolor());
            home[b]->getlabel()->setStyleSheet("background-color:"+p3->Getcolor()+";"+"color:"+p3->Getcolor()+";");
            if(a<7)
                divide1(a,b);
            emit Turn();
            return;
        }
            home[54]->getrad()->setChecked(true);
        }



    }
    void Buildhome2(int a,int b,int c,int d, int f,int g, int h, int i){
        if(a%3==1){
        if(home[b]->getlabel()->text()==p1->Getcolor()&&p1->Getstone()>2&&p1->Getwheat()>1&&p1->Getcity()>0){
            p1->Pluswheat(-2);
            p1->Plusstone(-3);
            bank->pluswheat(2);
            bank->plusstone(3);
            p1->Plushome(+1);
            p1->pluscity(-1);
            home[b]->getrad()->hide();
            home[b]->getlabel()->setVisible(true);
            home[b]->getlabel()->setText("c"+p1->Getcolor());
            home[b]->getlabel()->setStyleSheet("background-color:"+p1->Getcolor()+";"+"color:"+p1->Getcolor()+";");
            emit Turn();
            return;
        }
        if(home[b]->getlabel()->isHidden()&&(p1->Getcolor()==road[c]->getlabel()->text()||p1->Getcolor()==road[d]->getlabel()->text()||p1->Getcolor()==road[f]->getlabel()->text())&&p1->Getwood()>0&&p1->Getwheat()>0&&p1->Getsheep()>0&&p1->Getsheep()>0
                &&p1->Getcolor()!=home[h]->getlabel()->text()&&p1->Getcolor()!=home[g]->getlabel()->text()&&p1->Getcolor()!=home[i]->getlabel()->text()&&p1->Gethome()>0){
           home[54]->getrad()->setChecked(true);
            p1->Plusbrick(-1);
            p1->Plussheep(-1);
            p1->Pluswheat(-1);
            p1->Pluswood(-1);
            bank->plusbrick(1);
            bank->plussheep(1);
            bank->pluswheat(1);
            bank->pluswood(1);
            p1->Plushome(-1);
            home[b]->getlabel()->setVisible(true);
            home[b]->getlabel()->setText(p1->Getcolor());
            home[b]->getlabel()->setStyleSheet("background-color:"+p1->Getcolor()+";"+"color:"+p1->Getcolor()+";");
            if(a<7)
                divide1(a,b);
            emit Turn();
            return;
        }
            home[54]->getrad()->setChecked(true);
        }
        if(a%3==2){
        if(home[b]->getlabel()->text()==p2->Getcolor()&&p2->Getstone()>2&&p2->Getwheat()>1&&p2->Getcity()>0){
            p2->Pluswheat(-2);
            p2->Plusstone(-3);
            bank->pluswheat(2);
            bank->plusstone(3);
            p2->Plushome(+1);
            p2->pluscity(-1);
            home[b]->getrad()->hide();
            home[b]->getlabel()->setVisible(true);
            home[b]->getlabel()->setText("c"+p2->Getcolor());
            home[b]->getlabel()->setStyleSheet("background-color:"+p2->Getcolor()+";"+"color:"+p2->Getcolor()+";");
            emit Turn();
            return;
        }
        if(home[b]->getlabel()->isHidden()&&(p2->Getcolor()==road[c]->getlabel()->text()||p2->Getcolor()==road[d]->getlabel()->text()||p2->Getcolor()==road[f]->getlabel()->text())&&p2->Getwood()>0&&p2->Getwheat()>0&&p2->Getsheep()>0&&p2->Getsheep()>0
                &&p2->Getcolor()!=home[h]->getlabel()->text()&&p2->Getcolor()!=home[g]->getlabel()->text()&&p2->Getcolor()!=home[i]->getlabel()->text()&&p2->Gethome()>0){
           home[54]->getrad()->setChecked(true);
            p2->Plusbrick(-1);
            p2->Plussheep(-1);
            p2->Pluswheat(-1);
            p2->Pluswood(-1);
            bank->plusbrick(1);
            bank->plussheep(1);
            bank->pluswheat(1);
            bank->pluswood(1);
            p2->Plushome(-1);
            home[b]->getlabel()->setVisible(true);
            home[b]->getlabel()->setText(p2->Getcolor());
            home[b]->getlabel()->setStyleSheet("background-color:"+p2->Getcolor()+";"+"color:"+p2->Getcolor()+";");
            if(a<7)
                divide1(a,b);
            emit Turn();
            return;
        }
            home[54]->getrad()->setChecked(true);
        }
        if(a%3==0){
        if(home[b]->getlabel()->text()==p3->Getcolor()&&p3->Getstone()>2&&p3->Getwheat()>1&&p3->Getcity()>0){
            p3->Pluswheat(-2);
            p3->Plusstone(-3);
            bank->pluswheat(2);
            bank->plusstone(3);
            p3->Plushome(+1);
            p3->pluscity(-1);
            home[b]->getrad()->hide();
            home[b]->getlabel()->setVisible(true);
            home[b]->getlabel()->setText("c"+p3->Getcolor());
            home[b]->getlabel()->setStyleSheet("background-color:"+p3->Getcolor()+";"+"color:"+p3->Getcolor()+";");
            emit Turn();
            return;
        }
        if(home[b]->getlabel()->isHidden()&&(p3->Getcolor()==road[c]->getlabel()->text()||p3->Getcolor()==road[d]->getlabel()->text()||p3->Getcolor()==road[f]->getlabel()->text())&&p3->Getwood()>0&&p3->Getwheat()>0&&p3->Getsheep()>0&&p3->Getsheep()>0
                &&p3->Getcolor()!=home[h]->getlabel()->text()&&p3->Getcolor()!=home[g]->getlabel()->text()&&p3->Getcolor()!=home[i]->getlabel()->text()&&p3->Gethome()>0){
           home[54]->getrad()->setChecked(true);
            p3->Plusbrick(-1);
            p3->Plussheep(-1);
            p3->Pluswheat(-1);
            p3->Pluswood(-1);
            bank->plusbrick(1);
            bank->plussheep(1);
            bank->pluswheat(1);
            bank->pluswood(1);
            p3->Plushome(-1);
            home[b]->getlabel()->setVisible(true);
            home[b]->getlabel()->setText(p3->Getcolor());
            home[b]->getlabel()->setStyleSheet("background-color:"+p3->Getcolor()+";"+"color:"+p3->Getcolor()+";");
            if(a<7)
                divide1(a,b);
            emit Turn();
            return;
        }
            home[54]->getrad()->setChecked(true);
        }
    }
    void PORT(int a,int b,int c){
        int flag1=0,flag=0;
        qDebug()<<a<<b<<c;
        Player* cur;
        if(a%3==1)
            cur=p1;
        if(a%3==2)
            cur=p2;
        if(a%3==0)
            cur=p3;
        qDebug()<<cur->Getcolor();
          if(port[b]->home1()->getlabel()->text()==cur->Getcolor()||port[b]->home1()->getlabel()->text()=="c"+cur->Getcolor()||port[b]->home2()->getlabel()->text()==cur->Getcolor()
                  ||port[b]->home1()->getlabel()->text()=="c"+cur->Getcolor()){

              switch (c) {
              case(0):
                  if(bank->getbrick())
                  flag=1;
                  break;
              case(1):
                  if(bank->getsheep())
                  flag=1;
                  break;
              case(2):
                  if(bank->getstone())
                  flag=1;
                  break;
              case(3):
                  if(bank->getwheat())
                  flag=1;
                  break;
              case(4):
                  if(bank->getwood())
                  flag=1;
                  break;
              }
              if(flag){
                  qDebug()<<"ok";
                  switch (port[b]->res()) {
                  case(0):
                      if(cur->Getbrick()>1){
                          cur->Plusbrick(-2);
                          bank->plusbrick(2);
                          flag1=1;
                      }
                      break;
                  case(1):
                      if(cur->Getsheep()>1){
                          cur->Plussheep(-2);
                          bank->plussheep(2);
                          flag1=1;
                      }
                      break;
                  case(2):
                      if(cur->Getstone()>1){
                          cur->Plusstone(-2);
                          bank->plusstone(2);
                          flag1=1;
                      }
                      break;
                  case(3):
                      if(cur->Getwheat()>1){
                          cur->Pluswheat(-2);
                          bank->pluswheat(2);
                          flag1=1;
                      }
                      break;
                  case(4):
                      if(cur->Getwood()>1){
                          cur->Pluswood(-2);
                          bank->pluswood(2);
                          flag1=1;
                      }
                      break;
                  }
              }
              if(flag&&flag1){
                  switch (c) {
                  case(0):
                      cur->Plusbrick(1);
                      bank->plusbrick(-1);
                      break;
                  case(1):
                      cur->Plussheep(1);
                      bank->plussheep(-1);
                      break;
                  case(2):
                      cur->Plusstone(1);
                      bank->plusstone(-1);
                      break;
                  case(3):
                      cur->Pluswheat(1);
                      bank->pluswheat(-1);
                      break;
                  case(4):
                      cur->Pluswood(1);
                      bank->pluswood(-1);
                      break;
                  }
              }
          }
          qDebug()<<cur->Getstone();
          if(a%3==1)
              p1=cur;
          if(a%3==2)
              p2=cur;
          if(a%3==0)
              p3=cur;
          Turn();
    }
    void PTRADE(int a,int b,QVector<int> vc){
        Player*cur,*cur1;
        if(a%3==1)
            cur=p1;
        if(a%3==2)
            cur=p2;
        if(a%3==0)
            cur=p3;
        if(b==1)
            cur1=p1;
        if(b==2)
            cur1=p2;
        if(b==3)
            cur1=p3;
        if(cur->Getbrick()>vc[0]-1&&cur->Getsheep()>vc[1]-1&&cur->Getstone()>vc[2]-1&&cur->Getwheat()>vc[3]-1&&cur->Getwood()>vc[4]-1&&
                cur1->Getbrick()>vc[5]-1&&cur1->Getsheep()>vc[6]-1&&cur1->Getstone()>vc[7]-1&&cur1->Getwheat()>vc[8]-1&&cur1->Getwood()>vc[9]-1){
            //qDebug()<<"pk"<<vc[0]<<vc[1]<<vc[2]<<vc[3]<<vc[4]<<cur->Getcolor()<<cur1->Getcolor();
            cur->Plusbrick(vc[5]);
            cur->Plussheep(vc[6]);
            cur->Plusstone(vc[7]);
            cur->Pluswheat(vc[8]);
            cur->Pluswood(+vc[9]);
            cur->Plusbrick(-vc[0]);
            cur->Plussheep(-vc[1]);
            cur->Plusstone(-vc[2]);
            cur->Pluswheat(-vc[3]);
            cur->Pluswood(-vc[4]);
            cur1->Plusbrick(vc[0]);
            cur1->Plussheep(vc[1]);
            cur1->Plusstone(vc[2]);
            cur1->Pluswheat(vc[3]);
            cur1->Pluswood(vc[4]);
            cur1->Plusbrick(-vc[5]);
            cur1->Plussheep(-vc[6]);
            cur1->Plusstone(-vc[7]);
            cur1->Pluswheat(-vc[8]);
            cur1->Pluswood(-vc[9]);

        }
        if(a%3==1)
            p1=cur;
        if(a%3==2)
            p2=cur;
        if(a%3==0)
            p3=cur;
        if(b==1)
            p1=cur1;
        if(b==2)
           p2=cur1;
        if(b==3)
            p3=cur1;
        emit Turn();
    }
signals:
    void changed();
    void Turn();
};
#endif // MAP_H
