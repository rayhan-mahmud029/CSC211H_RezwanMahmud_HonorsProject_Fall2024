#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // Check if a default connection already exists and remove it
    if (QSqlDatabase::contains("qt_sql_default_connection")) {
        QSqlDatabase::removeDatabase("qt_sql_default_connection");
    }

    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("/Users/rezwanmahmud/Documents/QtApplications/CampusConnect/SQLiteDB/auth.db");

    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_password->text();

    if (sqlitedb.open()) {
        QSqlQuery query(sqlitedb);
        query.prepare("SELECT * FROM authDetails WHERE username = :username AND password = :password");
        query.bindValue(":username", username);
        query.bindValue(":password", password);

        QMessageBox msgBox;
        if (query.exec()) {
            if (query.next()) {
                // Login successful
                // QMessageBox::information(this, "Login", "Login Successful!");
                hide();
                feed = new Feed(this);
                feed->show();
            } else {
                // Invalid login
                msgBox.setIcon(QMessageBox::Warning);
                msgBox.setText("Invalid username or password.");
                msgBox.setWindowTitle("Login Failed");
                msgBox.exec();
            }
        } else {
            // Database query execution error
            msgBox.setIcon(QMessageBox::Critical);
            msgBox.setText("Login failed: Database query error.");
            msgBox.setWindowTitle("Database Error");
            msgBox.exec();
        }
    } else {
        // Handle database connection error
        QMessageBox::critical(this, "Connection Error", "Failed to connect to the database.");
    }
    sqlitedb.close(); // Close the database connection after use
}
void MainWindow::on_commandLinkButton_clicked()
{
    signup = new Signup(this);
    signup->show();
}

