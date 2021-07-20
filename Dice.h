#include <QMainWindow>
#include <QString>
#include <QLabel>
#include <QCheckBox>
#include <QWidget>
#include <QRadioButton>
#include <vector>
#include <QPushButton>
#include<QHBoxLayout>
class Dice :public QObject {
    Q_OBJECT;
public slots:
    void Roll() {
        btn->setDisabled(true);
        srand((unsigned)time(0));
        int result = 2 + (rand() % 11);
        int i = 0;
        while (1) {
            i = 1 + (rand() % 6);
            if (i <= result - 1 && result < 7) {
                break;;
            }
            if (result > 6 && i + 6 >= result) {
                break;;
            }
        }
        dice1[0]->hide();
        dice1[1]->hide();
        dice1[2]->hide();
        dice1[3]->hide();
        dice1[4]->hide();
        dice1[5]->hide();
        switch (i) {
        case(1):
            dice1[0]->setVisible(true);
            break;
        case(2):
            dice1[1]->setVisible(true);
            break;
        case(3):
            dice1[2]->setVisible(true);
            break;
        case(4):
            dice1[3]->setVisible(true);
            break;
        case(5):
            dice1[4]->setVisible(true);
            break;
        case(6):
            dice1[5]->setVisible(true);
            break;
        }
        dice2[0]->hide();
        dice2[1]->hide();
        dice2[2]->hide();
        dice2[3]->hide();
        dice2[4]->hide();
        dice2[5]->hide();
        int j = result - i;
        switch (j) {
        case(1):
            dice2[0]->setVisible(true);
            break;
        case(2):
            dice2[1]->setVisible(true);
            break;
        case(3):
            dice2[2]->setVisible(true);
            break;
        case(4):
            dice2[3]->setVisible(true);
            break;
        case(5):
            dice2[4]->setVisible(true);
            break;
        case(6):
            dice2[5]->setVisible(true);
            break;
        }
        emit resultvalue(result);
    }
private:
    QPushButton* btn;
    QVector<QLabel*>dice1;
    QVector<QLabel*>dice2;
public:
    Dice(QPushButton* _btn,
        QVector<QLabel*>_dice1,
        QVector<QLabel*>_dice2) {
        btn = _btn;
        dice1 = _dice1;
        dice2 = _dice2;
    }
signals:
    void resultvalue(int a);


};
