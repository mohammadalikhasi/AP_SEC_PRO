#ifndef TRADE_H
#define TRADE_H

#include <QDialog>
#include <QPushButton>

namespace Ui {
class Trade;
}

class Trade : public QDialog
{
    Q_OBJECT
    QPushButton *ok;
    int turn;
    int num;

public:
    explicit Trade(QWidget *parent = nullptr);
    void Setturn(int a){
        turn=a;
    }
    void Setnum(int a){
        num=a;
    }
    ~Trade();
public slots:
    void CLOSE();


signals:
    void REC(int,int,int);
private:
    Ui::Trade *ui;
};

#endif // TRADE_H
