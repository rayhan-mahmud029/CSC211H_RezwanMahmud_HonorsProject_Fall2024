#include "map.h"
#include "ui_map.h"  // Include the generated UI header


map::map(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::map)
{
    ui->setupUi(this);
}

map::~map()
{
    delete ui;
}
