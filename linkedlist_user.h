#ifndef LINKEDLIST_USER_H
#define LINKEDLIST_USER_H

#include <QMainWindow>
#include <QListWidgetItem>

namespace Ui {
class LinkedList_user;
}

struct BookNode {
    QString title;
    QString author;
    QString year;
    BookNode* next;

    // Constructor
    BookNode(QString title, QString author, QString year) :
        title(title), author(author), year(year), next(nullptr) {}
};

class LinkedList_user : public QMainWindow
{
    Q_OBJECT

public:
    explicit LinkedList_user(QWidget *parent = nullptr);
    ~LinkedList_user();

private slots:
    void on_pushButton_add_book_user_clicked();
    void on_pushButton_look_book_user_clicked();
    void addBookFromUI(QString title, QString author, QString year);

    void on_pushButton_clicked();

private:
    Ui::LinkedList_user *ui;
    BookNode* head;

    void addBook(QString title, QString author, QString year);
    void displayBooks();
};

#endif // LINKEDLIST_USER_H
