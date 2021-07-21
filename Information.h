#ifndef INFORMATION_H
#define INFORMATION_H

#include <QDialog>
#include <QPushButton>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QComboBox>
namespace Ui {
class information;
}

class information : public QDialog
{
    Q_OBJECT
    QPushButton *cls;
    QLabel*user1,*user2,*user3,*col1,*col2,*col3;
    QLineEdit *line1,*line2,*line3;
    QComboBox *bx1,*bx2,*bx3;
public:
    QString user11(){
        return line1->text();
    }
    QString color1(){
        return bx1->currentText();
    }
    QString user12(){
        return line2->text();
    }
    QString color2(){
        return bx2->currentText();
    }
    QString user13(){
        return line3->text();
    }
    QString color3(){
        return bx3->currentText();
    }
public slots:
    void CLS();
signals:
    void infoadded();



public:
    explicit information(QWidget *parent = nullptr);
    ~information();

private:
    Ui::information *ui;
};

#endif // INFORMATION_H
