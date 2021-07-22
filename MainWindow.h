#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QLabel>
#include <QCheckBox>
#include <QWidget>
#include <QRadioButton>
#include <vector>
#include <QPushButton>
#include<QHBoxLayout>
#include "information.h"
#include "banktrade.h"
#include "trade.h"
#include "playertrade.h"
#include <QMessageBox>
#include "Dice.h"
#include "Building.h"
#include "Tile.h"
#include "Port.h"
#include "Bank.h"
#include "Player.h"
#include "Map.h"
QT_BEGIN_NAMESPACE

namespace Ui { class MainWindow; }
QT_END_NAMESPACE










class Getinfo:public QMainWindow{
    Q_OBJECT
    QPushButton* close;


};
class MainWindow : public QMainWindow
{
    Q_OBJECT

    Player *p,*p1,*p2,*cur;
     Road* r1,*r2,*r3,*r4,*r5,*r6,*r7,*r8,*r9,*r10,*r11,*r12,*r13,*r14,*r15,*r16,*r17,*r18,*r19,*r20,*r21,*r22,*r23,*r24,*r25,*r26,*r27,*r28,*r29,*r30,
           *r31,*r32,*r33,*r34,*r35,*r36,*r37,*r38,*r39,*r40,*r41,*r42,*r43,*r44,*r45,*r46,*r47,*r48,*r49,*r50,*r51,*r52,*r53,*r54,*r55,*r56,*r57,*r58,*r59,*r60,
            *r61,*r62,*r63,*r64,*r65,*r66,*r67,*r68,*r69,*r70,*r71,*r72;
    Home *h1,*h2,*h3,*h4,*h5,*h6,*h7,*h8,*h9,*h10,*h11,*h12,*h13,*h14,*h15,*h16,*h17,*h18,*h19,*h20,*h21,*h22,*h23,*h24,*h25,*h26,*h27,*h28,*h29,*h30,
    *h31,*h32,*h33,*h34,*h35,*h36,*h37,*h38,*h39,*h40,*h41,*h42,*h43,*h44,*h45,*h46,*h47,*h48,*h49,*h50,*h51,*h52,*h53,*h54;
    QVector<Road*>road;
    QVector<Home*>home;
    QVector<Road*> r;
    Tile* t1,*t2,*t3,*t4,*t5,*t6,*t7,*t8,*t9,*t10,*t11,*t12,*t13,*t14,*t15,*t16,*t17,*t18,*t19;
    Dice* d;
    int  turn=0;
    Map *m;
    information* info;
    Bank* bank;
    Port* po1,*po2,*po3,*po4,*po5;
    QVector<Tile*>mp;
    QVector <Home*> h;
    QVector<Port*>port;
    QHBoxLayout* inf;
    QPushButton* cls;
    BankTrade *bktrade;
    Trade * trade;
    PlayerTrade *ptrade;
    QMessageBox* mes;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void Roll();
    void Next();
    void SET();
    void BANKTRADE(int a,int b);
    void SETDATA();
    void WIN(int a);
signals:
    void Turn();
    void BUILDR(int a, int b);
    void BUILDH1(int a,int b, int c,int d,int f,int g);
    void BUILDH2(int a, int b,int c,int d, int f,int g,int h,int i);
    void PORTCLICKED(int,int);
    void Win(int);
private slots:
    void on_checkBox_2_clicked();


    void on_checkBox_3_clicked();

    void on_checkBox_4_clicked();

    void on_checkBox_5_clicked();

    void on_checkBox_6_clicked();
    void on_checkBox_clicked();

   // void on_radioButton_2_clicked();
    void on_checkBox_7_clicked();
    void on_checkBox_8_clicked();
    void on_checkBox_9_clicked();
    void on_checkBox_10_clicked();
    void on_checkBox_11_clicked();
    void on_checkBox_12_clicked();
    void on_checkBox_13_clicked();
    void on_checkBox_14_clicked();
    void on_checkBox_15_clicked();

    void on_checkBox_16_clicked();

    void on_checkBox_17_clicked();

    void on_checkBox_18_clicked();

    void on_checkBox_19_clicked();

    void on_checkBox_20_clicked();

    void on_checkBox_21_clicked();

    void on_checkBox_22_clicked();

    void on_checkBox_23_clicked();

    void on_checkBox_24_clicked();

    void on_checkBox_25_clicked();

    void on_checkBox_26_clicked();

