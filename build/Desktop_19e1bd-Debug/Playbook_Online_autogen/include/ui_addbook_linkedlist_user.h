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
#include <QtWidgets/QLabel>
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
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddBook_linkedlist_user)
    {
        if (AddBook_linkedlist_user->objectName().isEmpty())
            AddBook_linkedlist_user->setObjectName("AddBook_linkedlist_user");
        AddBook_linkedlist_user->resize(587, 171);
        centralwidget = new QWidget(AddBook_linkedlist_user);
        centralwidget->setObjectName("centralwidget");
        lineEdit_title_user = new QLineEdit(centralwidget);
        lineEdit_title_user->setObjectName("lineEdit_title_user");
        lineEdit_title_user->setGeometry(QRect(10, 60, 171, 41));
        QFont font;
        font.setPointSize(15);
        lineEdit_title_user->setFont(font);
        lineEdit_Author_user = new QLineEdit(centralwidget);
        lineEdit_Author_user->setObjectName("lineEdit_Author_user");
        lineEdit_Author_user->setGeometry(QRect(200, 60, 171, 41));
        lineEdit_Author_user->setFont(font);
        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(10, 10, 91, 21));
        lineEdit_Year_user = new QLineEdit(centralwidget);
        lineEdit_Year_user->setObjectName("lineEdit_Year_user");
        lineEdit_Year_user->setGeometry(QRect(390, 60, 171, 41));
        lineEdit_Year_user->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, -60, 591, 211));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resource/Image/ONLINE PLAYBOOK (3).png")));
        label->setScaledContents(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 40, 171, 22));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(200, 40, 171, 22));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(390, 40, 171, 22));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(490, 120, 80, 22));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        pushButton_4->setFont(font1);
        AddBook_linkedlist_user->setCentralWidget(centralwidget);
        label->raise();
        lineEdit_title_user->raise();
        lineEdit_Author_user->raise();
        pushButton_add->raise();
        lineEdit_Year_user->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
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
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("AddBook_linkedlist_user", "Tittle", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddBook_linkedlist_user", "Author", nullptr));
        pushButton_3->setText(QCoreApplication::translate("AddBook_linkedlist_user", "Year", nullptr));
        pushButton_4->setText(QCoreApplication::translate("AddBook_linkedlist_user", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBook_linkedlist_user: public Ui_AddBook_linkedlist_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_LINKEDLIST_USER_H
