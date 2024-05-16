#include "addbook_linkedlist_user.h"
#include "ui_addbook_linkedlist_user.h"

AddBook_linkedlist_user::AddBook_linkedlist_user(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddBook_linkedlist_user)
{
    ui->setupUi(this);
}

AddBook_linkedlist_user::~AddBook_linkedlist_user()
{
    delete ui;
}

void AddBook_linkedlist_user::on_pushButton_add_clicked()
{
    // Mengambil informasi buku dari input pengguna
    QString title = ui->lineEdit_title_user->text();
    QString author = ui->lineEdit_Author_user->text();
    QString year = ui->lineEdit_Year_user->text();

    // Mengirimkan sinyal dengan informasi buku yang ditambahkan
    emit bookAdded(title, author, year);
}

void AddBook_linkedlist_user::on_pushButton_4_clicked()
{
    // Menyembunyikan MainWindow saat tombol back ditekan
    this->close();

    // Tidak membuat objek baru untuk LinkedList_user
}
