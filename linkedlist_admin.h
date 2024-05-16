#ifndef LINKEDLIST_ADMIN_H
#define LINKEDLIST_ADMIN_H

#include <QMainWindow>
#include <QListWidgetItem>

namespace Ui {
class linkedList_admin;
}

struct BookNode_admin {
    QString title;
    QString author;
    QString year;
    BookNode_admin* next;

    // Constructor
    BookNode_admin(QString title, QString author, QString year) :
        title(title), author(author), year(year), next(nullptr) {}
};

class linkedList_admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit linkedList_admin(QWidget *parent = nullptr);
    ~linkedList_admin();

private slots:
    void on_pushButton_add_book_admin_clicked();
    void on_pushButton_delete_book_admin_clicked();
    void on_pushButton_look_book_admin_clicked();

    void on_pushButton_clicked();

private:
    Ui::linkedList_admin *ui;
    BookNode_admin* head;

    void addBook_Admin(QString title, QString author, QString year);
    void displayBooks();
    void deleteBook(QString titleToDelete);
    void addBookFromUI(QString title, QString author, QString year);
};

#endif // LINKEDLIST_ADMIN_H
