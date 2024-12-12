#ifndef FEED_H
#define FEED_H

#include <QDialog>
#include "map.h"
#include "events.h"
#include "request.h"
#include "chatdialog.h"
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

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Feed *ui;
    map *map;
    events *events;
    Request *Request;
    ChatDialog *chatDialog;
};
#endif // FEED_H
