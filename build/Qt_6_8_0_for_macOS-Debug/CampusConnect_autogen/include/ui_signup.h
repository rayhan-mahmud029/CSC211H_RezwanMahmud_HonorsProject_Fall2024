/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QLabel *label_title;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QLabel *label_email;
    QLineEdit *lineEdit_email;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_signup;
    QLabel *label;
    QLabel *label_2;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(909, 521);
        label_title = new QLabel(Signup);
        label_title->setObjectName("label_title");
        label_title->setGeometry(QRect(300, 20, 361, 151));
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_username = new QLabel(Signup);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(260, 100, 80, 20));
        lineEdit_username = new QLineEdit(Signup);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(260, 120, 461, 30));
        label_email = new QLabel(Signup);
        label_email->setObjectName("label_email");
        label_email->setGeometry(QRect(260, 170, 80, 20));
        lineEdit_email = new QLineEdit(Signup);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(260, 190, 461, 30));
        label_password = new QLabel(Signup);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(260, 230, 80, 20));
        lineEdit_password = new QLineEdit(Signup);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(260, 260, 461, 30));
        lineEdit_password->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton_signup = new QPushButton(Signup);
        pushButton_signup->setObjectName("pushButton_signup");
        pushButton_signup->setGeometry(QRect(260, 300, 120, 40));
        label = new QLabel(Signup);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 20, 141, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("American Typewriter")});
        font.setPointSize(24);
        font.setWeight(QFont::Light);
        label->setFont(font);
        label_2 = new QLabel(Signup);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(430, 40, 301, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Baloo Bhaijaan")});
        font1.setPointSize(34);
        font1.setBold(true);
        label_2->setFont(font1);
        commandLinkButton = new QCommandLinkButton(Signup);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(440, 300, 281, 41));

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Sign Up", nullptr));
        label_title->setText(QString());
        label_username->setText(QCoreApplication::translate("Signup", "Username:", nullptr));
        lineEdit_username->setText(QCoreApplication::translate("Signup", "re", nullptr));
        label_email->setText(QCoreApplication::translate("Signup", "Email:", nullptr));
        label_password->setText(QCoreApplication::translate("Signup", "Password:", nullptr));
        pushButton_signup->setText(QCoreApplication::translate("Signup", "Sign Up", nullptr));
        label->setText(QCoreApplication::translate("Signup", "Welcome to", nullptr));
        label_2->setText(QCoreApplication::translate("Signup", "Campus Connect", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("Signup", "Already have an account? Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
