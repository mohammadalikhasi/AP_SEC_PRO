#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <QDebug>
#include <QVector>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    mes= new QMessageBox();
    trade=new Trade();
    ptrade=new PlayerTrade();
    this->hide();
    info= new information();
    info->show();
    bank=new Bank();
    ui->setupUi(this);

    bktrade=new BankTrade();
    p=new Player();
    p1=new Player();
    p2=new Player();
    cur=new Player();
//ساخت جاده ها
    r1=new Road(ui->label,ui->checkBox);
    r2=new Road(ui->label_2,ui->checkBox_2);
    r3=new Road(ui->label_3,ui->checkBox_3);
    r4=new Road(ui->label_4,ui->checkBox_4);
    r5=new Road(ui->label_5,ui->checkBox_5);
    r6=new Road(ui->label_6,ui->checkBox_6);
    r7=new Road(ui->label_7,ui->checkBox_7);
    r8=new Road(ui->label_8,ui->checkBox_8);
    r9=new Road(ui->label_9,ui->checkBox_9);
    r10=new Road(ui->label_10,ui->checkBox_10);
    r11=new Road(ui->label_11,ui->checkBox_11);
    r12=new Road(ui->label_12,ui->checkBox_12);
    r13=new Road(ui->label_13,ui->checkBox_13);
    r14=new Road(ui->label_14,ui->checkBox_14);
    r15=new Road(ui->label_15,ui->checkBox_15);
    r16=new Road(ui->label_16,ui->checkBox_16);
    r17=new Road(ui->label_17,ui->checkBox_17);
    r18=new Road(ui->label_18,ui->checkBox_18);
    r19=new Road(ui->label_19,ui->checkBox_19);
    r20=new Road(ui->label_20,ui->checkBox_20);
    r21=new Road(ui->label_21,ui->checkBox_21);
    r22=new Road(ui->label_22,ui->checkBox_22);
    r23=new Road(ui->label_23,ui->checkBox_23);
    r24=new Road(ui->label_24,ui->checkBox_24);
    r25=new Road(ui->label_25,ui->checkBox_25);
    r26=new Road(ui->label_26,ui->checkBox_26);
    r27=new Road(ui->label_27,ui->checkBox_27);
    r28=new Road(ui->label_28,ui->checkBox_28);
    r29=new Road(ui->label_29,ui->checkBox_29);
    r30=new Road(ui->label_30,ui->checkBox_30);
    r31=new Road(ui->label_31,ui->checkBox_31);
    r32=new Road(ui->label_32,ui->checkBox_32);
    r33=new Road(ui->label_33,ui->checkBox_33);
    r34=new Road(ui->label_34,ui->checkBox_34);
    r35=new Road(ui->label_35,ui->checkBox_35);
    r36=new Road(ui->label_36,ui->checkBox_36);
    r37=new Road(ui->label_37,ui->checkBox_37);
    r38=new Road(ui->label_38,ui->checkBox_38);
    r39=new Road(ui->label_39,ui->checkBox_39);
    r40=new Road(ui->label_40,ui->checkBox_40);
    r41=new Road(ui->label_41,ui->checkBox_41);
    r42=new Road(ui->label_42,ui->checkBox_42);
    r43=new Road(ui->label_43,ui->checkBox_43);
    r44=new Road(ui->label_44,ui->checkBox_44);
    r45=new Road(ui->label_45,ui->checkBox_45);
    r46=new Road(ui->label_46,ui->checkBox_46);
    r47=new Road(ui->label_47,ui->checkBox_47);
    r48=new Road(ui->label_48,ui->checkBox_48);
    r49=new Road(ui->label_49,ui->checkBox_49);
    r50=new Road(ui->label_50,ui->checkBox_50);
    r51=new Road(ui->label_51,ui->checkBox_51);
    r52=new Road(ui->label_52,ui->checkBox_52);
    r53=new Road(ui->label_53,ui->checkBox_53);
    r54=new Road(ui->label_54,ui->checkBox_54);
    r55=new Road(ui->label_55,ui->checkBox_55);
    r56=new Road(ui->label_56,ui->checkBox_56);
    r57=new Road(ui->label_57,ui->checkBox_57);
    r58=new Road(ui->label_58,ui->checkBox_58);
    r59=new Road(ui->label_59,ui->checkBox_59);
    r60=new Road(ui->label_60,ui->checkBox_60);
    r61=new Road(ui->label_61,ui->checkBox_61);
    r62=new Road(ui->label_62,ui->checkBox_62);
    r63=new Road(ui->label_63,ui->checkBox_63);
    r64=new Road(ui->label_64,ui->checkBox_64);
    r65=new Road(ui->label_65,ui->checkBox_65);
    r66=new Road(ui->label_66,ui->checkBox_66);
    r67=new Road(ui->label_67,ui->checkBox_67);
    r68=new Road(ui->label_68,ui->checkBox_68);
    r69=new Road(ui->label_69,ui->checkBox_69);
    r70=new Road(ui->label_70,ui->checkBox_70);
    r71=new Road(ui->label_71,ui->checkBox_71);
    r72=new Road(ui->label_72,ui->checkBox_72);

