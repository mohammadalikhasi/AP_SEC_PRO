#ifndef BANKTRADE_H
#define BANKTRADE_H

#include <QDialog>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
namespace Ui {
class BankTrade;
}

class BankTrade : public QDialog
{
    Q_OBJECT

public:
    explicit BankTrade(QWidget *parent = nullptr);
    ~BankTrade();
public slots:
    void DONE();


signals:
    void selected(int,int);

private:
    Ui::BankTrade *ui;
};

#endif // BANKTRADE_H
