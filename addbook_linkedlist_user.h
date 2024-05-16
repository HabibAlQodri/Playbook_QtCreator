#ifndef ADDBOOK_LINKEDLIST_USER_H
#define ADDBOOK_LINKEDLIST_USER_H

#include <QMainWindow>

namespace Ui {
class AddBook_linkedlist_user;
}

class AddBook_linkedlist_user : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddBook_linkedlist_user(QWidget *parent = nullptr);
    ~AddBook_linkedlist_user();

signals:
    void bookAdded(QString title, QString author, QString year);

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::AddBook_linkedlist_user *ui;
};

#endif // ADDBOOK_LINKEDLIST_USER_H
