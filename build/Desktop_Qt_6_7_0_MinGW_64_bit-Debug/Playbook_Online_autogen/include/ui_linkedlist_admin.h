/********************************************************************************
** Form generated from reading UI file 'linkedlist_admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKEDLIST_ADMIN_H
#define UI_LINKEDLIST_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_linkedList_admin
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTreeWidget *Tittle;
    QTreeWidget *Year;
    QTreeWidget *Author;
    QScrollBar *verticalScrollBar;
    QListWidget *listWidget_books_Tittle;
    QListWidget *listWidget_books_Author;
    QListWidget *listWidget_books_year;
    QPushButton *pushButton_add_book_admin;
    QPushButton *pushButton_look_book_admin;
    QPushButton *pushButton_delete_book_admin;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *linkedList_admin)
    {
        if (linkedList_admin->objectName().isEmpty())
            linkedList_admin->setObjectName("linkedList_admin");
        linkedList_admin->resize(800, 538);
        centralwidget = new QWidget(linkedList_admin);
        centralwidget->setObjectName("centralwidget");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(80, 180, 611, 191));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 609, 189));
        Tittle = new QTreeWidget(scrollAreaWidgetContents);
        Tittle->setObjectName("Tittle");
        Tittle->setGeometry(QRect(0, 0, 191, 191));
        Year = new QTreeWidget(scrollAreaWidgetContents);
        Year->setObjectName("Year");
        Year->setGeometry(QRect(390, 0, 201, 191));
        Year->setLineWidth(1);
        Author = new QTreeWidget(scrollAreaWidgetContents);
        Author->setObjectName("Author");
        Author->setGeometry(QRect(190, 0, 201, 191));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(590, 0, 16, 191));
        verticalScrollBar->setOrientation(Qt::Vertical);
        listWidget_books_Tittle = new QListWidget(scrollAreaWidgetContents);
        listWidget_books_Tittle->setObjectName("listWidget_books_Tittle");
        listWidget_books_Tittle->setGeometry(QRect(10, 30, 171, 151));
        QFont font;
        font.setPointSize(15);
        listWidget_books_Tittle->setFont(font);
        listWidget_books_Tittle->setFlow(QListView::TopToBottom);
        listWidget_books_Tittle->setItemAlignment(Qt::AlignJustify);
        listWidget_books_Author = new QListWidget(scrollAreaWidgetContents);
        listWidget_books_Author->setObjectName("listWidget_books_Author");
        listWidget_books_Author->setGeometry(QRect(200, 30, 171, 151));
        listWidget_books_Author->setFont(font);
        listWidget_books_Author->setItemAlignment(Qt::AlignJustify);
        listWidget_books_year = new QListWidget(scrollAreaWidgetContents);
        listWidget_books_year->setObjectName("listWidget_books_year");
        listWidget_books_year->setGeometry(QRect(410, 30, 171, 151));
        listWidget_books_year->setFont(font);
        listWidget_books_year->setItemAlignment(Qt::AlignJustify);
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_add_book_admin = new QPushButton(centralwidget);
        pushButton_add_book_admin->setObjectName("pushButton_add_book_admin");
        pushButton_add_book_admin->setGeometry(QRect(80, 150, 83, 29));
        pushButton_look_book_admin = new QPushButton(centralwidget);
        pushButton_look_book_admin->setObjectName("pushButton_look_book_admin");
        pushButton_look_book_admin->setGeometry(QRect(260, 150, 83, 29));
        pushButton_delete_book_admin = new QPushButton(centralwidget);
        pushButton_delete_book_admin->setObjectName("pushButton_delete_book_admin");
        pushButton_delete_book_admin->setGeometry(QRect(170, 150, 83, 29));
        linkedList_admin->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(linkedList_admin);
        statusbar->setObjectName("statusbar");
        linkedList_admin->setStatusBar(statusbar);

        retranslateUi(linkedList_admin);

        QMetaObject::connectSlotsByName(linkedList_admin);
    } // setupUi

    void retranslateUi(QMainWindow *linkedList_admin)
    {
        linkedList_admin->setWindowTitle(QCoreApplication::translate("linkedList_admin", "MainWindow", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = Tittle->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("linkedList_admin", "                  Tittle", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = Year->headerItem();
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("linkedList_admin", "                     Year", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = Author->headerItem();
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("linkedList_admin", "                    Author", nullptr));
        pushButton_add_book_admin->setText(QCoreApplication::translate("linkedList_admin", "Tambahkan", nullptr));
        pushButton_look_book_admin->setText(QCoreApplication::translate("linkedList_admin", "Lihat", nullptr));
        pushButton_delete_book_admin->setText(QCoreApplication::translate("linkedList_admin", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class linkedList_admin: public Ui_linkedList_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKEDLIST_ADMIN_H
