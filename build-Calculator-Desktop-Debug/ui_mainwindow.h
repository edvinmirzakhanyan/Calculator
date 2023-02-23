/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLineEdit *display;
    QPushButton *b6;
    QPushButton *bsub;
    QPushButton *bclear;
    QPushButton *badd;
    QPushButton *bdiv;
    QPushButton *b5;
    QPushButton *b3;
    QPushButton *b4;
    QPushButton *bequal;
    QPushButton *b7;
    QPushButton *b1;
    QPushButton *b8;
    QPushButton *bsign;
    QPushButton *b2;
    QPushButton *bsqrt;
    QPushButton *b0;
    QPushButton *b9;
    QPushButton *bmul;
    QPushButton *bdot;
    QPushButton *bpercent;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(220, 275);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"background-color: black;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        display = new QLineEdit(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        display->setFont(font);
        display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(display, 0, 0, 1, 4);

        b6 = new QPushButton(centralwidget);
        b6->setObjectName(QString::fromUtf8("b6"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(b6->sizePolicy().hasHeightForWidth());
        b6->setSizePolicy(sizePolicy1);
        b6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(b6, 3, 2, 1, 1);

        bsub = new QPushButton(centralwidget);
        bsub->setObjectName(QString::fromUtf8("bsub"));
        sizePolicy1.setHeightForWidth(bsub->sizePolicy().hasHeightForWidth());
        bsub->setSizePolicy(sizePolicy1);
        bsub->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:orange;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:darkorange;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(bsub, 3, 3, 1, 1);

        bclear = new QPushButton(centralwidget);
        bclear->setObjectName(QString::fromUtf8("bclear"));
        sizePolicy1.setHeightForWidth(bclear->sizePolicy().hasHeightForWidth());
        bclear->setSizePolicy(sizePolicy1);
        bclear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:red;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:darkred;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(bclear, 1, 0, 1, 1);

        badd = new QPushButton(centralwidget);
        badd->setObjectName(QString::fromUtf8("badd"));
        sizePolicy1.setHeightForWidth(badd->sizePolicy().hasHeightForWidth());
        badd->setSizePolicy(sizePolicy1);
        badd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:orange;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:darkorange;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(badd, 4, 3, 1, 1);

        bdiv = new QPushButton(centralwidget);
        bdiv->setObjectName(QString::fromUtf8("bdiv"));
        sizePolicy1.setHeightForWidth(bdiv->sizePolicy().hasHeightForWidth());
        bdiv->setSizePolicy(sizePolicy1);
        bdiv->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:orange;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:darkorange;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(bdiv, 1, 3, 1, 1);

        b5 = new QPushButton(centralwidget);
        b5->setObjectName(QString::fromUtf8("b5"));
        sizePolicy1.setHeightForWidth(b5->sizePolicy().hasHeightForWidth());
        b5->setSizePolicy(sizePolicy1);
        b5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(b5, 3, 1, 1, 1);

        b3 = new QPushButton(centralwidget);
        b3->setObjectName(QString::fromUtf8("b3"));
        sizePolicy1.setHeightForWidth(b3->sizePolicy().hasHeightForWidth());
        b3->setSizePolicy(sizePolicy1);
        b3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(b3, 2, 2, 1, 1);

        b4 = new QPushButton(centralwidget);
        b4->setObjectName(QString::fromUtf8("b4"));
        sizePolicy1.setHeightForWidth(b4->sizePolicy().hasHeightForWidth());
        b4->setSizePolicy(sizePolicy1);
        b4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(b4, 3, 0, 1, 1);

        bequal = new QPushButton(centralwidget);
        bequal->setObjectName(QString::fromUtf8("bequal"));
        sizePolicy1.setHeightForWidth(bequal->sizePolicy().hasHeightForWidth());
        bequal->setSizePolicy(sizePolicy1);
        bequal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#228B22;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:#006400;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(bequal, 6, 3, 1, 1);

        b7 = new QPushButton(centralwidget);
        b7->setObjectName(QString::fromUtf8("b7"));
        sizePolicy1.setHeightForWidth(b7->sizePolicy().hasHeightForWidth());
        b7->setSizePolicy(sizePolicy1);
        b7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(b7, 4, 0, 1, 1);

        b1 = new QPushButton(centralwidget);
        b1->setObjectName(QString::fromUtf8("b1"));
        sizePolicy1.setHeightForWidth(b1->sizePolicy().hasHeightForWidth());
        b1->setSizePolicy(sizePolicy1);
        b1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(b1, 2, 0, 1, 1);

        b8 = new QPushButton(centralwidget);
        b8->setObjectName(QString::fromUtf8("b8"));
        sizePolicy1.setHeightForWidth(b8->sizePolicy().hasHeightForWidth());
        b8->setSizePolicy(sizePolicy1);
        b8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(b8, 4, 1, 1, 1);

        bsign = new QPushButton(centralwidget);
        bsign->setObjectName(QString::fromUtf8("bsign"));
        sizePolicy1.setHeightForWidth(bsign->sizePolicy().hasHeightForWidth());
        bsign->setSizePolicy(sizePolicy1);
        bsign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(bsign, 6, 0, 1, 1);

        b2 = new QPushButton(centralwidget);
        b2->setObjectName(QString::fromUtf8("b2"));
        sizePolicy1.setHeightForWidth(b2->sizePolicy().hasHeightForWidth());
        b2->setSizePolicy(sizePolicy1);
        b2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(b2, 2, 1, 1, 1);

        bsqrt = new QPushButton(centralwidget);
        bsqrt->setObjectName(QString::fromUtf8("bsqrt"));
        sizePolicy1.setHeightForWidth(bsqrt->sizePolicy().hasHeightForWidth());
        bsqrt->setSizePolicy(sizePolicy1);
        bsqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:orange;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:darkorange;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(bsqrt, 1, 2, 1, 1);

        b0 = new QPushButton(centralwidget);
        b0->setObjectName(QString::fromUtf8("b0"));
        sizePolicy1.setHeightForWidth(b0->sizePolicy().hasHeightForWidth());
        b0->setSizePolicy(sizePolicy1);
        b0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(b0, 6, 1, 1, 1);

        b9 = new QPushButton(centralwidget);
        b9->setObjectName(QString::fromUtf8("b9"));
        sizePolicy1.setHeightForWidth(b9->sizePolicy().hasHeightForWidth());
        b9->setSizePolicy(sizePolicy1);
        b9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(b9, 4, 2, 1, 1);

        bmul = new QPushButton(centralwidget);
        bmul->setObjectName(QString::fromUtf8("bmul"));
        sizePolicy1.setHeightForWidth(bmul->sizePolicy().hasHeightForWidth());
        bmul->setSizePolicy(sizePolicy1);
        bmul->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:orange;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:darkorange;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(bmul, 2, 3, 1, 1);

        bdot = new QPushButton(centralwidget);
        bdot->setObjectName(QString::fromUtf8("bdot"));
        sizePolicy1.setHeightForWidth(bdot->sizePolicy().hasHeightForWidth());
        bdot->setSizePolicy(sizePolicy1);
        bdot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:#C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:#A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(bdot, 6, 2, 1, 1);

        bpercent = new QPushButton(centralwidget);
        bpercent->setObjectName(QString::fromUtf8("bpercent"));
        sizePolicy1.setHeightForWidth(bpercent->sizePolicy().hasHeightForWidth());
        bpercent->setSizePolicy(sizePolicy1);
        bpercent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:orange;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:darkorange;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(bpercent, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        display->setText(QApplication::translate("MainWindow", "0", nullptr));
        b6->setText(QApplication::translate("MainWindow", "6", nullptr));
        bsub->setText(QApplication::translate("MainWindow", "-", nullptr));
        bclear->setText(QApplication::translate("MainWindow", "AC", nullptr));
        badd->setText(QApplication::translate("MainWindow", "+", nullptr));
        bdiv->setText(QApplication::translate("MainWindow", "/", nullptr));
        b5->setText(QApplication::translate("MainWindow", "5", nullptr));
        b3->setText(QApplication::translate("MainWindow", "3", nullptr));
        b4->setText(QApplication::translate("MainWindow", "4", nullptr));
        bequal->setText(QApplication::translate("MainWindow", "=", nullptr));
        b7->setText(QApplication::translate("MainWindow", "7", nullptr));
        b1->setText(QApplication::translate("MainWindow", "1", nullptr));
        b8->setText(QApplication::translate("MainWindow", "8", nullptr));
        bsign->setText(QApplication::translate("MainWindow", "+/-", nullptr));
        b2->setText(QApplication::translate("MainWindow", "2", nullptr));
        bsqrt->setText(QApplication::translate("MainWindow", "\342\210\232", nullptr));
        b0->setText(QApplication::translate("MainWindow", "0", nullptr));
        b9->setText(QApplication::translate("MainWindow", "9", nullptr));
        bmul->setText(QApplication::translate("MainWindow", "*", nullptr));
        bdot->setText(QApplication::translate("MainWindow", ".", nullptr));
        bpercent->setText(QApplication::translate("MainWindow", "%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
