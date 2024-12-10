#include "signup.h"
#include "ui_signup.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>

Signup::Signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Signup)
{
    ui->setupUi(this);
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_pushButton_signup_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString email = ui->lineEdit_email->text();
    QString password = ui->lineEdit_password->text();

    // Check if the fields are empty
    if (username.isEmpty() || email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Incomplete Data", "Please fill all fields!");
        return;
    }

    // Connect to the database
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("/Users/rezwanmahmud/Documents/QtApplications/CampusConnect/SQLiteDB/auth.db");

    if (sqlitedb.open()) {
        QSqlQuery query(sqlitedb);

        // Insert the new user into the database
        query.prepare("INSERT INTO authDetails (username, email, password) VALUES (:username, :email, :password)");
        query.bindValue(":username", username);
        query.bindValue(":email", email);
        query.bindValue(":password", password);

        if (query.exec()) {
            QMessageBox::information(this, "Success", "Account created successfully!");
            this->close();  // Close the signup dialog
        } else {
            QMessageBox::critical(this, "Error", "Failed to create account. Try again.");
        }
    } else {
        QMessageBox::critical(this, "Database Error", "Failed to connect to the database.");
    }

    sqlitedb.close();
}

void Signup::on_commandLinkButton_clicked()
{
    hide();
}

