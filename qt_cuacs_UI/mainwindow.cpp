#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setCentralWidget(ui->textEdit);
    this->setStyleSheet("background-color: #EAEAEA;");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("Welcome Staff!");
    ui->label->setStyleSheet("color: rgb(128,0,0)");
    ui->pushButton->setText("View Animals");
    ui->pushButton_2->setText("Add Animal");
    delete ui->lineEdit_3;

}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("Welcome Client!");
    ui->label->setStyleSheet("color: rgb(128,0,0)");
    delete ui->pushButton;
    delete ui->pushButton_2;
    delete ui->lineEdit_3;
}
