#include "events.h"
#include "ui_events.h"

events::events(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::events)
{
    ui->setupUi(this);
}

events::~events()
{
    delete ui;
}

void events::on_pushButton_3_clicked()
{
    hide();
    map = new class map(this);
    map->show();
}


void events::on_pushButton_7_clicked()
{
    Event = new class Event(this);
    Event->show();
}