// ساخت خانه ها

    h1=new Home(ui->label_h1,ui->radioButton);
    h2=new Home(ui->label_h2 ,ui->radioButton_2);
    h3=new Home(ui->label_h3 ,ui->radioButton_3);
    h4=new Home(ui->label_h4 ,ui->radioButton_4);
    h5=new Home(ui->label_h5 ,ui->radioButton_5);
    h6=new Home(ui->label_h6 ,ui->radioButton_6);
    h7=new Home(ui->label_h7 ,ui->radioButton_7);
    h8=new Home(ui->label_h8 ,ui->radioButton_8);
    h9=new Home(ui->label_h9 ,ui->radioButton_9);
    h10=new Home(ui->label_h10 ,ui->radioButton_10);
    h11=new Home(ui->label_h11,ui->radioButton_11);
    h12=new Home(ui->label_h12 ,ui->radioButton_12);
    h13=new Home(ui->label_h13 ,ui->radioButton_13);
    h14=new Home(ui->label_h14 ,ui->radioButton_14);
    h15=new Home(ui->label_h15 ,ui->radioButton_15);
    h16=new Home(ui->label_h16 ,ui->radioButton_16);
    h17=new Home(ui->label_h17 ,ui->radioButton_17);
    h18=new Home(ui->label_h18 ,ui->radioButton_18);
    h19=new Home(ui->label_h19 ,ui->radioButton_19);
    h20=new Home(ui->label_h20 ,ui->radioButton_20);
    h21=new Home(ui->label_h21 ,ui->radioButton_21);
    h22=new Home(ui->label_h22 ,ui->radioButton_22);
    h23=new Home(ui->label_h23 ,ui->radioButton_23);
    h24=new Home(ui->label_h24 ,ui->radioButton_24);
    h25=new Home(ui->label_h25 ,ui->radioButton_25);
    h26=new Home(ui->label_h26 ,ui->radioButton_26);
    h27=new Home(ui->label_h27 ,ui->radioButton_27);
    h28=new Home(ui->label_h28 ,ui->radioButton_28);
    h29=new Home(ui->label_h29 ,ui->radioButton_29);
    h30=new Home(ui->label_h30 ,ui->radioButton_30);
    h31=new Home(ui->label_h31,ui->radioButton_31);
    h32=new Home(ui->label_h32 ,ui->radioButton_32);
    h33=new Home(ui->label_h33 ,ui->radioButton_33);
    h34=new Home(ui->label_h34 ,ui->radioButton_34);
    h35=new Home(ui->label_h35 ,ui->radioButton_35);
    h36=new Home(ui->label_h36 ,ui->radioButton_36);
    h37=new Home(ui->label_h37 ,ui->radioButton_37);
    h38=new Home(ui->label_h38 ,ui->radioButton_38);
    h39=new Home(ui->label_h39 ,ui->radioButton_39);
    h40=new Home(ui->label_h40 ,ui->radioButton_40);
    h41=new Home(ui->label_h41,ui->radioButton_41);
    h42=new Home(ui->label_h42 ,ui->radioButton_42);
    h43=new Home(ui->label_h43 ,ui->radioButton_43);
    h44=new Home(ui->label_h44 ,ui->radioButton_44);
    h45=new Home(ui->label_h45 ,ui->radioButton_45);
    h46=new Home(ui->label_h46 ,ui->radioButton_46);
    h47=new Home(ui->label_h47 ,ui->radioButton_47);
    h48=new Home(ui->label_h48 ,ui->radioButton_48);
    h49=new Home(ui->label_h49 ,ui->radioButton_49);
    h50=new Home(ui->label_h50 ,ui->radioButton_50);
    h51=new Home(ui->label_h51,ui->radioButton_51);
    h52=new Home(ui->label_h52 ,ui->radioButton_52);
    h53=new Home(ui->label_h53 ,ui->radioButton_53);
    h54=new Home(ui->label_h54 ,ui->radioButton_54);

