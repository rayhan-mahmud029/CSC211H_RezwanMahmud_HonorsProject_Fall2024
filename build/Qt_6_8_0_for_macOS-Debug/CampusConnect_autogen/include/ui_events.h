/********************************************************************************
** Form generated from reading UI file 'events.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTS_H
#define UI_EVENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_events
{
public:
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QFrame *frame_2;
    QLabel *label_5;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_2;
    QFrame *frame_4;
    QFrame *frame;
    QFrame *frame_3;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_7;
    QFrame *frame_9;

    void setupUi(QDialog *events)
    {
        if (events->objectName().isEmpty())
            events->setObjectName("events");
        events->resize(898, 589);
        events->setStyleSheet(QString::fromUtf8("background-color:  white;"));
        pushButton_3 = new QPushButton(events);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(520, 10, 121, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Baloo 2")});
        font.setPointSize(24);
        font.setWeight(QFont::Medium);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: red;\n"
"font-weight: 500;"));
        label = new QLabel(events);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 100, 271, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Narrow")});
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: black;"));
        label_2 = new QLabel(events);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 10, 381, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Baloo Bhaijaan")});
        font2.setPointSize(34);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: red;"));
        label_4 = new QLabel(events);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 50, 351, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: gray;"));
        frame_2 = new QFrame(events);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(480, 170, 321, 311));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 160, 111, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        font3.setPointSize(20);
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: balck;"));
        textBrowser_2 = new QTextBrowser(frame_2);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(20, 210, 291, 81));
        textBrowser_2->setStyleSheet(QString::fromUtf8("border: none;\n"
""));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(90, 270, 141, 32));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: black;"));
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(0, 0, 321, 151));
        frame_4->setStyleSheet(QString::fromUtf8("image: url(:/image/image/c.png);\n"
"background-color: #4C3D49;"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        frame = new QFrame(events);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(80, 170, 321, 311));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 0, 321, 151));
        frame_3->setStyleSheet(QString::fromUtf8("image: url(:/image/image/pp.jpg);\n"
"background-color: #4C3D49;"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 160, 111, 31));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: balck;"));
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 210, 256, 71));
        textBrowser->setStyleSheet(QString::fromUtf8("border: none;"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 270, 141, 32));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: black;"));
        pushButton_7 = new QPushButton(events);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(80, 510, 721, 41));
        QFont font4;
        font4.setBold(false);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        pushButton_7->setFont(font4);
        pushButton_7->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_7->setMouseTracking(false);
        pushButton_7->setStyleSheet(QString::fromUtf8("color : black;\n"
"font-size: 15px;\n"
"background-color: red;"));
        frame_9 = new QFrame(events);
        frame_9->setObjectName("frame_9");
        frame_9->setGeometry(QRect(800, 10, 80, 80));
        frame_9->setStyleSheet(QString::fromUtf8("border: none;\n"
"image: url(:/image/image/avatar.png);"));
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);

        retranslateUi(events);

        QMetaObject::connectSlotsByName(events);
    } // setupUi

    void retranslateUi(QDialog *events)
    {
        events->setWindowTitle(QCoreApplication::translate("events", "Campus Connect | Feed", nullptr));
        pushButton_3->setText(QCoreApplication::translate("events", "Live Map", nullptr));
        label->setText(QCoreApplication::translate("events", "Events:", nullptr));
        label_2->setText(QCoreApplication::translate("events", "Campus Connect | Feed", nullptr));
        label_4->setText(QCoreApplication::translate("events", "Borough of Manhattan Community College", nullptr));
        label_5->setText(QCoreApplication::translate("events", "Career Fair", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("events", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Place: Mian Building, Gymnasium</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Details: detials about event</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("events", "Chat with Organizer ", nullptr));
        label_3->setText(QCoreApplication::translate("events", "Free Food", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("events", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Place: Fiterman, F901</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Detials: detials about event</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("events", "Chat with Organizer ", nullptr));
        pushButton_7->setText(QCoreApplication::translate("events", "Post Event Informaiton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class events: public Ui_events {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTS_H
