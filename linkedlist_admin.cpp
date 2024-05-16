#include "linkedlist_admin.h"
#include "addbook_linkedlist_admin.h"
#include "ui_linkedlist_admin.h"
#include "deletebook_linkedlist.h"
#include "loginscreen_admin.h"
#include <QDebug>

linkedList_admin::linkedList_admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::linkedList_admin),
    head(nullptr)
{
    ui->setupUi(this);
}

linkedList_admin::~linkedList_admin()
{
    // Hapus semua node dari linked list saat objek LinkedList_Admin dihancurkan
    while (head) {
        BookNode_admin* temp = head;
        head = head->next;
        delete temp;
    }
    delete ui;
}

void linkedList_admin::addBook_Admin(QString title, QString author, QString year)
{
    // Membuat node baru
    BookNode_admin* newNode = new BookNode_admin(title, author, year);

    // Jika linked list masih kosong, atur newNode sebagai head
    if (!head) {
        head = newNode;
        return;
    }

    // Menemukan posisi terakhir dalam linked list
    BookNode_admin* temp = head;
    while (temp->next) {
        temp = temp->next;
    }

    // Menambahkan newNode ke akhir linked list
    temp->next = newNode;
}

void linkedList_admin::displayBooks()
{
    // Menghapus semua item yang ada di QListWidget sebelum menampilkan buku
    ui->listWidget_books_Tittle->clear();
    ui->listWidget_books_Author->clear();
    ui->listWidget_books_year->clear();

    // Menampilkan semua buku dalam linked list
    BookNode_admin* temp = head;
    while (temp) {
        // Menambahkan judul ke dalam QListWidget judul
        QListWidgetItem* titleItem = new QListWidgetItem(temp->title);
        ui->listWidget_books_Tittle->addItem(titleItem);

        // Menambahkan pengarang ke dalam QListWidget pengarang
        QListWidgetItem* authorItem = new QListWidgetItem(temp->author);
        ui->listWidget_books_Author->addItem(authorItem);

        // Menambahkan tahun ke dalam QListWidget tahun
        QListWidgetItem* yearItem = new QListWidgetItem(temp->year);
        ui->listWidget_books_year->addItem(yearItem);

        temp = temp->next;
    }
}

void linkedList_admin::on_pushButton_delete_book_admin_clicked()
{
    // Membuat objek AddBook_linkedlist_user dan menampilkannya
    deleteBook_linkedList *deleteBook_LinkedList = new deleteBook_linkedList(this);
    deleteBook_LinkedList->show();
    connect(deleteBook_LinkedList, &deleteBook_linkedList::bookDelete, this, &linkedList_admin::deleteBook);
}

void linkedList_admin::addBookFromUI(QString title, QString author, QString year)
{
    addBook_Admin(title, author, year);
}

void linkedList_admin::on_pushButton_add_book_admin_clicked()
{
    // Membuat objek AddBook_linkedlist_user dan menampilkannya
    addBook_linkedList_Admin *addBookWindow_Admin = new addBook_linkedList_Admin(this);
    addBookWindow_Admin->show();
    connect(addBookWindow_Admin, &addBook_linkedList_Admin::bookAdded_Admin, this, &linkedList_admin::addBookFromUI);
}

void linkedList_admin::deleteBook(QString titleToDelete)
{
    // Menghapus buku dari linked list
    // Dalam implementasi ini, kita akan menghapus buku berdasarkan judul yang dipilih dari QListWidget.

    // Temukan buku dengan judul yang sesuai dalam linked list
    BookNode_admin* temp = head;
    BookNode_admin* prev = nullptr;
    while (temp) {
        if (temp->title == titleToDelete) {
            // Jika buku ditemukan, hapus buku dari linked list
            if (prev) {
                prev->next = temp->next;
            } else {
                head = temp->next;
            }
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    // Setelah menghapus buku, tampilkan daftar buku yang tersisa
    displayBooks();
}

void linkedList_admin::on_pushButton_look_book_admin_clicked()
{
    // Menampilkan daftar buku yang ada dalam linked list
    displayBooks();
}

void linkedList_admin::on_pushButton_clicked()
{
    // Menyembunyikan MainWindow saat tombol pushButton_User_Login ditekan
    this->close();

    // Membuat objek LoginScreen User dan menampilkannya
    Loginscreen_Admin *loginscreen_admin = new Loginscreen_Admin(this);
    loginscreen_admin->show();
    // Tidak perlu delete LoginScreen_User di sini karena akan dihapus otomatis saat widget induk (this) dihapus.
}