//ساخت کاشی ها
    road.push_back(r1),road.push_back(r2),road.push_back(r7),road.push_back(r8),road.push_back(r13),road.push_back(r12);
    home.push_back(h1),home.push_back(h2),home.push_back(h3),home.push_back(h10),home.push_back(h11),home.push_back(h9);
    t1=new Tile(road,home,10,5);
    road[0]=r3,road[1]=r4,road[2]=r8,road[3]=r9,road[4]=r14,road[5]=r15;
    home[0]=h3,home[1]=h4,home[2]=h5,home[3]=h11,home[4]=h12,home[5]=h13;
    t2=new Tile(road,home,6,2);
    road[0]=r5,road[1]=r6,road[2]=r9,road[3]=r10,road[4]=r16,road[5]=r17;
    home[0]=h6,home[1]=h7,home[2]=h5,home[3]=h13,home[4]=h14,home[5]=h15;
    t3=new Tile(road,home,10,3);
    road[0]=r11,road[1]=r12,road[2]=r19,road[3]=r20,road[4]=r26,road[5]=r25;
    home[0]=h8,home[1]=h9,home[2]=h10,home[3]=h18,home[4]=h19,home[5]=h20;
    t4=new Tile(road,home,8,4);
    road[0]=r13,road[1]=r14,road[2]=r20,road[3]=r21,road[4]=r28,road[5]=r27;
    home[0]=h10,home[1]=h11,home[2]=h12,home[3]=h20,home[4]=h21,home[5]=h22;
    t5=new Tile(road,home,6,2);
    road[0]=r15,road[1]=r16,road[2]=r21,road[3]=r22,road[4]=r29,road[5]=r30;
    home[0]=h12,home[1]=h13,home[2]=h14,home[3]=h23,home[4]=h24,home[5]=h22;
    t6=new Tile(road,home,5,5);
    road[0]=r17,road[1]=r18,road[2]=r22,road[3]=r23,road[4]=r29,road[5]=r30;
    home[0]=h15,home[1]=h14,home[2]=h16,home[3]=h26,home[4]=h24,home[5]=h25;
    t7=new Tile(road,home,11,1);
    road[0]=r24,road[1]=r25,road[2]=r34,road[3]=r35,road[4]=r40,road[5]=r41;
    home[0]=h17,home[1]=h18,home[2]=h19,home[3]=h28,home[4]=h29,home[5]=h30;
    t8=new Tile(road,home,3,5);
    road[0]=r26,road[1]=r27,road[2]=r35,road[3]=r36,road[4]=r42,road[5]=r43;
    home[0]=h20,home[1]=h21,home[2]=h19,home[3]=h31,home[4]=h32,home[5]=h30;
    t9=new Tile(road,home,9,1);
    road[0]=r28,road[1]=r29,road[2]=r36,road[3]=r37,road[4]=r44,road[5]=r45;
    home[0]=h21,home[1]=h22,home[2]=h23,home[3]=h32,home[4]=h33,home[5]=h34;
    t10=new Tile(road,home,8,2);
    road[0]=r30,road[1]=r31,road[2]=r37,road[3]=r38,road[4]=r46,road[5]=r47;
    home[0]=h23,home[1]=h24,home[2]=h25,home[3]=h34,home[4]=h35,home[5]=h36;
    t11=new Tile(road,home,12,1);
    road[0]=r32,road[1]=r33,road[2]=r38,road[3]=r39,road[4]=r48,road[5]=r49;
    home[0]=h25,home[1]=h26,home[2]=h27,home[3]=h36,home[4]=h37,home[5]=h38;
    t12=new Tile(road,home,3,4);
    road[0]=r41,road[1]=r42,road[2]=r50,road[3]=r51,road[4]=r55,road[5]=r56;
    home[0]=h29,home[1]=h30,home[2]=h31,home[3]=h39,home[4]=h40,home[5]=h41;
    t13=new Tile(road,home,9,5);
    road[0]=r44,road[1]=r43,road[2]=r51,road[3]=r52,road[4]=r57,road[5]=r58;
    home[0]=h43,home[1]=h42,home[2]=h41,home[3]=h33,home[4]=h32,home[5]=h31;
    t14=new Tile(road,home,2,2);
    road[0]=r45,road[1]=r46,road[2]=r52,road[3]=r53,road[4]=r59,road[5]=r60;
    home[0]=h33,home[1]=h34,home[2]=h35,home[3]=h43,home[4]=h44,home[5]=h45;
    t15=new Tile(road,home,5,4);
    road[0]=r47,road[1]=r48,road[2]=r53,road[3]=r54,road[4]=r62,road[5]=r61;
    home[0]=h35,home[1]=h36,home[2]=h37,home[3]=h45,home[4]=h46,home[5]=h47;
    t16=new Tile(road,home,11,3);
    road[0]=r56,road[1]=r57,road[2]=r63,road[3]=r64,road[4]=r67,road[5]=r68;
    home[0]=h40,home[1]=h41,home[2]=h42,home[3]=h48,home[4]=h49,home[5]=h50;
    t17=new Tile(road,home,4,4);
    road[0]=r58,road[1]=r59,road[2]=r64,road[3]=r65,road[4]=r69,road[5]=r70;
    home[0]=h42,home[1]=h43,home[2]=h44,home[3]=h50,home[4]=h51,home[5]=h52;
    t18=new Tile(road,home,4,3);
    road[0]=r60,road[1]=r61,road[2]=r65,road[3]=r66,road[4]=r71,road[5]=r72;
    home[0]=h44,home[1]=h45,home[2]=h46,home[3]=h52,home[4]=h53,home[5]=h54;
    t19=new Tile(road,home,7,0);

    //نامریی کردن لیبل ها
    ui->label->setVisible(false);
    ui->label_2->setVisible(false);
    ui->label_3->setVisible(false);
    ui->label_4->setVisible(false);
    ui->label_5->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_h1->setVisible(false);
    ui->label_h2->setVisible(false);
    ui->label_h3->setVisible(false);
    ui->label_h4->setVisible(false);
    ui->label_h5->setVisible(false);
    ui->label_h6->setVisible(false);
    ui->label_h7->setVisible(false);
    ui->label_h8->setVisible(false);
    ui->label_h9->setVisible(false);
    ui->label_h10->setVisible(false);
    ui->label_h11->setVisible(false);
    ui->label_h12->setVisible(false);
    ui->label_h13->setVisible(false);
    ui->label_h14->setVisible(false);
    ui->label_h15->setVisible(false);
    ui->label_h16->setVisible(false);
    ui->label_h17->setVisible(false);
    ui->label_h18->setVisible(false);
    ui->label_h19->setVisible(false);
    ui->label_h20->setVisible(false);
    ui->label_h21->setVisible(false);
    ui->label_h22->setVisible(false);
    ui->label_h23->setVisible(false);
    ui->label_h24->setVisible(false);
    ui->label_h25->setVisible(false);
    ui->label_h26->setVisible(false);
    ui->label_h27->setVisible(false);
    ui->label_7->setVisible(false);
    ui->label_8->setVisible(false);
    ui->label_9->setVisible(false);
    ui->label_10->setVisible(false);
    ui->label_11->setVisible(false);
    ui->label_12->setVisible(false);
    ui->label_13->setVisible(false);
    ui->label_14->setVisible(false);
    ui->label_15->setVisible(false);
    ui->label_16->setVisible(false);
    ui->label_17->setVisible(false);
    ui->label_18->setVisible(false);
    ui->label_19->setVisible(false);
    ui->label_20->setVisible(false);
    ui->label_21->setVisible(false);
    ui->label_22->setVisible(false);
    ui->label_23->setVisible(false);
    ui->label_24->setVisible(false);
    ui->label_25->setVisible(false);
    ui->label_26->setVisible(false);
    ui->label_27->setVisible(false);
    ui->label_28->setVisible(false);
    ui->label_29->setVisible(false);
    ui->label_30->setVisible(false);
    ui->label_31->setVisible(false);
    ui->label_32->setVisible(false);
    ui->label_33->setVisible(false);
    ui->label_34->setVisible(false);
    ui->label_35->setVisible(false);
    ui->label_36->setVisible(false);
    ui->label_37->setVisible(false);
    ui->label_38->setVisible(false);
    ui->label_39->setVisible(false);
    ui->label_40->setVisible(false);
    ui->label_41->setVisible(false);
    ui->label_42->setVisible(false);
    ui->label_43->setVisible(false);
    ui->label_44->setVisible(false);
    ui->label_45->setVisible(false);
    ui->label_46->setVisible(false);
    ui->label_47->setVisible(false);
    ui->label_48->setVisible(false);
    ui->label_49->setVisible(false);
    ui->label_50->setVisible(false);
    ui->label_51->setVisible(false);
    ui->label_52->setVisible(false);
    ui->label_53->setVisible(false);
    ui->label_54->setVisible(false);
    ui->label_55->setVisible(false);
    ui->label_56->setVisible(false);
    ui->label_57->setVisible(false);
    ui->label_58->setVisible(false);
    ui->label_59->setVisible(false);
    ui->label_60->setVisible(false);
    ui->label_61->setVisible(false);
    ui->label_62->setVisible(false);
    ui->label_63->setVisible(false);
    ui->label_64->setVisible(false);
    ui->label_65->setVisible(false);
    ui->label_66->setVisible(false);
    ui->label_67->setVisible(false);
    ui->label_68->setVisible(false);
    ui->label_69->setVisible(false);
    ui->label_70->setVisible(false);
    ui->label_71->setVisible(false);
    ui->label_72->setVisible(false);
    ui->label_h28->setVisible(false);
    ui->label_h29->setVisible(false);
    ui->label_h30->setVisible(false);
    ui->label_h31->setVisible(false);
    ui->label_h32->setVisible(false);
    ui->label_h33->setVisible(false);
    ui->label_h34->setVisible(false);
    ui->label_h35->setVisible(false);
    ui->label_h36->setVisible(false);
    ui->label_h37->setVisible(false);
    ui->label_h38->setVisible(false);
    ui->label_h39->setVisible(false);
    ui->label_h40->setVisible(false);
    ui->label_h41->setVisible(false);
    ui->label_h42->setVisible(false);
    ui->label_h43->setVisible(false);
    ui->label_h44->setVisible(false);
    ui->label_h45->setVisible(false);
    ui->label_h46->setVisible(false);
    ui->label_h47->setVisible(false);
    ui->label_h48->setVisible(false);
    ui->label_h49->setVisible(false);
    ui->label_h50->setVisible(false);
    ui->label_h51->setVisible(false);
    ui->label_h52->setVisible(false);
    ui->label_h53->setVisible(false);
    ui->label_h54->setVisible(false);
    //ترتیب بندی جاده ها
    r.push_back(r1);r.push_back(r2);r.push_back(r3);r.push_back(r4);r.push_back(r5);
    r.push_back(r6);r.push_back(r7);r.push_back(r8);r.push_back(r9);r.push_back(r10);
    r.push_back(r11);r.push_back(r12);r.push_back(r13);r.push_back(r14);r.push_back(r15);
    r.push_back(r16);r.push_back(r17);r.push_back(r18);r.push_back(r19);r.push_back(r20);
    r.push_back(r21);r.push_back(r22);r.push_back(r23);r.push_back(r24);r.push_back(r25);
    r.push_back(r26);r.push_back(r27);r.push_back(r28);r.push_back(r29);r.push_back(r30);
    r.push_back(r31);r.push_back(r32);r.push_back(r33);r.push_back(r34);r.push_back(r35);
    r.push_back(r36);r.push_back(r37);r.push_back(r38);r.push_back(r39);r.push_back(r40);
    r.push_back(r41);r.push_back(r42);r.push_back(r43);r.push_back(r44);r.push_back(r45);
    r.push_back(r46);r.push_back(r47);r.push_back(r48);r.push_back(r49);r.push_back(r50);
    r.push_back(r51);r.push_back(r52);r.push_back(r53);r.push_back(r54);r.push_back(r55);
    r.push_back(r56);r.push_back(r57);r.push_back(r58);r.push_back(r59);r.push_back(r60);
    r.push_back(r61);r.push_back(r62);r.push_back(r63);r.push_back(r64);r.push_back(r65);
    r.push_back(r66);r.push_back(r67);r.push_back(r68);r.push_back(r69);r.push_back(r70);
    r.push_back(r71);r.push_back(r72);
    //مرتب سازی خانه ها
    h.push_back(h1);h.push_back(h2);  h.push_back(h3);h.push_back(h4);h.push_back(h5);
    h.push_back(h6);h.push_back(h7);  h.push_back(h8);h.push_back(h9);h.push_back(h10);
    h.push_back(h11);h.push_back(h12);h.push_back(h13);h.push_back(h14);h.push_back(h15);
    h.push_back(h16);h.push_back(h17);h.push_back(h18);h.push_back(h19);h.push_back(h20);
    h.push_back(h21);h.push_back(h22);h.push_back(h23);h.push_back(h24);h.push_back(h25);
    h.push_back(h26);h.push_back(h27);h.push_back(h28);h.push_back(h29);h.push_back(h30);
    h.push_back(h31);h.push_back(h32);h.push_back(h33);h.push_back(h34);h.push_back(h35);
    h.push_back(h36);h.push_back(h37);h.push_back(h38);h.push_back(h39);h.push_back(h40);
    h.push_back(h41);h.push_back(h42);h.push_back(h43);h.push_back(h44);h.push_back(h45);
    h.push_back(h46);h.push_back(h47);h.push_back(h48);h.push_back(h49);h.push_back(h50);
    h.push_back(h51);h.push_back(h52);h.push_back(h53);h.push_back(h54);h.push_back(new Home(ui->trash_2,ui->trash));
    //مرتب سازی کاشی ها
    mp.push_back(t1),mp.push_back(t2),mp.push_back(t3),mp.push_back(t4),mp.push_back(t5),mp.push_back(t6),mp.push_back(t7);
    mp.push_back(t8),mp.push_back(t9),mp.push_back(t10),mp.push_back(t11),mp.push_back(t12),mp.push_back(t13),mp.push_back(t14);
    mp.push_back(t15),mp.push_back(t16),mp.push_back(t17),mp.push_back(t18),mp.push_back(t19);

    //ساخت بندر ها و ترتیب بندی آنها
    po1=new Port(h27,h28,0,2);
    po2=new Port(h46,h47,1,2);
    po3=new Port(h8,h18,2,2);
    po4=new Port(h29,h39,3,2);
    po5=new Port(h15,h16,4,2);
    port.push_back(po1);port.push_back(po2);port.push_back(po3);port.push_back(po4);port.push_back(po5);

    p->Setcolor("red");
    p1->Setcolor("blue");
    p2->Setcolor("green");
    qDebug()<<bank->getbrick();
    m=new Map(mp,p,p1,p2,r,h,port,bank);
     //پایان ساخت نقشه

    //ساخت تاس
    ui->dice1->setGeometry(10,20,81,90);
    ui->dice2->setGeometry(10,20,81,90);
    ui->dice3->setGeometry(10,20,81,90);
    ui->dice4->setGeometry(10,20,81,90);
    ui->dice5->setGeometry(10,20,81,90);
    ui->dice6->setGeometry(10,20,81,90);
    ui->dice11->setGeometry(100,20,81,90);
    ui->dice12->setGeometry(100,20,81,90);
    ui->dice13->setGeometry(100,20,81,90);
    ui->dice14->setGeometry(100,20,81,90);
    ui->dice15->setGeometry(100,20,81,90);
    ui->dice16->setGeometry(100,20,81,90);
    QVector<QLabel*>dice1;
    QVector<QLabel*>dice2;
    dice1.push_back(ui->dice1);
    dice1.push_back(ui->dice2);
    dice1.push_back(ui->dice3);
    dice1.push_back(ui->dice4);
    dice1.push_back(ui->dice5);
    dice1.push_back(ui->dice6);
    dice2.push_back(ui->dice11);
    dice2.push_back(ui->dice12);
    dice2.push_back(ui->dice13);
    dice2.push_back(ui->dice14);
    dice2.push_back(ui->dice15);
    dice2.push_back(ui->dice16);
    d=new Dice(ui->roll,dice1,dice2);
    turn=1;
    cur=p;
    ui->next->setDisabled(true);
    ui->roll->setDisabled(true);


