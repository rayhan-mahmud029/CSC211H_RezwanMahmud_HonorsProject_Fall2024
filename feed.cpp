#include "feed.h"
#include "ui_feed.h"
#include <QTextStream>
#include <QMessageBox>
Feed::Feed(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Feed)
    , chatDialog(nullptr)
    , leaderboard(nullptr)
    , userPoints(0)
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


void Feed::on_pushButton_2_clicked()
{
  if (!chatDialog) {
        chatDialog = new ChatDialog(this); // Create dialog if not already created
    }
    chatDialog->show(); // Show the chat dialog
}


void Feed::on_pushButton_8_clicked()
{
    userPoints++; // Increment points
    QMessageBox::information(this, "Pickup Confirmed", "You have confirmed a pickup!");

    ui->frame->hide();
    //Hide the current frame


    if (!leaderboard) {
        leaderboard = new Leaderboard(this, userPoints);

    }else{
         leaderboard->updatePoints(userPoints);
    }

}

void Feed::on_pushButton_9_clicked()
{
    ui->frame_2->hide();
    //Hide the current frame
    on_pushButton_8_clicked(); // Same functionality for now
}

void Feed::on_pushButton_6_clicked()
{
    leaderboard = new class Leaderboard(this, userPoints);
    leaderboard->show();
}

