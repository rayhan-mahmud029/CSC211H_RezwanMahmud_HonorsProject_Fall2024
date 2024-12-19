/********************************************************************************
** Form generated from reading UI file 'leaderboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEADERBOARD_H
#define UI_LEADERBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Leaderboard
{
public:
    QLabel *label_points;
    QLabel *label_badges;
    QLabel *label_achievements;
    QLabel *label_rankings;
    QListWidget *listWidget_rankings;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QLabel *label_4;
    QFrame *frame_9;

    void setupUi(QDialog *Leaderboard)
    {
        if (Leaderboard->objectName().isEmpty())
            Leaderboard->setObjectName("Leaderboard");
        Leaderboard->resize(835, 600);
        Leaderboard->setStyleSheet(QString::fromUtf8("background-color:white;"));
        label_points = new QLabel(Leaderboard);
        label_points->setObjectName("label_points");
        label_points->setGeometry(QRect(470, 150, 40, 40));
        label_points->setStyleSheet(QString::fromUtf8("font-size: 24px; font-weight: bold; color: green;"));
        label_points->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_badges = new QLabel(Leaderboard);
        label_badges->setObjectName("label_badges");
        label_badges->setGeometry(QRect(200, 190, 460, 20));
        label_badges->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_achievements = new QLabel(Leaderboard);
        label_achievements->setObjectName("label_achievements");
        label_achievements->setGeometry(QRect(230, 220, 460, 20));
        label_achievements->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_rankings = new QLabel(Leaderboard);
        label_rankings->setObjectName("label_rankings");
        label_rankings->setGeometry(QRect(20, 300, 460, 20));
        label_rankings->setAlignment(Qt::AlignmentFlag::AlignLeading);
        listWidget_rankings = new QListWidget(Leaderboard);
        listWidget_rankings->setObjectName("listWidget_rankings");
        listWidget_rankings->setGeometry(QRect(20, 330, 781, 200));
        label_2 = new QLabel(Leaderboard);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 381, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Baloo Bhaijaan")});
        font.setPointSize(26);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: red;"));
        pushButton_3 = new QPushButton(Leaderboard);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(440, 10, 101, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Baloo 2")});
        font1.setPointSize(18);
        font1.setWeight(QFont::Medium);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: red;\n"
"font-weight: 500;"));
        pushButton_4 = new QPushButton(Leaderboard);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(540, 10, 101, 31));
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QString::fromUtf8("color: red;\n"
"font-weight: 500;"));
        pushButton_6 = new QPushButton(Leaderboard);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(640, 10, 151, 31));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("color: red;\n"
"font-weight: 500;"));
        label_4 = new QLabel(Leaderboard);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 50, 351, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: gray;"));
        frame_9 = new QFrame(Leaderboard);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(370, 80, 101, 101));
        frame_9->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/image/image/avatar.png);"));
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);

        retranslateUi(Leaderboard);

        QMetaObject::connectSlotsByName(Leaderboard);
    } // setupUi

    void retranslateUi(QDialog *Leaderboard)
    {
        Leaderboard->setWindowTitle(QCoreApplication::translate("Leaderboard", "Campus Connect | Leaderboard", nullptr));
        label_points->setText(QCoreApplication::translate("Leaderboard", "1", nullptr));
        label_badges->setStyleSheet(QCoreApplication::translate("Leaderboard", "font-size: 12px; color: #ff4500;", nullptr));
        label_badges->setText(QCoreApplication::translate("Leaderboard", "Badges: Social Butterfly", nullptr));
        label_achievements->setStyleSheet(QCoreApplication::translate("Leaderboard", "font-size: 12px; color: #ff4500;", nullptr));
        label_achievements->setText(QCoreApplication::translate("Leaderboard", "Achievements: First Delivery Success", nullptr));
        label_rankings->setStyleSheet(QCoreApplication::translate("Leaderboard", "font-size: 14px; font-weight: bold; color: #333333;", nullptr));
        label_rankings->setText(QCoreApplication::translate("Leaderboard", "Rankings:", nullptr));
        label_2->setText(QCoreApplication::translate("Leaderboard", "Campus Connect | Leaderboard", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Leaderboard", "Live Map", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Leaderboard", "Events", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Leaderboard", "Feed", nullptr));
        label_4->setText(QCoreApplication::translate("Leaderboard", "Borough of Manhattan Community College", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Leaderboard: public Ui_Leaderboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERBOARD_H
