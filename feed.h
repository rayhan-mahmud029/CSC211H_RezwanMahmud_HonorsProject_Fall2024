#ifndef FEED_H
#define FEED_H

#include <QDialog>
#include "map.h"
#include "events.h"
#include "request.h"
namespace Ui {
class Feed;
}

class Feed : public QDialog
{
    Q_OBJECT

public:
    explicit Feed(QWidget *parent = nullptr);
    ~Feed();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Feed *ui;
    map *map;
    events *events;
    Request *Request;
};
#endif // FEED_H
