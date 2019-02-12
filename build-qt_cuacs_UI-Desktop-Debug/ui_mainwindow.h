/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QLabel *label_14;
    QLabel *label_15;
    QWidget *page_2;
    QPushButton *pushButton_7;
    QLabel *label;
    QLabel *label_16;
    QWidget *page_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_17;
    QWidget *page_4;
    QTableView *tableView;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_3;
    QLabel *label_18;
    QWidget *page_5;
    QTableView *tableView_2;
    QLineEdit *lineEdit_16;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_21;
    QLineEdit *lineEdit_22;
    QLineEdit *lineEdit_23;
    QLineEdit *lineEdit_24;
    QLineEdit *lineEdit_25;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QLabel *label_19;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(903, 606);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 903, 561));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(160, 370, 141, 51));
        QFont font;
        font.setPointSize(10);
        pushButton_4->setFont(font);
        pushButton_3 = new QPushButton(page);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(590, 370, 141, 51));
        pushButton_3->setFont(font);
        label_14 = new QLabel(page);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(330, 160, 221, 51));
        QFont font1;
        font1.setPointSize(50);
        label_14->setFont(font1);
        label_15 = new QLabel(page);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(0, 0, 121, 41));
        QFont font2;
        font2.setPointSize(15);
        label_15->setFont(font2);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        pushButton_7 = new QPushButton(page_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(360, 350, 141, 51));
        pushButton_7->setFont(font);
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 120, 311, 61));
        QFont font3;
        font3.setPointSize(30);
        label->setFont(font3);
        label_16 = new QLabel(page_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(0, 0, 121, 41));
        label_16->setFont(font2);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        pushButton = new QPushButton(page_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 350, 141, 51));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(page_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(610, 360, 141, 51));
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 130, 311, 61));
        label_2->setFont(font3);
        label_17 = new QLabel(page_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(0, 0, 121, 41));
        label_17->setFont(font2);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        tableView = new QTableView(page_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(60, 100, 791, 241));
        pushButton_5 = new QPushButton(page_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(160, 380, 141, 51));
        pushButton_5->setFont(font);
        pushButton_6 = new QPushButton(page_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(570, 380, 141, 51));
        pushButton_6->setFont(font);
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 30, 311, 61));
        label_3->setFont(font3);
        label_18 = new QLabel(page_4);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(0, 0, 121, 41));
        label_18->setFont(font2);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        tableView_2 = new QTableView(page_5);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(380, 40, 451, 331));
        lineEdit_16 = new QLineEdit(page_5);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(110, 350, 121, 25));
        label_4 = new QLabel(page_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 80, 16, 21));
        label_5 = new QLabel(page_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 110, 41, 21));
        label_6 = new QLabel(page_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 140, 31, 21));
        label_7 = new QLabel(page_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 170, 31, 21));
        label_8 = new QLabel(page_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 200, 41, 21));
        label_9 = new QLabel(page_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 230, 41, 21));
        label_10 = new QLabel(page_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 260, 51, 21));
        label_11 = new QLabel(page_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 290, 41, 21));
        label_12 = new QLabel(page_5);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(40, 320, 61, 21));
        label_13 = new QLabel(page_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(40, 350, 61, 21));
        lineEdit_17 = new QLineEdit(page_5);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(110, 320, 121, 25));
        lineEdit_18 = new QLineEdit(page_5);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(90, 290, 141, 25));
        lineEdit_19 = new QLineEdit(page_5);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(90, 260, 141, 25));
        lineEdit_20 = new QLineEdit(page_5);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(90, 230, 141, 25));
        lineEdit_21 = new QLineEdit(page_5);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(70, 200, 161, 25));
        lineEdit_22 = new QLineEdit(page_5);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));
        lineEdit_22->setGeometry(QRect(70, 170, 161, 25));
        lineEdit_23 = new QLineEdit(page_5);
        lineEdit_23->setObjectName(QStringLiteral("lineEdit_23"));
        lineEdit_23->setGeometry(QRect(80, 140, 151, 25));
        lineEdit_24 = new QLineEdit(page_5);
        lineEdit_24->setObjectName(QStringLiteral("lineEdit_24"));
        lineEdit_24->setGeometry(QRect(80, 110, 151, 25));
        lineEdit_25 = new QLineEdit(page_5);
        lineEdit_25->setObjectName(QStringLiteral("lineEdit_25"));
        lineEdit_25->setGeometry(QRect(60, 80, 171, 25));
        pushButton_8 = new QPushButton(page_5);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(150, 380, 83, 25));
        pushButton_9 = new QPushButton(page_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(530, 420, 141, 51));
        pushButton_9->setFont(font);
        pushButton_10 = new QPushButton(page_5);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(60, 380, 83, 25));
        label_19 = new QLabel(page_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(0, 0, 121, 41));
        label_19->setFont(font2);
        stackedWidget->addWidget(page_5);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 903, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Client", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Staff", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "cuACS", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "4our People", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label->setText(QString());
        label_16->setText(QApplication::translate("MainWindow", "4our People", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "View Animals", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Add Animal", Q_NULLPTR));
        label_2->setText(QString());
        label_17->setText(QApplication::translate("MainWindow", "4our People", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Homepage", Q_NULLPTR));
        label_3->setText(QString());
        label_18->setText(QApplication::translate("MainWindow", "4our People", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Id", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Type", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Sex", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Age", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Height", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Colour", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Breed", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Neutered", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Condition", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Homepage", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "4our People", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
