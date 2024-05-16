#ifndef DELETEBOOK_LINKEDLIST_H
#define DELETEBOOK_LINKEDLIST_H

#include <QMainWindow>

namespace Ui {
class deleteBook_linkedList;
}

class deleteBook_linkedList : public QMainWindow
{
    Q_OBJECT

public:
    explicit deleteBook_linkedList(QWidget *parent = nullptr);
    ~deleteBook_linkedList();

signals:
    void bookDelete(QString title);

private slots:
    void on_pushButton_delete_Admin_clicked();

    void on_pushButton_delete_Admin_2_clicked();

private:
    Ui::deleteBook_linkedList *ui;
};

#endif // DELETEBOOK_LINKEDLIST_H
