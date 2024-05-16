#include "loginscreen_admin.h"
#include "linkedlist_admin.h"
#include "ui_loginscreen_admin.h"
#include "mainwindow.h"
#include <QMessageBox>

Loginscreen_Admin::Loginscreen_Admin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Loginscreen_Admin)
{
    ui->setupUi(this);
}

Loginscreen_Admin::~Loginscreen_Admin()
{
    delete ui;
}

void Loginscreen_Admin::on_pushButton_Login_Admin_clicked()
{
    // Mengambil nilai dari input username dan password
    QString username = ui->lineEdit_Admin_username->text();
    QString password = ui->lineEdit_Admin_password->text();

    // Memeriksa apakah input username dan password sesuai dengan yang diinginkan
    if (username == "admin" && password == "admin")
    {
        // Jika sesuai, tampilkan layar atau fungsionalitas admin yang sesuai
        QMessageBox::information(this, "Login Berhasil", "Selamat datang, Admin!");
        // Contoh: buka layar atau lakukan tindakan admin

        // Menyembunyikan MainWindow saat tombol pushButton_User_Login ditekan
        this->close();

        // Membuat objek LoginScreen User dan menampilkannya
        linkedList_admin *linkedList_Admin = new linkedList_admin(this);
        linkedList_Admin->show();
        // Tidak perlu delete LoginScreen_User di sini karena akan dihapus otomatis saat widget induk (this) dihapus.
    }
    else
    {
        // Jika tidak sesuai, tampilkan pesan kesalahan
        QMessageBox::warning(this, "Login Gagal", "Username atau Password Admin salah.");
    }
}



void Loginscreen_Admin::on_pushButton_back_admin_login_clicked()
{
    // Menyembunyikan MainWindow saat tombol pushButton_User_Login ditekan
    this->close();

    // Membuat objek LoginScreen User dan menampilkannya
    MainWindow *mainWindow = new MainWindow(this);
    mainWindow->show();
    // Tidak perlu delete LoginScreen_User di sini karena akan dihapus otomatis saat widget induk (this) dihapus.
}

