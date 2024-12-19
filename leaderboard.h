#ifndef LEADERBOARD_H
#define LEADERBOARD_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Leaderboard; }
QT_END_NAMESPACE

class Leaderboard : public QDialog
{
    Q_OBJECT

public:
    explicit Leaderboard(QWidget *parent = nullptr, int points = 0);
    ~Leaderboard();

    void updatePoints(int points);
    int getUserPoints();
    int currentPoints;
private:
    Ui::Leaderboard *ui;
};

#endif // LEADERBOARD_H
