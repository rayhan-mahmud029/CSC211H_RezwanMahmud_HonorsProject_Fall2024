/********************************************************************************
** Form generated from reading UI file 'request.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUEST_H
#define UI_REQUEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Request
{
public:
    QLabel *label_username;
    QLabel *label_password;
    QLabel *label_email;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_email;
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit_email_2;

    void setupUi(QDialog *Request)
    {
        if (Request->objectName().isEmpty())
            Request->setObjectName("Request");
        Request->resize(287, 375);
        Request->setStyleSheet(QString::fromUtf8("background-color: balck;"));
        label_username = new QLabel(Request);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(10, 110, 80, 20));
        label_password = new QLabel(Request);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(10, 250, 131, 20));
        label_email = new QLabel(Request);
        label_email->setObjectName("label_email");
        label_email->setGeometry(QRect(10, 180, 101, 20));
        lineEdit_username = new QLineEdit(Request);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(10, 130, 251, 30));
        lineEdit_username->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: balck;"));
        lineEdit_email = new QLineEdit(Request);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(10, 200, 251, 30));
        lineEdit_email->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: balck;"));
        label = new QLabel(Request);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 201, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("American Typewriter")});
        font.setPointSize(18);
        font.setWeight(QFont::Light);
        label->setFont(font);
        pushButton = new QPushButton(Request);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 320, 251, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: black;"));
        lineEdit_email_2 = new QLineEdit(Request);
        lineEdit_email_2->setObjectName("lineEdit_email_2");
        lineEdit_email_2->setGeometry(QRect(10, 270, 251, 30));
        lineEdit_email_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: balck;"));

        retranslateUi(Request);

        QMetaObject::connectSlotsByName(Request);
    } // setupUi

    void retranslateUi(QDialog *Request)
    {
        Request->setWindowTitle(QCoreApplication::translate("Request", "Dialog", nullptr));
        label_username->setText(QCoreApplication::translate("Request", "Store Name:", nullptr));
        label_password->setText(QCoreApplication::translate("Request", "DropOff Locaiton:", nullptr));
        label_email->setText(QCoreApplication::translate("Request", "Store Location:", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_email->setText(QString());
        label->setText(QCoreApplication::translate("Request", "Request Food PickUp", nullptr));
        pushButton->setText(QCoreApplication::translate("Request", "Submit", nullptr));
        lineEdit_email_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Request: public Ui_Request {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUEST_H
