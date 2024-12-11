#include "request.h"
#include "ui_request.h"
// request.cpp
#include "request.h"
#include "ui_request.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Request::Request(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Request)
{
    ui->setupUi(this);
}

Request::~Request()
{
    delete ui;
}

void Request::on_pushButton_clicked()
{
    hide();
    QString storeName = ui->lineEdit_username->text();
    QString storeLocation = ui->lineEdit_email->text();
    QString dropOffLocation = ui->lineEdit_email_2->text();

    if (storeName.isEmpty() || storeLocation.isEmpty() || dropOffLocation.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    saveDataToFile(storeName, storeLocation, dropOffLocation);
}

void Request::saveDataToFile(const QString &storeName, const QString &storeLocation, const QString &dropOffLocation)
{
    QFile file("requests_data.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << "Store Name: " << storeName << "\n";
        out << "Store Location: " << storeLocation << "\n";
        out << "DropOff Location: " << dropOffLocation << "\n";
        out << "----------------------\n";
        file.close();
        QMessageBox::information(this, "Success", "Data saved successfully.");
    } else {
        QMessageBox::critical(this, "Error", "Could not open file for writing.");
    }
}


