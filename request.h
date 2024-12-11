#ifndef REQUEST_H
#define REQUEST_H

#include <QDialog>

namespace Ui {
class Request;
}

class Request : public QDialog
{
    Q_OBJECT

public:
    explicit Request(QWidget *parent = nullptr);
    ~Request();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Request *ui;
    void saveDataToFile(const QString &storeName, const QString &storeLocation, const QString &dropOffLocation);
};

#endif // REQUEST_H
