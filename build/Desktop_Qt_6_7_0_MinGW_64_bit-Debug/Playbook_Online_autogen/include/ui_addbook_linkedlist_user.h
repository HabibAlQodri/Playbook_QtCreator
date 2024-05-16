/********************************************************************************
** Form generated from reading UI file 'addbook_linkedlist_user.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_LINKEDLIST_USER_H
#define UI_ADDBOOK_LINKEDLIST_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddBook_linkedlist_user
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_title_user;
    QLineEdit *lineEdit_Author_user;
    QPushButton *pushButton_add;
    QLineEdit *lineEdit_Year_user;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddBook_linkedlist_user)
    {
        if (AddBook_linkedlist_user->objectName().isEmpty())
            AddBook_linkedlist_user->setObjectName("AddBook_linkedlist_user");
        AddBook_linkedlist_user->resize(567, 160);
        centralwidget = new QWidget(AddBook_linkedlist_user);
        centralwidget->setObjectName("centralwidget");
        lineEdit_title_user = new QLineEdit(centralwidget);
        lineEdit_title_user->setObjectName("lineEdit_title_user");
        lineEdit_title_user->setGeometry(QRect(10, 70, 171, 41));
        QFont font;
        font.setPointSize(15);
        lineEdit_title_user->setFont(font);
        lineEdit_Author_user = new QLineEdit(centralwidget);
        lineEdit_Author_user->setObjectName("lineEdit_Author_user");
        lineEdit_Author_user->setGeometry(QRect(190, 70, 171, 41));
        lineEdit_Author_user->setFont(font);
        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(10, 10, 151, 41));
        lineEdit_Year_user = new QLineEdit(centralwidget);
        lineEdit_Year_user->setObjectName("lineEdit_Year_user");
        lineEdit_Year_user->setGeometry(QRect(380, 70, 171, 41));
        lineEdit_Year_user->setFont(font);
        AddBook_linkedlist_user->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AddBook_linkedlist_user);
        statusbar->setObjectName("statusbar");
        AddBook_linkedlist_user->setStatusBar(statusbar);

        retranslateUi(AddBook_linkedlist_user);

        QMetaObject::connectSlotsByName(AddBook_linkedlist_user);
    } // setupUi

    void retranslateUi(QMainWindow *AddBook_linkedlist_user)
    {
        AddBook_linkedlist_user->setWindowTitle(QCoreApplication::translate("AddBook_linkedlist_user", "MainWindow", nullptr));
        pushButton_add->setText(QCoreApplication::translate("AddBook_linkedlist_user", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBook_linkedlist_user: public Ui_AddBook_linkedlist_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_LINKEDLIST_USER_H
