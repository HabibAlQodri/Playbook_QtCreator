#ifndef LOGINSCREEN_USER_H
#define LOGINSCREEN_USER_H

#include <QMainWindow>

namespace Ui {
class Loginscreen_User;
}

class Loginscreen_User : public QMainWindow
{
    Q_OBJECT

public:
    explicit Loginscreen_User(QWidget *parent = nullptr);
    ~Loginscreen_User();

private slots:
    void on_pushButton_Login_User_clicked();

    void on_pushButton_back_user_login_clicked();

private:
    Ui::Loginscreen_User *ui;
};

#endif // LOGINSCREEN_USER_H
