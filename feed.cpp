#include "feed.h"
#include "ui_feed.h"

Feed::Feed(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Feed)
    , chatDialog(nullptr)
{
    ui->setupUi(this);
}

Feed::~Feed()
{
    delete ui;
}

void Feed::on_pushButton_3_clicked()
{
    map = new class map(this);
    map->show();
}


void Feed::on_pushButton_4_clicked()
{
    events = new class events(this);
    events->show();
}


void Feed::on_pushButton_7_clicked()
{
    Request = new class Request(this);
    Request->show();
}


void Feed::on_pushButton_clicked()
{
    if (!chatDialog) {
        chatDialog = new ChatDialog(this); // Create dialog if not already created
    }
    chatDialog->show(); // Show the chat dialog
}


void Feed::on_pushButton_6_clicked()
{
  if (!chatDialog) {
        chatDialog = new ChatDialog(this); // Create dialog if not already created
    }
    chatDialog->show(); // Show the chat dialog
}

