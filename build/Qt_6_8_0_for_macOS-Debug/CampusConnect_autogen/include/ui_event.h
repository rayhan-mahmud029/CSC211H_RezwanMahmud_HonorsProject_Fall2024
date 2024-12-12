/********************************************************************************
** Form generated from reading UI file 'event.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENT_H
#define UI_EVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Event
{
public:
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_email_2;
    QPushButton *pushButton;
    QLabel *label_email;
    QLabel *label_password;
    QLabel *label;
    QLineEdit *lineEdit_email;
    QLabel *label_username;

    void setupUi(QDialog *Event)
    {
        if (Event->objectName().isEmpty())
            Event->setObjectName("Event");
        Event->resize(289, 374);
        Event->setStyleSheet(QString::fromUtf8("background-color: balck;"));
        lineEdit_username = new QLineEdit(Event);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(10, 110, 251, 30));
        lineEdit_username->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: balck;"));
        lineEdit_email_2 = new QLineEdit(Event);
        lineEdit_email_2->setObjectName("lineEdit_email_2");
        lineEdit_email_2->setGeometry(QRect(10, 250, 251, 30));
        lineEdit_email_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: balck;"));
        pushButton = new QPushButton(Event);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 300, 251, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: black;"));
        label_email = new QLabel(Event);
        label_email->setObjectName("label_email");
        label_email->setGeometry(QRect(10, 160, 101, 20));
        label_password = new QLabel(Event);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(10, 230, 131, 20));
        label = new QLabel(Event);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 10, 161, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("American Typewriter")});
        font.setPointSize(18);
        font.setWeight(QFont::Light);
        label->setFont(font);
        lineEdit_email = new QLineEdit(Event);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(10, 180, 251, 30));
        lineEdit_email->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: balck;"));
        label_username = new QLabel(Event);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(10, 90, 80, 20));

        retranslateUi(Event);

        QMetaObject::connectSlotsByName(Event);
    } // setupUi

    void retranslateUi(QDialog *Event)
    {
        Event->setWindowTitle(QCoreApplication::translate("Event", "Dialog", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_email_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("Event", "Submit", nullptr));
        label_email->setText(QCoreApplication::translate("Event", "Event Location:", nullptr));
        label_password->setText(QCoreApplication::translate("Event", "Event Details:", nullptr));
        label->setText(QCoreApplication::translate("Event", "Event Information", nullptr));
        lineEdit_email->setText(QString());
        label_username->setText(QCoreApplication::translate("Event", "Event Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Event: public Ui_Event {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENT_H
