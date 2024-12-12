#include "event.h"
#include "ui_event.h"

Event::Event(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Event)
{
    ui->setupUi(this);
}

Event::~Event()
{
    delete ui;
}
