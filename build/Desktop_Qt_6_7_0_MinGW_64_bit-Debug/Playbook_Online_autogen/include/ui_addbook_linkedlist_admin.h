/********************************************************************************
** Form generated from reading UI file 'addbook_linkedlist_admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_LINKEDLIST_ADMIN_H
#define UI_ADDBOOK_LINKEDLIST_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addBook_linkedList_Admin
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_title_Admin;
    QLineEdit *lineEdit_Year_Admin;
    QPushButton *pushButton_add_Admin;
    QLineEdit *lineEdit_Author_Admin;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *addBook_linkedList_Admin)
    {
        if (addBook_linkedList_Admin->objectName().isEmpty())
            addBook_linkedList_Admin->setObjectName("addBook_linkedList_Admin");
        addBook_linkedList_Admin->resize(575, 156);
        centralwidget = new QWidget(addBook_linkedList_Admin);
        centralwidget->setObjectName("centralwidget");
        lineEdit_title_Admin = new QLineEdit(centralwidget);
        lineEdit_title_Admin->setObjectName("lineEdit_title_Admin");
        lineEdit_title_Admin->setGeometry(QRect(10, 70, 171, 41));
        QFont font;
        font.setPointSize(15);
        lineEdit_title_Admin->setFont(font);
        lineEdit_Year_Admin = new QLineEdit(centralwidget);
        lineEdit_Year_Admin->setObjectName("lineEdit_Year_Admin");
        lineEdit_Year_Admin->setGeometry(QRect(380, 70, 171, 41));
        lineEdit_Year_Admin->setFont(font);
        pushButton_add_Admin = new QPushButton(centralwidget);
        pushButton_add_Admin->setObjectName("pushButton_add_Admin");
        pushButton_add_Admin->setGeometry(QRect(10, 10, 151, 41));
        lineEdit_Author_Admin = new QLineEdit(centralwidget);
        lineEdit_Author_Admin->setObjectName("lineEdit_Author_Admin");
        lineEdit_Author_Admin->setGeometry(QRect(190, 70, 171, 41));
        lineEdit_Author_Admin->setFont(font);
        addBook_linkedList_Admin->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(addBook_linkedList_Admin);
        statusbar->setObjectName("statusbar");
        addBook_linkedList_Admin->setStatusBar(statusbar);

        retranslateUi(addBook_linkedList_Admin);

        QMetaObject::connectSlotsByName(addBook_linkedList_Admin);
    } // setupUi

    void retranslateUi(QMainWindow *addBook_linkedList_Admin)
    {
        addBook_linkedList_Admin->setWindowTitle(QCoreApplication::translate("addBook_linkedList_Admin", "MainWindow", nullptr));
        pushButton_add_Admin->setText(QCoreApplication::translate("addBook_linkedList_Admin", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addBook_linkedList_Admin: public Ui_addBook_linkedList_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_LINKEDLIST_ADMIN_H
