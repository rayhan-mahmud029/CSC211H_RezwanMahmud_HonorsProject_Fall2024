/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QPushButton *pushButton;
    QCommandLinkButton *commandLinkButton;
    QLabel *label_4;
    QLineEdit *lineEdit_password;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(900, 664);
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 100, 141, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("American Typewriter")});
        font1.setPointSize(24);
        font1.setWeight(QFont::Light);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(380, 120, 301, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Baloo Bhaijaan")});
        font2.setPointSize(34);
        font2.setBold(true);
        label_2->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 200, 211, 41));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(false);
        label_3->setFont(font3);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 240, 581, 51));
        lineEdit->setFont(font3);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(140, 300, 211, 41));
        label_5->setFont(font3);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(140, 400, 581, 41));
        QFont font4;
        font4.setPointSize(16);
        font4.setBold(true);
        pushButton->setFont(font4);
        commandLinkButton = new QCommandLinkButton(centralwidget);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(440, 480, 281, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(290, 160, 351, 20));
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(140, 340, 581, 51));
        lineEdit_password->setEchoMode(QLineEdit::EchoMode::Password);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 900, 37));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Campus Connect | Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome to", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Campus Connect", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Enter BMCC Email:", nullptr));
#if QT_CONFIG(tooltip)
        lineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        lineEdit->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Enter Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "LogIn", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("MainWindow", "Don't have an account? SignUp", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Borough of Manhattan Community College", nullptr));
        lineEdit_password->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
