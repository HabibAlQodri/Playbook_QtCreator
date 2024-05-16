/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QSplitter *splitter;
    QPushButton *pushButton_Admin_Login;
    QPushButton *pushButton_User_Login;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(685, 425);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(180, 280, 311, 31));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_Admin_Login = new QPushButton(splitter);
        pushButton_Admin_Login->setObjectName("pushButton_Admin_Login");
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        pushButton_Admin_Login->setFont(font);
        splitter->addWidget(pushButton_Admin_Login);
        pushButton_User_Login = new QPushButton(splitter);
        pushButton_User_Login->setObjectName("pushButton_User_Login");
        pushButton_User_Login->setFont(font);
        splitter->addWidget(pushButton_User_Login);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(4, -6, 681, 391));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Resource/Image/ONLINE PLAYBOOK (4).png")));
        label->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        splitter->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 685, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_Admin_Login->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        pushButton_User_Login->setText(QCoreApplication::translate("MainWindow", "User", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