    void on_checkBox_27_clicked();

    void on_checkBox_28_clicked();

    void on_checkBox_29_clicked();

    void on_checkBox_30_clicked();

    void on_checkBox_31_clicked();

    void on_checkBox_32_clicked();

    void on_checkBox_33_clicked();

    void on_checkBox_34_clicked();

    void on_checkBox_35_clicked();

    void on_checkBox_36_clicked();

    void on_checkBox_37_clicked();

    void on_checkBox_38_clicked();

    void on_checkBox_39_clicked();

    void on_checkBox_40_clicked();

    void on_checkBox_41_clicked();

    void on_checkBox_42_clicked();

    void on_checkBox_43_clicked();

    void on_checkBox_44_clicked();

    void on_checkBox_45_clicked();

    void on_checkBox_46_clicked();

    void on_checkBox_47_clicked();

    void on_checkBox_48_clicked();

    void on_checkBox_49_clicked();

    void on_checkBox_50_clicked();

    void on_checkBox_51_clicked();

    void on_checkBox_52_clicked();

    void on_checkBox_53_clicked();

    void on_checkBox_54_clicked();

    void on_checkBox_55_clicked();

    void on_checkBox_56_clicked();

    void on_checkBox_57_clicked();

    void on_checkBox_58_clicked();

    void on_checkBox_59_clicked();

    void on_checkBox_60_clicked();

    void on_checkBox_61_clicked();

    void on_checkBox_62_clicked();

    void on_checkBox_63_clicked();

    void on_checkBox_64_clicked();

    void on_checkBox_65_clicked();

    void on_checkBox_66_clicked();

    void on_checkBox_67_clicked();

    void on_checkBox_68_clicked();

    void on_checkBox_69_clicked();
    void on_checkBox_70_clicked();
    void on_checkBox_71_clicked();
    void on_checkBox_72_clicked();



    void on_radioButton_4_clicked();

    void on_radioButton_clicked();

    void on_radioButton_3_clicked();


    void on_radioButton_5_clicked();

    void on_pushButton_clicked();

   //  void on_roll_clicked();

     void on_radioButton_9_clicked();

     void on_radioButton_10_clicked();

     void on_radioButton_11_clicked();

     void on_radioButton_12_clicked();

     void on_radioButton_13_clicked();

     void on_radioButton_14_clicked();

     void on_radioButton_15_clicked();

     void on_radioButton_6_clicked();

     void on_radioButton_7_clicked();

     void on_radioButton_8_clicked();

     void on_radioButton_16_clicked();

     void on_radioButton_18_clicked();

     void on_radioButton_19_clicked();

     void on_radioButton_20_clicked();

     void on_radioButton_21_clicked();

     void on_radioButton_22_clicked();

     void on_radioButton_23_clicked();

     void on_radioButton_24_clicked();

     void on_radioButton_25_clicked();

     void on_radioButton_26_clicked();

     void on_radioButton_27_clicked();

     void on_radioButton_17_clicked();


     void on_radioButton_28_clicked();

     void on_radioButton_29_clicked();

     void on_radioButton_30_clicked();

     void on_radioButton_31_clicked();

     void on_radioButton_32_clicked();

     void on_radioButton_33_clicked();

     void on_radioButton_34_clicked();

     void on_radioButton_35_clicked();

     void on_radioButton_36_clicked();

     void on_radioButton_37_clicked();

     void on_radioButton_38_clicked();

     void on_radioButton_39_clicked();

     void on_radioButton_40_clicked();

     void on_radioButton_41_clicked();

     void on_radioButton_42_clicked();

     void on_radioButton_43_clicked();

     void on_radioButton_44_clicked();

     void on_radioButton_45_clicked();

     void on_radioButton_46_clicked();

     void on_radioButton_47_clicked();

     void on_radioButton_50_clicked();

     void on_radioButton_52_clicked();

     void on_radioButton_48_clicked();

     void on_radioButton_49_clicked();

     void on_radioButton_51_clicked();

     void on_radioButton_53_clicked();

     void on_radioButton_54_clicked();

     void on_TRADE1_clicked();

     void on_TRADE2_clicked();

     void on_TRADE3_clicked();

     void on_TRADE4_clicked();

     void on_TRADE5_clicked();

     void on_ptrade1_clicked();

     void on_ptrade2_clicked();

     void on_ptrade3_clicked();

     void on_radioButton_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
