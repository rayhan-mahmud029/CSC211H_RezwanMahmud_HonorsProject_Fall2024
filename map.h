#ifndef MAP_H
#define MAP_H

#include <QDialog>
#include "events.h"
namespace Ui {
class map;
}

class map : public QDialog
{
    Q_OBJECT

public:
    explicit map(QWidget *parent = nullptr);
    ~map();

private:
    Ui::map *ui;
    events *events;
};

#endif // MAP_H
