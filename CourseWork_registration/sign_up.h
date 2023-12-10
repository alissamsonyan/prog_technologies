#ifndef SIGN_UP_H
#define SIGN_UP_H

#include "dbmanager.h"
#include <QWidget>

namespace Ui {
class Sign_up;
}

class Sign_up : public QWidget
{
    Q_OBJECT

public:
    explicit Sign_up(QWidget *parent = nullptr);
    ~Sign_up();

private slots:
    void on_back_from_sign_up_clicked();
    void on_Create_clicked();

signals:
    void signal_back();

private:
    Ui::Sign_up *ui;
    DBManager dbm;
};

#endif // SIGN_UP_H
