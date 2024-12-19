#include "request.h"
#include "ui_request.h"
#include <QFile>
#include <QDir>
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
    // Define the file path
    QString filePath = "/Users/rezwanmahmud/Documents/QtApplications/CampusConnect/requests_data.txt";
    QFile file(filePath);

    if (file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << "Store Name: " << storeName << "\n";
        out << "Store Location: " << storeLocation << "\n";
        out << "DropOff Location: " << dropOffLocation << "\n";
        out << "----------------------\n";

        out.flush(); // Explicitly flush the stream
        file.close();

        QMessageBox::information(this, "Success",
                                 QString("Data saved successfully to:\n%1").arg(filePath));
    } else {
        QMessageBox::critical(this, "Error",
                              QString("Could not open file for writing:\n%1").arg(filePath));
    }
}


