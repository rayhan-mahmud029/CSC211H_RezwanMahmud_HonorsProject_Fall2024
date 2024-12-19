#include "signup.h"
#include "ui_signup.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionMatch>

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
    QString username = ui->lineEdit_email->text();
    QString password = ui->lineEdit_password->text();

    // Check if the fields are empty
    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Incomplete Data", "Please fill all fields!");
        return;
    }

    //check for valid BMCC email(contains .stu.bmcc.cuny.edu)
    QRegularExpression emailRegex("^[a-zA-Z0-9._%+-]+@stu\\.bmcc\\.cuny\\.edu$");
    QRegularExpressionMatch match = emailRegex.match(username);

    if (!match.hasMatch()) {
        QMessageBox::warning(this, "Invalid Email", "Please enter a valid BMCC email (e.g., yourname@xxx.stu.bmcc.cuny.edu).");
        return;
    }

    // Connect to the database
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("/Users/rezwanmahmud/Documents/QtApplications/CampusConnect/SQLiteDB/auth.db");

    if (sqlitedb.open()) {
        QSqlQuery query(sqlitedb);
        query.prepare("INSERT INTO authDetails (username, password) VALUES (:username, :password)");
        query.bindValue(":username", username);
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

