#include "loginscreen_user.h"
#include "ui_loginscreen_user.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "linkedlist_user.h"

Loginscreen_User::Loginscreen_User(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Loginscreen_User)
{
    ui->setupUi(this);
}

Loginscreen_User::~Loginscreen_User()
{
    delete ui;
}

void Loginscreen_User::on_pushButton_Login_User_clicked()
{
    // Mengambil nilai dari input username dan password
    QString username = ui->lineEdit_User_username->text();
    QString password = ui->lineEdit_User_password->text();

    // Memeriksa apakah input username dan password sesuai dengan yang diinginkan
    if (username == "user" && password == "user")
    {
        // Jika sesuai, tampilkan layar atau fungsionalitas yang sesuai untuk pengguna
        QMessageBox::information(this, "Login Berhasil", "Selamat datang, Pengguna!");
        // Contoh: buka layar atau lakukan tindakan pengguna

        // Menyembunyikan MainWindow saat tombol pushButton_User_Login ditekan
        this->close();

        // Membuat objek LoginScreen User dan menampilkannya
        LinkedList_user *linkedList_user = new LinkedList_user(this);
        linkedList_user->show();
        // Tidak perlu delete LoginScreen_User di sini karena akan dihapus otomatis saat widget induk (this) dihapus.

    }
    else
    {
        // Jika tidak sesuai, tampilkan pesan kesalahan
        QMessageBox::warning(this, "Login Gagal", "Username atau Password Pengguna salah.");
    }
}



void Loginscreen_User::on_pushButton_back_user_login_clicked()
{
    // Menyembunyikan MainWindow saat tombol pushButton_User_Login ditekan
    this->close();

    // Membuat objek LoginScreen User dan menampilkannya
    MainWindow *mainWindow = new MainWindow(this);
    mainWindow->show();
    // Tidak perlu delete LoginScreen_User di sini karena akan dihapus otomatis saat widget induk (this) dihapus.
}

