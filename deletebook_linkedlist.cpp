#include "deletebook_linkedlist.h"
#include "ui_deletebook_linkedlist.h"
#include "linkedlist_admin.h"

deleteBook_linkedList::deleteBook_linkedList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::deleteBook_linkedList)
{
    ui->setupUi(this);
}

deleteBook_linkedList::~deleteBook_linkedList()
{
    delete ui;
}

void deleteBook_linkedList::on_pushButton_delete_Admin_clicked()
{
    QString title = ui->lineEdit_title_Admin->text();
    emit bookDelete(title);
}

void deleteBook_linkedList::on_pushButton_delete_Admin_2_clicked()
{
    // Menyembunyikan MainWindow saat tombol pushButton_User_Login ditekan
    this->close();

}

