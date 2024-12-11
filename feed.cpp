#include "feed.h"
#include "ui_feed.h"

Feed::Feed(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Feed)
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

