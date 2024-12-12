/********************************************************************************
** Form generated from reading UI file 'chatdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATDIALOG_H
#define UI_CHATDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ChatDialog
{
public:
    QTextEdit *chatArea;
    QLineEdit *inputField;
    QPushButton *sendButton;

    void setupUi(QDialog *ChatDialog)
    {
        if (ChatDialog->objectName().isEmpty())
            ChatDialog->setObjectName("ChatDialog");
        ChatDialog->resize(400, 300);
        ChatDialog->setStyleSheet(QString::fromUtf8("backgournd-color: black;"));
        chatArea = new QTextEdit(ChatDialog);
        chatArea->setObjectName("chatArea");
        chatArea->setGeometry(QRect(10, 10, 380, 200));
        chatArea->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        chatArea->setReadOnly(true);
        inputField = new QLineEdit(ChatDialog);
        inputField->setObjectName("inputField");
        inputField->setGeometry(QRect(10, 220, 300, 30));
        inputField->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        sendButton = new QPushButton(ChatDialog);
        sendButton->setObjectName("sendButton");
        sendButton->setGeometry(QRect(320, 220, 70, 30));
        sendButton->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: black;"));

        retranslateUi(ChatDialog);

        QMetaObject::connectSlotsByName(ChatDialog);
    } // setupUi

    void retranslateUi(QDialog *ChatDialog)
    {
        ChatDialog->setWindowTitle(QCoreApplication::translate("ChatDialog", "Chat", nullptr));
        sendButton->setText(QCoreApplication::translate("ChatDialog", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatDialog: public Ui_ChatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATDIALOG_H
