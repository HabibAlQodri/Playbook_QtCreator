#include "linkedlist_user.h"
#include "ui_linkedlist_user.h"
#include "addbook_linkedlist_user.h"
#include "loginscreen_user.h"
#include <QDebug>

LinkedList_user::LinkedList_user(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LinkedList_user),
    head(nullptr)
{
    ui->setupUi(this);
}

LinkedList_user::~LinkedList_user()
{
    // Hapus semua node dari linked list saat objek LinkedList_user dihancurkan
    while (head) {
        BookNode* temp = head;
        head = head->next;
        delete temp;
    }
    delete ui;
}

void LinkedList_user::addBook(QString title, QString author, QString year)
{
    // Membuat node baru
    BookNode* newNode = new BookNode(title, author, year);

    // Jika linked list masih kosong, atur newNode sebagai head
    if (!head) {
        head = newNode;
        return;
    }

    // Menemukan posisi terakhir dalam linked list
    BookNode* temp = head;
    while (temp->next) {
        temp = temp->next;
    }

    // Menambahkan newNode ke akhir linked list
    temp->next = newNode;
}

void LinkedList_user::displayBooks()
{
    // Menghapus semua item yang ada di QListWidget sebelum menampilkan buku
    ui->listWidget_books_Tittle->clear();
    ui->listWidget_books_Author->clear();
    ui->listWidget_books_year->clear();

    // Menampilkan semua buku dalam linked list
    BookNode* temp = head;
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


void LinkedList_user::on_pushButton_add_book_user_clicked()
{
    // Membuat objek AddBook_linkedlist_user dan menampilkannya
    AddBook_linkedlist_user *addBookWindow = new AddBook_linkedlist_user(this);
    addBookWindow->show();
    connect(addBookWindow, &AddBook_linkedlist_user::bookAdded, this, &LinkedList_user::addBookFromUI);
}

void LinkedList_user::on_pushButton_look_book_user_clicked()
{
    // Menampilkan daftar buku yang ada dalam linked list
    displayBooks();
}

void LinkedList_user::addBookFromUI(QString title, QString author, QString year)
{
    addBook(title, author, year);
}

void LinkedList_user::on_pushButton_clicked()
{
    // Menyembunyikan MainWindow saat tombol pushButton_User_Login ditekan
    this->close();

    // Membuat objek LoginScreen User dan menampilkannya
    Loginscreen_User *loginscreen_user = new Loginscreen_User(this);
    loginscreen_user->show();
    // Tidak perlu delete LoginScreen_User di sini karena akan dihapus otomatis saat widget induk (this) dihapus.
}

