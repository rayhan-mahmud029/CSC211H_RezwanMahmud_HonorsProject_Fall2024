#ifndef EVENT_H
#define EVENT_H

#include <QDialog>
#include "leaderboard.h"
#include <QMessageBox>

namespace Ui {
class Event;
}

class Event : public QDialog
{
    Q_OBJECT

public:
    explicit Event(QWidget *parent = nullptr);
    ~Event();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Event *ui;
    Leaderboard *leaderboard;
    int userPoints; // Points for the user
    void saveDataToFile(const QString &eventName, const QString &eventLocation, const QString &eventDetails);
};

#endif // EVENT_H
