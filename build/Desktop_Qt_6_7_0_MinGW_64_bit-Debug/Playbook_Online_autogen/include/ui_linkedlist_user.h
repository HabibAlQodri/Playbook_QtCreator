/********************************************************************************
** Form generated from reading UI file 'linkedlist_user.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKEDLIST_USER_H
#define UI_LINKEDLIST_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LinkedList_user
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
    QPushButton *pushButton_add_book_user;
    QPushButton *pushButton_look_book_user;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LinkedList_user)
    {
        if (LinkedList_user->objectName().isEmpty())
            LinkedList_user->setObjectName("LinkedList_user");
        LinkedList_user->resize(800, 600);
        centralwidget = new QWidget(LinkedList_user);
        centralwidget->setObjectName("centralwidget");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(60, 130, 611, 191));
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
        pushButton_add_book_user = new QPushButton(centralwidget);
        pushButton_add_book_user->setObjectName("pushButton_add_book_user");
        pushButton_add_book_user->setGeometry(QRect(60, 100, 83, 29));
        pushButton_look_book_user = new QPushButton(centralwidget);
        pushButton_look_book_user->setObjectName("pushButton_look_book_user");
        pushButton_look_book_user->setGeometry(QRect(150, 100, 83, 29));
        LinkedList_user->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LinkedList_user);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        LinkedList_user->setMenuBar(menubar);
        statusbar = new QStatusBar(LinkedList_user);
        statusbar->setObjectName("statusbar");
        LinkedList_user->setStatusBar(statusbar);

        retranslateUi(LinkedList_user);

        QMetaObject::connectSlotsByName(LinkedList_user);
    } // setupUi

    void retranslateUi(QMainWindow *LinkedList_user)
    {
        LinkedList_user->setWindowTitle(QCoreApplication::translate("LinkedList_user", "MainWindow", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = Tittle->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("LinkedList_user", "                  Tittle", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = Year->headerItem();
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("LinkedList_user", "                     Year", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = Author->headerItem();
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("LinkedList_user", "                    Author", nullptr));
        pushButton_add_book_user->setText(QCoreApplication::translate("LinkedList_user", "Tambahkan", nullptr));
        pushButton_look_book_user->setText(QCoreApplication::translate("LinkedList_user", "Lihat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LinkedList_user: public Ui_LinkedList_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKEDLIST_USER_H
