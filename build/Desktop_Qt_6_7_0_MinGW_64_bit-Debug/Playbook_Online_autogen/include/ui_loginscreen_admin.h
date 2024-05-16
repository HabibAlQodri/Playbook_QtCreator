/********************************************************************************
** Form generated from reading UI file 'loginscreen_admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_ADMIN_H
#define UI_LOGINSCREEN_ADMIN_H

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

class Ui_Loginscreen_Admin
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_Admin_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_Admin_password;
    QPushButton *pushButton_Login_Admin;
    QLabel *label_3;
    QPushButton *pushButton_back_admin_login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Loginscreen_Admin)
    {
        if (Loginscreen_Admin->objectName().isEmpty())
            Loginscreen_Admin->setObjectName("Loginscreen_Admin");
        Loginscreen_Admin->resize(800, 600);
        centralwidget = new QWidget(Loginscreen_Admin);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(340, 150, 391, 261));
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

        lineEdit_Admin_username = new QLineEdit(groupBox);
        lineEdit_Admin_username->setObjectName("lineEdit_Admin_username");
        lineEdit_Admin_username->setFont(font);

        horizontalLayout->addWidget(lineEdit_Admin_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_Admin_password = new QLineEdit(groupBox);
        lineEdit_Admin_password->setObjectName("lineEdit_Admin_password");
        lineEdit_Admin_password->setFont(font);
        lineEdit_Admin_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_Admin_password);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_Login_Admin = new QPushButton(groupBox);
        pushButton_Login_Admin->setObjectName("pushButton_Login_Admin");

        verticalLayout->addWidget(pushButton_Login_Admin);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 180, 291, 201));
        label_3->setStyleSheet(QString::fromUtf8("image: url(:/Resource/Image/Login Icon_Admin.png);"));
        pushButton_back_admin_login = new QPushButton(centralwidget);
        pushButton_back_admin_login->setObjectName("pushButton_back_admin_login");
        pushButton_back_admin_login->setGeometry(QRect(590, 470, 141, 61));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        pushButton_back_admin_login->setFont(font1);
        Loginscreen_Admin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Loginscreen_Admin);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Loginscreen_Admin->setMenuBar(menubar);
        statusbar = new QStatusBar(Loginscreen_Admin);
        statusbar->setObjectName("statusbar");
        Loginscreen_Admin->setStatusBar(statusbar);

        retranslateUi(Loginscreen_Admin);

        QMetaObject::connectSlotsByName(Loginscreen_Admin);
    } // setupUi

    void retranslateUi(QMainWindow *Loginscreen_Admin)
    {
        Loginscreen_Admin->setWindowTitle(QCoreApplication::translate("Loginscreen_Admin", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Loginscreen_Admin", "SignIn for admin", nullptr));
        label->setText(QCoreApplication::translate("Loginscreen_Admin", "UserName", nullptr));
        label_2->setText(QCoreApplication::translate("Loginscreen_Admin", "Password", nullptr));
        pushButton_Login_Admin->setText(QCoreApplication::translate("Loginscreen_Admin", "Login", nullptr));
        label_3->setText(QString());
        pushButton_back_admin_login->setText(QCoreApplication::translate("Loginscreen_Admin", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Loginscreen_Admin: public Ui_Loginscreen_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_ADMIN_H
