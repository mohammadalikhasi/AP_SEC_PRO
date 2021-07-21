#ifndef PLAYERTRADE_H
#define PLAYERTRADE_H

#include <QDialog>
#include <QVector>
namespace Ui {
class PlayerTrade;
}

class PlayerTrade : public QDialog
{
    Q_OBJECT
    int first;
    int second;

public:
    explicit PlayerTrade(QWidget *parent = nullptr);

    void Setfir(int a){
        first=a;
    }
    void Setsec(int a){
        second=a;
    }

    ~PlayerTrade();
public slots:
    void set();
    void SEND();
signals:
    void send(int a,int b,QVector<int> vc);


private:
    Ui::PlayerTrade *ui;
};

#endif // PLAYERTRADE_H
