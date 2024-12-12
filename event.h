#ifndef EVENT_H
#define EVENT_H

#include <QDialog>

namespace Ui {
class Event;
}

class Event : public QDialog
{
    Q_OBJECT

public:
    explicit Event(QWidget *parent = nullptr);
    ~Event();

private:
    Ui::Event *ui;
};

#endif // EVENT_H
