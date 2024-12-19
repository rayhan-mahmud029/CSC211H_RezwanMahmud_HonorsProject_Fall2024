#include "leaderboard.h"
#include "ui_leaderboard.h"

Leaderboard::Leaderboard(QWidget *parent, int points)
    : QDialog(parent)
    , ui(new Ui::Leaderboard)
    , currentPoints(points)
{
    ui->setupUi(this);
    ui->label_points->setText(QString::number(currentPoints));
}

Leaderboard::~Leaderboard()
{
    delete ui;
}

void Leaderboard::updatePoints(int points)
{
    currentPoints = points;
    ui->label_points->setText(QString::number(currentPoints));
}
int Leaderboard::getUserPoints()
{
    return this->currentPoints;
}
