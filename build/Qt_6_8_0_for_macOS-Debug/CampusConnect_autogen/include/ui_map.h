/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_H
#define UI_MAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_map
{
public:
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLabel *label_4;
    QFrame *frame;
    QFrame *frame_9;

    void setupUi(QDialog *map)
    {
        if (map->objectName().isEmpty())
            map->setObjectName("map");
        map->resize(903, 578);
        map->setStyleSheet(QString::fromUtf8("background-color:white;"));
        pushButton_4 = new QPushButton(map);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(630, 10, 121, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Baloo 2")});
        font.setPointSize(24);
        font.setWeight(QFont::Medium);
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("color: red;\n"
"font-weight: 500;"));
        label_2 = new QLabel(map);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 451, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Baloo Bhaijaan")});
        font1.setPointSize(34);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: red;"));
        label_4 = new QLabel(map);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 50, 351, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: gray;"));
        frame = new QFrame(map);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(50, 130, 791, 381));
        frame->setStyleSheet(QString::fromUtf8("image: url(:/image/image/map.png);\n"
"border: none;"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_9 = new QFrame(map);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(810, 10, 80, 80));
        frame_9->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/image/image/avatar.png);"));
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);

        retranslateUi(map);

        QMetaObject::connectSlotsByName(map);
    } // setupUi

    void retranslateUi(QDialog *map)
    {
        map->setWindowTitle(QCoreApplication::translate("map", "Campus Connect | Feed", nullptr));
        pushButton_4->setText(QCoreApplication::translate("map", "Events", nullptr));
        label_2->setText(QCoreApplication::translate("map", "Campus Connect | Live Map", nullptr));
        label_4->setText(QCoreApplication::translate("map", "Borough of Manhattan Community College", nullptr));
    } // retranslateUi

};

namespace Ui {
    class map: public Ui_map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
