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
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_delete_Admin_2;
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
        pushButton_delete_Admin->setGeometry(QRect(20, 20, 81, 21));
        lineEdit_Year_Admin = new QLineEdit(centralwidget);
        lineEdit_Year_Admin->setObjectName("lineEdit_Year_Admin");
        lineEdit_Year_Admin->setGeometry(QRect(380, 70, 171, 41));
        lineEdit_Year_Admin->setFont(font);
        lineEdit_Author_Admin = new QLineEdit(centralwidget);
        lineEdit_Author_Admin->setObjectName("lineEdit_Author_Admin");
        lineEdit_Author_Admin->setGeometry(QRect(190, 70, 171, 41));
        lineEdit_Author_Admin->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, -70, 581, 251));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resource/Image/ONLINE PLAYBOOK (3).png")));
        label->setScaledContents(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 50, 171, 22));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(190, 50, 171, 21));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(380, 50, 171, 22));
        pushButton_delete_Admin_2 = new QPushButton(centralwidget);
        pushButton_delete_Admin_2->setObjectName("pushButton_delete_Admin_2");
        pushButton_delete_Admin_2->setGeometry(QRect(470, 130, 81, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        pushButton_delete_Admin_2->setFont(font1);
        deleteBook_linkedList->setCentralWidget(centralwidget);
        label->raise();
        lineEdit_title_Admin->raise();
        pushButton_delete_Admin->raise();
        lineEdit_Year_Admin->raise();
        lineEdit_Author_Admin->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_delete_Admin_2->raise();
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
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("deleteBook_linkedList", "Tittle", nullptr));
        pushButton_2->setText(QCoreApplication::translate("deleteBook_linkedList", "Author", nullptr));
        pushButton_3->setText(QCoreApplication::translate("deleteBook_linkedList", "Year", nullptr));
        pushButton_delete_Admin_2->setText(QCoreApplication::translate("deleteBook_linkedList", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteBook_linkedList: public Ui_deleteBook_linkedList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEBOOK_LINKEDLIST_H
