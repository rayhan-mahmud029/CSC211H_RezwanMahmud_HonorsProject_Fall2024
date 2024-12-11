/********************************************************************************
** Form generated from reading UI file 'feed.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEED_H
#define UI_FEED_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Feed
{
public:
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
    QFrame *frame;
    QFrame *frame_3;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QFrame *frame_2;
    QFrame *frame_4;
    QLabel *label_5;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_2;
    QFrame *frame_5;
    QFrame *frame_6;
    QLabel *label_6;
    QTextBrowser *textBrowser_3;
    QPushButton *pushButton_5;
    QFrame *frame_7;
    QFrame *frame_8;
    QLabel *label_7;
    QTextBrowser *textBrowser_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_7;

    void setupUi(QDialog *Feed)
    {
        if (Feed->objectName().isEmpty())
            Feed->setObjectName("Feed");
        Feed->resize(904, 571);
        Feed->setStyleSheet(QString::fromUtf8("background-color: white;"));
        label_2 = new QLabel(Feed);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 10, 381, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Baloo Bhaijaan")});
        font.setPointSize(34);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: red;"));
        label_4 = new QLabel(Feed);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 50, 351, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: gray;"));
        label = new QLabel(Feed);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 100, 271, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Narrow")});
        font1.setPointSize(22);
        font1.setBold(true);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: black;"));
        frame = new QFrame(Feed);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(80, 180, 321, 311));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 0, 321, 151));
        frame_3->setStyleSheet(QString::fromUtf8("image: url(:/image/image/fd.png);\n"
"background-color: #4C3D49;"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 160, 111, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        font2.setPointSize(20);
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("color: balck;"));
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(10, 200, 256, 71));
        textBrowser->setStyleSheet(QString::fromUtf8("border: none;"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 270, 131, 32));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: black;"));
        frame_2 = new QFrame(Feed);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(480, 180, 321, 311));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setGeometry(QRect(0, 0, 321, 151));
        frame_4->setStyleSheet(QString::fromUtf8("image: url(:/image/image/fd.png);\n"
"background-color: #4C3D49;"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(120, 160, 111, 31));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color: balck;"));
        textBrowser_2 = new QTextBrowser(frame_2);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(20, 200, 291, 81));
        textBrowser_2->setStyleSheet(QString::fromUtf8("border: none;\n"
""));
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(100, 270, 131, 32));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: black;"));
        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(400, 0, 321, 311));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        frame_6 = new QFrame(frame_5);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(0, 0, 321, 151));
        frame_6->setStyleSheet(QString::fromUtf8("image: url(:/image/image/fd.png);\n"
"background-color: #4C3D49;"));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        label_6 = new QLabel(frame_5);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(120, 160, 111, 31));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("color: balck;"));
        textBrowser_3 = new QTextBrowser(frame_5);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(20, 200, 291, 81));
        textBrowser_3->setStyleSheet(QString::fromUtf8("border: none;\n"
""));
        pushButton_5 = new QPushButton(frame_5);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(100, 270, 131, 32));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: black;"));
        frame_7 = new QFrame(frame_2);
        frame_7->setObjectName("frame_7");
        frame_7->setGeometry(QRect(0, 0, 321, 311));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        frame_8 = new QFrame(frame_7);
        frame_8->setObjectName("frame_8");
        frame_8->setGeometry(QRect(0, 0, 321, 151));
        frame_8->setStyleSheet(QString::fromUtf8("image: url(:/image/image/fd.png);\n"
"background-color: #4C3D49;"));
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        label_7 = new QLabel(frame_7);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(110, 160, 111, 31));
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color: balck;"));
        textBrowser_4 = new QTextBrowser(frame_7);
        textBrowser_4->setObjectName("textBrowser_4");
        textBrowser_4->setGeometry(QRect(10, 200, 256, 71));
        textBrowser_4->setStyleSheet(QString::fromUtf8("border: none;"));
        pushButton_6 = new QPushButton(frame_7);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(90, 270, 131, 32));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: red;\n"
"color: black;"));
        pushButton_3 = new QPushButton(Feed);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(520, 10, 121, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Baloo 2")});
        font3.setPointSize(24);
        font3.setWeight(QFont::Medium);
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("color: red;\n"
"font-weight: 500;"));
        pushButton_4 = new QPushButton(Feed);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(650, 10, 121, 41));
        pushButton_4->setFont(font3);
        pushButton_4->setStyleSheet(QString::fromUtf8("color: red;\n"
"font-weight: 500;"));
        pushButton_7 = new QPushButton(Feed);
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

        retranslateUi(Feed);

        QMetaObject::connectSlotsByName(Feed);
    } // setupUi

    void retranslateUi(QDialog *Feed)
    {
        Feed->setWindowTitle(QCoreApplication::translate("Feed", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Feed", "Campus Connect | Feed", nullptr));
        label_4->setText(QCoreApplication::translate("Feed", "Borough of Manhattan Community College", nullptr));
        label->setText(QCoreApplication::translate("Feed", "Food Delivery Requests:", nullptr));
        label_3->setText(QCoreApplication::translate("Feed", "Starbucks", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Feed", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Name: Mouad Oulouali</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Pickup: 120 Church St, New York, NY 10007</span></p>\n"
"<p style=\" margin-top:0px; margi"
                        "n-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Dropoff: Fiterman, Cafetria</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Note: Order No: #9459, Item details</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Feed", "Chat with Mouad ", nullptr));
        label_5->setText(QCoreApplication::translate("Feed", "Chipotle", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("Feed", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Name: Tanvir Siyam</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Pickup: 275 Greenwich St, New York, NY 10007</span></p>\n"
"<p style=\" margin-top:0px; marg"
                        "in-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Dropoff: Main Building, Infront of Panther Station</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Note: Order No: #9459, Item details</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Feed", "Chat with Tanvir", nullptr));
        label_6->setText(QCoreApplication::translate("Feed", "Chipotle", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("Feed", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Name: Tanvir Siyam</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Pickup: 275 Greenwich St, New York, NY 10007</span></p>\n"
"<p style=\" margin-top:0px; marg"
                        "in-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Dropoff: Main Building, Infront of Panther Station</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Note: Order No: #9459, Item details</span></p></body></html>", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Feed", "Chat with Tanvir", nullptr));
        label_7->setText(QCoreApplication::translate("Feed", "Starbucks", nullptr));
        textBrowser_4->setHtml(QCoreApplication::translate("Feed", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Name: Mouad Oulouali</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Pickup: 120 Church St, New York, NY 10007</span></p>\n"
"<p style=\" margin-top:0px; margi"
                        "n-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Dropoff: Fiterman, Cafetria</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica'; font-size:12pt; color:#000000;\">Note: Order No: #9459, Item details</span></p></body></html>", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Feed", "Chat with Mouad ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Feed", "Live Map", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Feed", "Events", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Feed", "Request Food Delivery", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Feed: public Ui_Feed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEED_H
