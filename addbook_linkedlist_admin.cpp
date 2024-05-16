#include "addbook_linkedlist_admin.h"
#include "ui_addbook_linkedlist_admin.h"
#include "linkedlist_admin.h"

addBook_linkedList_Admin::addBook_linkedList_Admin(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::addBook_linkedList_Admin)
{
    ui->setupUi(this);
}

addBook_linkedList_Admin::~addBook_linkedList_Admin()
{
    delete ui;
}

void addBook_linkedList_Admin::on_pushButton_add_Admin_clicked()
{
    // Mengambil informasi buku dari input pengguna
    QString title = ui->lineEdit_title_Admin->text();
    QString author = ui->lineEdit_Author_Admin->text();
    QString year = ui->lineEdit_Year_Admin->text();

    // Mengirimkan sinyal dengan informasi buku yang ditambahkan
    emit bookAdded_Admin(title, author, year);
}


void addBook_linkedList_Admin::on_pushButton_4_clicked()
{
    // Menyembunyikan MainWindow saat tombol pushButton_User_Login ditekan
    this->close();

}

