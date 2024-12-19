#include "event.h"
#include "ui_event.h"
#include <QFile>
#include <QDir>
#include <QTextStream>
#include <QMessageBox>

Event::Event(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Event)
    , leaderboard(new Leaderboard)
    , userPoints(0)
{
    ui->setupUi(this);
    if (leaderboard) {
        userPoints = leaderboard->currentPoints; // Accessing currentPoints from Leaderboard
    }
}

Event::~Event()
{
    delete ui;
}

void Event::on_pushButton_clicked()
{
    hide();
    userPoints++; // Increment points
    QMessageBox::information(this, "Event Posted", "You have got 1 point!");

    // Update points in leaderboard
    if (!leaderboard) {
        leaderboard = new Leaderboard(this, userPoints);

    }else{
        leaderboard->updatePoints(userPoints);
    }


    // store data in a text file
    QString eventName = ui->lineEdit_username->text();
    QString eventLocation = ui->lineEdit_email->text();
    QString eventDetails = ui->lineEdit_email_2->text();

    if (eventName.isEmpty() || eventLocation.isEmpty() || eventDetails.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    saveDataToFile(eventName, eventLocation, eventDetails);

}

void Event::saveDataToFile(const QString &eventName, const QString &eventLocation, const QString &eventDetails)
{
    // Define the file path
    QString filePath = "/Users/rezwanmahmud/Documents/QtApplications/CampusConnect/events_data.txt";
    QFile file(filePath);

    if (file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << "Event Name: " << eventName << "\n";
        out << "Event Location: " << eventLocation << "\n";
        out << "Event Details: " << eventDetails << "\n";
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
