#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QPrinter>
#include <QPrintDialog>
#include "Shelter.h"
#include "login.h"
#include "AnimalList.h"
#include "View.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString currFile = "";
    QPushButton *m_button;
    Shelter shelter;
    View view;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_16_clicked();
    void on_pushButton_17_clicked();
    void on_pushButton_18_clicked();
    void on_pushButton_21_clicked();
    void on_pushButton_19_clicked();
    void on_pushButton_20_clicked();
    //void on_pushButton_22_clicked();
    void on_comboBox_currentIndexChanged(const QString &arg1);
    void on_tableView_2_activated(const QModelIndex &index);
    void on_listView_2_activated(const QModelIndex &index);
    //void on_pushButton_23_clicked();
    void on_comboBox_2_currentIndexChanged(const QString &arg1);
    void on_tableView_5_activated(const QModelIndex &index);
    void on_listView_3_activated(const QModelIndex &index);
    void on_pushButton_24_clicked();
    void on_pushButton_25_clicked();
};

#endif // MAINWINDOW_H