//کانکت ها
    connect(ui->roll,SIGNAL(clicked()),d,SLOT(Roll()));
    connect(d,SIGNAL(resultvalue(int)),m,SLOT(divide(int)));
    connect(m,SIGNAL(changed()),this,SLOT(Roll()));
    connect(ui->next,SIGNAL(clicked()),this,SLOT(Next()));
    connect(info,SIGNAL(infoadded()),this,SLOT(SET()));
    connect(bktrade,SIGNAL(selected(int,int)),this,SLOT(BANKTRADE(int,int)));
    connect(this,SIGNAL(Turn()),this,SLOT(SETDATA()));
    connect(m,SIGNAL(Turn()),this,SLOT(SETDATA()));
    connect(this,SIGNAL(BUILDR(int,int)),m,SLOT(BuildRoad(int,int)));
    connect(this,SIGNAL(BUILDH1(int,int,int,int,int,int)),m,SLOT(Buildhome1(int,int,int,int,int,int)));
    connect(this,SIGNAL(BUILDH2(int,int,int,int,int,int,int,int)),m,SLOT(Buildhome2(int,int,int,int,int,int,int,int)));
    connect(trade,SIGNAL(REC(int,int,int)),m,SLOT(PORT(int,int,int)));
    connect(ptrade,SIGNAL(send(int,int,QVector<int>)),m,SLOT(PTRADE(int,int,QVector<int>)));
    connect(this,SIGNAL(Win(int)),this,SLOT(WIN(int)));

}
//Building Roads
void MainWindow::on_checkBox_2_clicked()
{
    emit BUILDR(turn,1);
}
void MainWindow::on_checkBox_3_clicked()
{

    emit BUILDR(turn,2);
}
void MainWindow::on_checkBox_4_clicked()
{
    emit BUILDR(turn,3);
}
void MainWindow::on_checkBox_5_clicked()
{
    emit BUILDR(turn,4);
}
void MainWindow::on_checkBox_6_clicked()
{
    emit BUILDR(turn,5);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_checkBox_clicked()
{
    emit BUILDR(turn,0);
}
void MainWindow::on_checkBox_7_clicked()
{
    emit BUILDR(turn,6);
}
void MainWindow::on_checkBox_8_clicked()
{
    emit BUILDR(turn,7);
}
void MainWindow::on_checkBox_9_clicked()
{
    emit BUILDR(turn,8);
}
void MainWindow::on_checkBox_10_clicked()
{
    emit BUILDR(turn,9);
}
void MainWindow::on_checkBox_11_clicked()
{
    emit BUILDR(turn,10);
}
void MainWindow::on_checkBox_12_clicked()
{
    emit BUILDR(turn,11);
}
void MainWindow::on_checkBox_13_clicked()
{
    emit BUILDR(turn,12);
}
void MainWindow::on_checkBox_14_clicked()
{
    emit BUILDR(turn,13);
}
void MainWindow::on_checkBox_15_clicked()
{
    emit BUILDR(turn,14);
}
void MainWindow::on_checkBox_16_clicked()
{
    emit BUILDR(turn,15);
}
void MainWindow::on_checkBox_17_clicked()
{
    emit BUILDR(turn,16);
}
void MainWindow::on_checkBox_18_clicked()
{
    emit BUILDR(turn,17);
}
void MainWindow::on_checkBox_19_clicked()
{
    emit BUILDR(turn,18);
}
void MainWindow::on_checkBox_20_clicked()
{
    emit BUILDR(turn,19);
}
void MainWindow::on_checkBox_21_clicked()
{
    emit BUILDR(turn,20);
}
void MainWindow::on_checkBox_22_clicked()
{
    emit BUILDR(turn,21);
}
void MainWindow::on_checkBox_23_clicked()
{
    emit BUILDR(turn,22);
}
void MainWindow::on_checkBox_24_clicked()
{
   emit BUILDR(turn,23);
}
void MainWindow::on_checkBox_25_clicked()
{
    emit BUILDR(turn,24);
}
void MainWindow::on_checkBox_26_clicked()
{
    emit BUILDR(turn,25);
}
void MainWindow::on_checkBox_27_clicked()
{
    emit BUILDR(turn,26);
}
void MainWindow::on_checkBox_28_clicked()
{
    emit BUILDR(turn,27);
}
void MainWindow::on_checkBox_29_clicked()
{
    emit BUILDR(turn,28);
}
void MainWindow::on_checkBox_30_clicked()
{
    emit BUILDR(turn,29);
}
void MainWindow::on_checkBox_31_clicked()
{
    emit BUILDR(turn,30);
}
void MainWindow::on_checkBox_32_clicked()
{
    emit BUILDR(turn,31);
}
void MainWindow::on_checkBox_33_clicked()
{
    emit BUILDR(turn,32);
}
void MainWindow::on_checkBox_34_clicked()
{
    emit BUILDR(turn,33);
}
void MainWindow::on_checkBox_35_clicked()
{
    emit BUILDR(turn,34);
}
void MainWindow::on_checkBox_36_clicked()
{
    emit BUILDR(turn,35);
}
void MainWindow::on_checkBox_37_clicked()
{
    emit BUILDR(turn,36);
}
void MainWindow::on_checkBox_38_clicked()
{
    emit BUILDR(turn,37);
}
void MainWindow::on_checkBox_39_clicked()
{
    emit BUILDR(turn,38);
}
void MainWindow::on_checkBox_40_clicked()
{
    emit BUILDR(turn,39);
}
void MainWindow::on_checkBox_41_clicked()
{
   emit BUILDR(turn,40);
}
void MainWindow::on_checkBox_42_clicked()
{
    emit BUILDR(turn,41);
}
void MainWindow::on_checkBox_43_clicked()
{
     emit BUILDR(turn,42);
}
void MainWindow::on_checkBox_44_clicked()
{
    emit BUILDR(turn,43);
}
void MainWindow::on_checkBox_45_clicked()
{
    emit BUILDR(turn,44);
}
void MainWindow::on_checkBox_46_clicked()
{
    emit BUILDR(turn,45);
}
void MainWindow::on_checkBox_47_clicked()
{
    emit BUILDR(turn,46);
}
void MainWindow::on_checkBox_48_clicked()
{
    emit BUILDR(turn,47);
}
void MainWindow::on_checkBox_49_clicked()
{
    emit BUILDR(turn,48);
}
void MainWindow::on_checkBox_50_clicked()
{
    emit BUILDR(turn,49);
}
void MainWindow::on_checkBox_51_clicked()
{
    emit BUILDR(turn,50);
}
void MainWindow::on_checkBox_52_clicked()
{
    emit BUILDR(turn,51);
}
void MainWindow::on_checkBox_53_clicked()
{
    emit BUILDR(turn,52);
}
void MainWindow::on_checkBox_54_clicked()
{
    emit BUILDR(turn,53);
}
void MainWindow::on_checkBox_55_clicked()
{
    emit BUILDR(turn,54);
}
void MainWindow::on_checkBox_56_clicked()
{
    emit BUILDR(turn,55);
}
void MainWindow::on_checkBox_57_clicked()
{
    emit BUILDR(turn,56);
}
void MainWindow::on_checkBox_58_clicked()
{
    emit BUILDR(turn,57);
}
void MainWindow::on_checkBox_59_clicked()
{
    emit BUILDR(turn,58);
}
void MainWindow::on_checkBox_60_clicked()
{
    emit BUILDR(turn,59);
}
void MainWindow::on_checkBox_61_clicked()
{
    emit BUILDR(turn,60);
}
void MainWindow::on_checkBox_62_clicked(){
   emit BUILDR(turn,61);
}
void MainWindow::on_checkBox_63_clicked()
{
    emit BUILDR(turn,62);
}
void MainWindow::on_checkBox_64_clicked()
{
    emit BUILDR(turn,63);
}
void MainWindow::on_checkBox_65_clicked()
{
    emit BUILDR(turn,64);
}
void MainWindow::on_checkBox_66_clicked()
{
    emit BUILDR(turn,65);
}
void MainWindow::on_checkBox_67_clicked()
{
    emit BUILDR(turn,66);
}
void MainWindow::on_checkBox_68_clicked()
{
    emit BUILDR(turn,67);
}
void MainWindow::on_checkBox_69_clicked()
{
   emit BUILDR(turn,68);
}
void MainWindow::on_checkBox_70_clicked()
{
    emit BUILDR(turn,69);
}
void MainWindow::on_checkBox_71_clicked()
{
    emit BUILDR(turn,70);
}
void MainWindow::on_checkBox_72_clicked()
{
    emit BUILDR(turn,71);
}
//other slots
void MainWindow::Roll(){


    ui->ptrade1->setEnabled(true);
    ui->ptrade2->setEnabled(true);
    ui->ptrade3->setEnabled(true);

    if(turn==1||turn==4){
        p->Plusbrick(2);
        p->Pluswood(2);
        p->Pluswheat(1);
        p->Plussheep(1);
        p->Plusstone(0);
        bank->plusbrick(-2);
        bank->plussheep(-1);
        bank->pluswheat(-1);
        bank->pluswood(-2);

    }
    if(turn==2||turn==5){
        p1->Plusbrick(+2);
        p1->Pluswood(+2);
        p1->Pluswheat(+1);
        p1->Plussheep(+1);
        bank->plusbrick(-2);
        bank->plussheep(-1);
        bank->pluswheat(-1);
        bank->pluswood(-2);
    }
    if(turn==3||turn==6){
        p2->Plusbrick(+2);
        p2->Pluswood(+2);
        p2->Pluswheat(+1);
        p2->Plussheep(+1);
        bank->plusbrick(-2);
        bank->plussheep(-1);
        bank->pluswheat(-1);
        bank->pluswood(-2);
    }
    if(turn%3==1){
        p=m->Getp1();
        p1=m->Getp2();
        p2=m->Getp3();
        cur=p;
        ui->ptrade1->setDisabled(true);
    }
    if(turn%3==2){
        p=m->Getp1();
        p1=m->Getp2();
        p2=m->Getp3();
        cur=p1;
        ui->ptrade2->setDisabled(true);
    }
    if(turn%3==0){
        p=m->Getp1();
        p1=m->Getp2();
        p2=m->Getp3();
        cur=p2;
        ui->ptrade3->setDisabled(true);
    }
    ui->next->setEnabled(true);
    ui->currentID->setText(cur->Getname());
    emit Turn();

}
void MainWindow::Next(){
    ui->roll->setEnabled(true);
    ui->next->setDisabled(true);
    if(turn%3==1){

        p=cur;
    }
    if(turn%3==2){
        p1=cur;
    }
    if(turn%3==0){
       p2=cur;
    }
    if(turn==3){
        turn=6;
        return;
    }
    if(turn==6){
        turn= 5;
        return;
    }
    if(turn==5){
        turn=4;
        return;
    }
    if(turn==4){
        turn=7;
        return;
    }
    turn++;
    m=new Map(mp,p,p1,p2,r,h,port,bank);
    if(p->calpoint()>5)
        emit Win(1);
    if(p1->calpoint()>5)
        emit Win(2);
    if(p2->calpoint()>5)
        emit Win(3);
    qDebug()<<p->calpoint();
    emit Turn();
}
void MainWindow::SET(){
    p->Setcolor(info->color1());
    p->Setname(info->user11());
    p1->Setcolor(info->color2());
    p1->Setname(info->user12());
    p2->Setcolor(info->color3());
    p2->Setname(info->user13());
    ui->roll->setEnabled(true);
    emit Turn();
}
void MainWindow::BANKTRADE(int a,int b){
    int flag=0;
    int flag1=0;
    switch (b) {
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
        switch (a) {
        case(0):
            if(cur->Getbrick()>3){
                cur->Plusbrick(-4);
                bank->plusbrick(4);
                flag1=1;
            }
            break;
        case(1):
            if(cur->Getsheep()>3){
                cur->Plussheep(-4);
                bank->plussheep(4);
                flag1=1;
            }
            break;
        case(2):
            if(cur->Getstone()>3){
                cur->Plusstone(-4);
                bank->plusstone(4);
                flag1=1;
            }
            break;
        case(3):
            if(cur->Getwheat()>3){
                cur->Pluswheat(-4);
                bank->pluswheat(4);
                flag1=1;
            }
            break;
        case(4):
            if(cur->Getwood()>3){
                cur->Pluswood(-4);
                bank->pluswood(4);
                flag1=1;
            }
            break;
        }

}
    if(flag&&flag1){
        switch (b) {
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
    emit Turn();
}
void MainWindow::SETDATA(){
    ui->groupBox->setTitle(p->Getname());
    ui->col_1->setText(p->Getcolor());

    ui->brick_1->setText(QString::number(p->Getbrick()));
    ui->sheep_1->setText(QString::number(p->Getsheep()));
    ui->stone_1->setText(QString::number(p->Getstone()));
    ui->wheat_1->setText(QString::number(p->Getwheat()));
    ui->wood_1->setText(QString::number(p->Getwood()));

    ui->groupBox_2->setTitle(p1->Getname());
    ui->col_2->setText(p1->Getcolor());
    ui->brick_2->setText(QString::number(p1->Getbrick()));
    ui->sheep_2->setText(QString::number(p1->Getsheep()));
    ui->stone_2->setText(QString::number(p1->Getstone()));
    ui->wheat_2->setText(QString::number(p1->Getwheat()));
    ui->wood_2->setText(QString::number(p1->Getwood()));

    ui->groupBox_3->setTitle(p2->Getname());
    ui->color_3->setText(p2->Getcolor());
    ui->brick_3->setText(QString::number(p2->Getbrick()));
    ui->sheep_3->setText(QString::number(p2->Getsheep()));
    ui->stone_3->setText(QString::number(p2->Getstone()));
    ui->wheat_3->setText(QString::number(p2->Getwheat()));
    ui->wood_3->setText(QString::number(p2->Getwood()));
    if(p->calpoint()>5)
        emit Win(1);
    if(p1->calpoint()>5)
        emit Win(2);
    if(p2->calpoint()>5)
        emit Win(3);

}
void MainWindow::WIN(int a){
    Player *cur;
    if(a==1)
        cur=p;
    if(a==2)
        cur=p1;
    if(a==3)
        cur=p2;
    mes->setText(cur->Getname()+" WINS");
    mes->show();
    this->close();
}
//Building homes and cities
void MainWindow::on_radioButton_clicked()
{
    emit BUILDH1(turn,0,0,6,6,1);
}
void MainWindow::on_radioButton_2_clicked()
{
    emit BUILDH1(turn,1,0,1,0,2);
}
void MainWindow::on_radioButton_3_clicked()
{
    emit BUILDH1(turn,2,1,7,1,3);
}
void MainWindow::on_radioButton_4_clicked()
{
    emit BUILDH1(turn,3,4,2,2,4);
}
void MainWindow::on_radioButton_5_clicked()
{
    emit BUILDH2(turn,4,3,4,8,5,12,3);
}
void MainWindow::on_radioButton_9_clicked()
{   
    emit BUILDH2(turn,8,11,10,6,9,7,0);
}
void MainWindow::on_radioButton_10_clicked()
{
    emit BUILDH2(turn,9,11,19,12,8,10,19);
}
void MainWindow::on_radioButton_11_clicked()
{
    emit BUILDH2(turn,10,13,12,7,9,11,2);
}
void MainWindow::on_radioButton_12_clicked()
{
    emit BUILDH2(turn,11,20,14,13,10,12,21);
}
void MainWindow::on_radioButton_13_clicked()
{
    emit BUILDH2(turn,12,15,14,8,14,12,23);
}
void MainWindow::on_radioButton_14_clicked()
{
    emit BUILDH2(turn,13,16,15,21,14,12,23);
}
void MainWindow::on_radioButton_15_clicked()
{
    emit BUILDH2(turn,14,16,17,9,15,6,13);
}
void MainWindow::on_radioButton_6_clicked()
{
emit BUILDH1(turn,5,4,5,3,5);
}
void MainWindow::on_radioButton_7_clicked()
{
    emit BUILDH1(turn,6,9,5,14,5);
}
void MainWindow::on_radioButton_8_clicked()
{

    emit BUILDH1(turn,7,18,10,8,17);
}
void MainWindow::on_radioButton_16_clicked()
{

    emit BUILDH1(turn,15,17,22,14,25);
}
void MainWindow::on_radioButton_18_clicked()
{
    emit BUILDH2(turn,17,18,23,24,7,18,16);
}
void MainWindow::on_radioButton_19_clicked()
{
    emit BUILDH2(turn,18,24,25,34,19,29,17);
}
void MainWindow::on_radioButton_20_clicked()
{
    emit BUILDH2(turn,19,19,26,25,20,18,9);
}
void MainWindow::on_radioButton_21_clicked()
{
    emit BUILDH2(turn,20,26,27,35,21,31,19);
}
void MainWindow::on_radioButton_22_clicked()
{    
    emit BUILDH2(turn,21,28,27,20,22,20,11);
}
void MainWindow::on_radioButton_23_clicked()
{
    emit BUILDH2(turn,22,28,29,36,21,23,33);
}
void MainWindow::on_radioButton_24_clicked()
{
    emit BUILDH2(turn,23,21,29,30,24,13,22);
}
void MainWindow::on_radioButton_25_clicked()
{
    emit BUILDH2(turn,24,30,37,31,23,25,35);
}
void MainWindow::on_radioButton_26_clicked()
{
    emit BUILDH2(turn,25,31,32,22,24,26,15);
}
void MainWindow::on_radioButton_27_clicked()
{
    emit BUILDH1(turn,26,32,38,25,37);
}
void MainWindow::on_radioButton_17_clicked()
{   
    emit BUILDH1(turn,16,23,33,17,27);
}
void MainWindow::on_pushButton_clicked()
{
    bktrade->show();
}
void MainWindow::on_radioButton_28_clicked()
{
    emit BUILDH1(turn,27,33,39,18,28);
}
void MainWindow::on_radioButton_29_clicked()
{
    emit BUILDH2(turn,28,39,40,49,27,29,38);
}
void MainWindow::on_radioButton_30_clicked()
{
    emit BUILDH2(turn,29,41,40,34,28,30,18);
}
void MainWindow::on_radioButton_31_clicked()
{
    emit BUILDH2(turn,30,41,42,50,29,31,40);
}
void MainWindow::on_radioButton_32_clicked()
{
    emit BUILDH2(turn,31,43,42,35,30,32,20);
}
void MainWindow::on_radioButton_33_clicked()
{
    emit BUILDH2(turn,32,43,44,51,31,33,42);
}
void MainWindow::on_radioButton_34_clicked()
{
    emit BUILDH2(turn,33,44,45,36,34,32,44);
}
void MainWindow::on_radioButton_35_clicked()
{
    emit BUILDH2(turn,34,45,46,52,33,44,35);
}
void MainWindow::on_radioButton_36_clicked()
{
    emit BUILDH2(turn,35,46,47,37,24,34,36);
}
void MainWindow::on_radioButton_37_clicked()
{
    emit BUILDH2(turn,36,47,48,53,35,37,46);
}
void MainWindow::on_radioButton_38_clicked()
{
    emit BUILDH1(turn,37,38,48,36,26);
}
void MainWindow::on_radioButton_39_clicked()
{
    emit BUILDH1(turn,38,49,54,28,39);
}
void MainWindow::on_radioButton_40_clicked()
{
    emit BUILDH2(turn,39,54,55,62,38,40,47);
}
void MainWindow::on_radioButton_41_clicked()
{
    emit BUILDH2(turn,40,55,56,50,39,41,30);
}
void MainWindow::on_radioButton_42_clicked()
{
    emit BUILDH2(turn,41,56,57,63,40,42,49);
}
void MainWindow::on_radioButton_43_clicked()
{
    emit BUILDH2(turn,42,51,57,58,41,43,32);
}
void MainWindow::on_radioButton_44_clicked()
{
    emit BUILDH2(turn,43,58,59,64,42,44,51);
}
void MainWindow::on_radioButton_45_clicked()
{
    emit BUILDH2(turn,44,60,52,59,43,46,34);
}
void MainWindow::on_radioButton_46_clicked()
{
    emit BUILDH2(turn,45,61,60,65,44,46,53);
}
void MainWindow::on_radioButton_47_clicked()
{
    emit BUILDH1(turn,46,53,61,36,45);
}
void MainWindow::on_radioButton_50_clicked()
{
    emit BUILDH2(turn,49,67,68,63,48,41,50);
}
void MainWindow::on_radioButton_52_clicked()
{
    emit BUILDH2(turn,51,69,70,64,52,43,50);
}
void MainWindow::on_radioButton_48_clicked()
{
    emit BUILDH1(turn,47,66,62,39,48);
}
void MainWindow::on_radioButton_49_clicked()
{
    emit BUILDH1(turn,48,66,67,47,49);
}
void MainWindow::on_radioButton_51_clicked()
{
    emit BUILDH1(turn,50,68,69,49,51);
}
void MainWindow::on_radioButton_53_clicked()
{
    emit BUILDH1(turn,53,70,71,51,53);
}
void MainWindow::on_radioButton_54_clicked()
{
    emit BUILDH1(turn,53,65,71,52,45);
}

//Trade with port
void MainWindow::on_TRADE1_clicked()
{
    trade->Setnum(0);
    trade->Setturn(turn);
    trade->show();
}
void MainWindow::on_TRADE2_clicked()
{
    trade->Setnum(1);
    trade->Setturn(turn);
    trade->show();
}
void MainWindow::on_TRADE3_clicked()
{
    trade->Setnum(2);
    trade->Setturn(turn);
    trade->show();
}
void MainWindow::on_TRADE4_clicked()
{
    trade->Setnum(3);
    trade->Setturn(turn);
    trade->show();
}
void MainWindow::on_TRADE5_clicked()
{
    trade->Setnum(4);
    trade->Setturn(turn);
    trade->show();
}
//Trade with other players
void MainWindow::on_ptrade1_clicked()
{

    ptrade->Setfir(turn);
    ptrade->Setsec(1);
    ptrade->show();
}
void MainWindow::on_ptrade2_clicked()
{
    ptrade->Setfir(turn);
    ptrade->Setsec(2);
    ptrade->show();
}
void MainWindow::on_ptrade3_clicked()
{
    ptrade->Setfir(turn);
    ptrade->Setsec(3);
    ptrade->show();
}


