#ifndef EVENTS_H
#define EVENTS_H

#include <QDialog>
#include "map.h"
#include "event.h"

namespace Ui {
class events;
}

class events : public QDialog
{
    Q_OBJECT

public:
    explicit events(QWidget *parent = nullptr);
    ~events();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::events *ui;
    map *map;
    Event *Event;
};

#endif // EVENTS_H
