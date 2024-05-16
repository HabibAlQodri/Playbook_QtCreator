#ifndef ADDBOOK_LINKEDLIST_ADMIN_H
#define ADDBOOK_LINKEDLIST_ADMIN_H

#include <QMainWindow>

namespace Ui {
class addBook_linkedList_Admin;
}

class addBook_linkedList_Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit addBook_linkedList_Admin(QWidget *parent = nullptr);
    ~addBook_linkedList_Admin();

signals:
    void bookAdded_Admin(QString title, QString author, QString year);

private slots:
    void on_pushButton_add_Admin_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::addBook_linkedList_Admin *ui;
};

#endif // ADDBOOK_LINKEDLIST_ADMIN_H
