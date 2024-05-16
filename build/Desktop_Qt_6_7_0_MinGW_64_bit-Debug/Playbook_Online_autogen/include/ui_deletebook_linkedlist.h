/********************************************************************************
** Form generated from reading UI file 'deletebook_linkedlist.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEBOOK_LINKEDLIST_H
#define UI_DELETEBOOK_LINKEDLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteBook_linkedList
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_title_Admin;
    QPushButton *pushButton_delete_Admin;
    QLineEdit *lineEdit_Year_Admin;
    QLineEdit *lineEdit_Author_Admin;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *deleteBook_linkedList)
    {
        if (deleteBook_linkedList->objectName().isEmpty())
            deleteBook_linkedList->setObjectName("deleteBook_linkedList");
        deleteBook_linkedList->resize(562, 187);
        centralwidget = new QWidget(deleteBook_linkedList);
        centralwidget->setObjectName("centralwidget");
        lineEdit_title_Admin = new QLineEdit(centralwidget);
        lineEdit_title_Admin->setObjectName("lineEdit_title_Admin");
        lineEdit_title_Admin->setGeometry(QRect(10, 70, 171, 41));
        QFont font;
        font.setPointSize(15);
        lineEdit_title_Admin->setFont(font);
        pushButton_delete_Admin = new QPushButton(centralwidget);
        pushButton_delete_Admin->setObjectName("pushButton_delete_Admin");
        pushButton_delete_Admin->setGeometry(QRect(10, 10, 151, 41));
        lineEdit_Year_Admin = new QLineEdit(centralwidget);
        lineEdit_Year_Admin->setObjectName("lineEdit_Year_Admin");
        lineEdit_Year_Admin->setGeometry(QRect(380, 70, 171, 41));
        lineEdit_Year_Admin->setFont(font);
        lineEdit_Author_Admin = new QLineEdit(centralwidget);
        lineEdit_Author_Admin->setObjectName("lineEdit_Author_Admin");
        lineEdit_Author_Admin->setGeometry(QRect(190, 70, 171, 41));
        lineEdit_Author_Admin->setFont(font);
        deleteBook_linkedList->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(deleteBook_linkedList);
        statusbar->setObjectName("statusbar");
        deleteBook_linkedList->setStatusBar(statusbar);

        retranslateUi(deleteBook_linkedList);

        QMetaObject::connectSlotsByName(deleteBook_linkedList);
    } // setupUi

    void retranslateUi(QMainWindow *deleteBook_linkedList)
    {
        deleteBook_linkedList->setWindowTitle(QCoreApplication::translate("deleteBook_linkedList", "MainWindow", nullptr));
        pushButton_delete_Admin->setText(QCoreApplication::translate("deleteBook_linkedList", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteBook_linkedList: public Ui_deleteBook_linkedList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEBOOK_LINKEDLIST_H
