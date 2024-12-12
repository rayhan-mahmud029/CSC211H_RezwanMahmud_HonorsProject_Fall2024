#include "chatdialog.h"
#include "ui_chatdialog.h"

ChatDialog::ChatDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChatDialog)
{
    ui->setupUi(this);
}

ChatDialog::~ChatDialog()
{
    delete ui;
}

void ChatDialog::on_sendButton_clicked()
{
    QString message = ui->inputField->text();
    if (!message.isEmpty()) {
        ui->chatArea->append("You: " + message);
        ui->inputField->clear();
    }
}
