/********************************************************************************
** Form generated from reading UI file 'loginscreen_user.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_USER_H
#define UI_LOGINSCREEN_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Loginscreen_User
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_User_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_User_password;
    QPushButton *pushButton_Login_User;
    QPushButton *pushButton_back_user_login;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Loginscreen_User)
    {
        if (Loginscreen_User->objectName().isEmpty())
            Loginscreen_User->setObjectName("Loginscreen_User");
        Loginscreen_User->resize(784, 598);
        centralwidget = new QWidget(Loginscreen_User);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(410, 150, 371, 211));
        QFont font;
        font.setPointSize(11);
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_User_username = new QLineEdit(groupBox);
        lineEdit_User_username->setObjectName("lineEdit_User_username");
        lineEdit_User_username->setFont(font);

        horizontalLayout->addWidget(lineEdit_User_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_User_password = new QLineEdit(groupBox);
        lineEdit_User_password->setObjectName("lineEdit_User_password");
        lineEdit_User_password->setFont(font);
        lineEdit_User_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_User_password);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_Login_User = new QPushButton(groupBox);
        pushButton_Login_User->setObjectName("pushButton_Login_User");
        pushButton_Login_User->setFont(font);

        verticalLayout->addWidget(pushButton_Login_User);

        pushButton_back_user_login = new QPushButton(centralwidget);
        pushButton_back_user_login->setObjectName("pushButton_back_user_login");
        pushButton_back_user_login->setGeometry(QRect(670, 410, 101, 31));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        pushButton_back_user_login->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-6, -6, 411, 571));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Resource/Image/ONLINE PLAYBOOK (1.2).png")));
        label_3->setScaledContents(true);
        Loginscreen_User->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Loginscreen_User);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 784, 20));
        Loginscreen_User->setMenuBar(menubar);
        statusbar = new QStatusBar(Loginscreen_User);
        statusbar->setObjectName("statusbar");
        Loginscreen_User->setStatusBar(statusbar);

        retranslateUi(Loginscreen_User);

        QMetaObject::connectSlotsByName(Loginscreen_User);
    } // setupUi

    void retranslateUi(QMainWindow *Loginscreen_User)
    {
        Loginscreen_User->setWindowTitle(QCoreApplication::translate("Loginscreen_User", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Loginscreen_User", "SignIn for user", nullptr));
        label->setText(QCoreApplication::translate("Loginscreen_User", "UserName", nullptr));
        label_2->setText(QCoreApplication::translate("Loginscreen_User", "Password", nullptr));
        pushButton_Login_User->setText(QCoreApplication::translate("Loginscreen_User", "Login", nullptr));
        pushButton_back_user_login->setText(QCoreApplication::translate("Loginscreen_User", "Back", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Loginscreen_User: public Ui_Loginscreen_User {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_USER_H
