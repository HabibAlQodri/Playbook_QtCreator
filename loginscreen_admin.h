#ifndef LOGINSCREEN_ADMIN_H
#define LOGINSCREEN_ADMIN_H

#include <QMainWindow>

namespace Ui {
class Loginscreen_Admin;
}

class Loginscreen_Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Loginscreen_Admin(QWidget *parent = nullptr);
    ~Loginscreen_Admin();

private slots:
    void on_pushButton_Login_Admin_clicked();


    void on_pushButton_back_admin_login_clicked();

private:
    Ui::Loginscreen_Admin *ui;
};

#endif // LOGINSCREEN_ADMIN_H
