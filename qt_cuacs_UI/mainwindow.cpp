#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include <QMessageBox>
#include <QSqlQueryModel>

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
//    ui->label->setText("Welcome Staff!");
//    ui->label->setStyleSheet("color: rgb(128,0,0)");
//    ui->pushButton->setText("View Animals");
//    ui->pushButton_2->setText("Add Animal");
    //ui->label->setText("View Animals");
    delete ui->label;
    delete ui->pushButton;
    delete ui->pushButton_2;
    login c;
    QSqlQueryModel *model = new QSqlQueryModel();
    c.dbOpen();
    QSqlQuery *q = new QSqlQuery(c.db);
    q->prepare("select * from ANIMAL");
    q->exec();
    model->setQuery(*q);
    ui->tableView->setModel(model);
    c.dbClose();
    qDebug() << (model->rowCount());

   // QSqlQuery q = new QSqlQuery(c.);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText("Add an Animal");
    //delete ui->lineEdit_3;
    delete ui->pushButton;
    delete ui->pushButton_2;
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->label->setText("Welcome Staff!");
    ui->label->setStyleSheet("color: rgb(128,0,0)");
//    delete ui->lineEdit_3;
//    delete ui->pushButton_3;
//    delete ui->pushButton_4;
    ui->lineEdit_3->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(false);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->label->setText("Welcome Client!");
    ui->label->setStyleSheet("color: rgb(128,0,0)");

    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->lineEdit_3->setVisible(false);

//    ui->pushButton_3->hide();
//    ui->pushButton_4->hide();
//    ui->lineEdit_3->hide();

}

void MainWindow::on_pushButton_5_clicked()
{
    //BAck
    on_pushButton_3_clicked();
}

void MainWindow::on_pushButton_6_clicked()
{
    //next
    on_pushButton_clicked();
}
