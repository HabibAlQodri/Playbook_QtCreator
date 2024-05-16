#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "loginscreen_admin.h" // Sertakan header untuk LoginScreen Admin
#include "loginscreen_user.h" // Sertakan header untuk LoginScreen User
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Admin_Login_clicked()
{
    // Menyembunyikan MainWindow saat tombol pushButton_Admin_Login ditekan
    this->hide();

    // Membuat objek LoginScreen Admin dan menampilkannya
    Loginscreen_Admin *loginScreen_Admin = new Loginscreen_Admin(this);
    loginScreen_Admin->show();
    // Tidak perlu delete LoginScreen_Admin di sini karena akan dihapus otomatis saat widget induk (this) dihapus.
}

void MainWindow::on_pushButton_User_Login_clicked()
{
    // Menyembunyikan MainWindow saat tombol pushButton_User_Login ditekan
    this->hide();

    // Membuat objek LoginScreen User dan menampilkannya
    Loginscreen_User *loginScreen_User = new Loginscreen_User(this);
    loginScreen_User->show();
    // Tidak perlu delete LoginScreen_User di sini karena akan dihapus otomatis saat widget induk (this) dihapus.
}
