#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlQueryModel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: #EAEAEA;");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    ui->label_3->setText("Database");
    ui->label_3->setStyleSheet("color: rgb(128,0,0)");
    login c;
    QSqlQueryModel *model = new QSqlQueryModel();
    c.dbOpen();
    QSqlQuery *q = new QSqlQuery(c.db);
    q->prepare("SELECT * from ANIMAL");
    q->exec();
    model->setQuery(*q);
    ui->tableView->setModel(model);
    c.dbClose();
    qDebug() << (model->rowCount());
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->label_4->setText("Id");
    ui->label_5->setText("Name");
    ui->label_6->setText("Type");
    ui->label_7->setText("Sex");
    ui->label_8->setText("Age");
    ui->label_9->setText("Height");
    ui->label_10->setText("Colour");
    ui->label_11->setText("Breed");
    ui->label_12->setText("Neutered");
    ui->label_13->setText("Condition");
    login c;
    QSqlQueryModel *model = new QSqlQueryModel();
    c.dbOpen();
    QSqlQuery *q = new QSqlQuery(c.db);
    q->prepare("SELECT * from ANIMAL");
    q->exec();
    model->setQuery(*q);
    ui->tableView_2->setModel(model);
    c.dbClose();
    qDebug() << (model->rowCount());

}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->label_2->setText("Welcome Staff!");
    ui->label_2->setStyleSheet("color: rgb(128,0,0)");
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->label->setText("Welcome Client!");
    ui->label->setStyleSheet("color: rgb(128,0,0)");
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_5_clicked()
{
    //Back
    ui->stackedWidget->setCurrentIndex(2);

}

void MainWindow::on_pushButton_6_clicked()
{
    //Next
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_7_clicked()
{
    //Homepage
   ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    login l;
    QString id;
    QString name, type, sex;
    QString age;
    QString height, colour, breed, neutered, condition;
    id        = ui->lineEdit_25->text();
    name      = ui->lineEdit_24->text();
    type      = ui->lineEdit_23->text();
    sex       = ui->lineEdit_22->text();
    age       = ui->lineEdit_21->text();
    height    = ui->lineEdit_20->text();
    colour    = ui->lineEdit_19->text();
    breed     = ui->lineEdit_18->text();
    neutered  = ui->lineEdit_17->text();
    condition = ui->lineEdit_16->text();

    if(!l.dbOpen()){
        qDebug()<<"FAILED TO OPEN DATABASE";
        return;
    }
    Animal *newAnimal;
    //view.readInfo(id, name, type, sex, age, height, colour, breed, neutered, condition);
    newAnimal = new Animal(id, name, type, sex, age, height, colour, breed, neutered, condition);
    shelter.add(newAnimal);

    l.dbOpen();
    QSqlQuery q;
    q.prepare("INSERT INTO ANIMAL(id, name, type, sex, age, height, colour, breed, neutered, condition) values('"+id+"','"+name+"','"+
              type+"','"+sex+"','"+age+"','"+height+"','"+colour+"','"+breed+"','"+neutered+"','"+condition+"')");
    if(q.exec()){
        QMessageBox::critical(this, tr("Save"), tr("Inserted!"));
        l.dbClose();
    }else{
        QMessageBox::critical(this, tr("ERROR"), q.lastError().text());
    }

    QSqlQueryModel *model = new QSqlQueryModel();
    l.dbOpen();
    QSqlQuery *que = new QSqlQuery(l.db);
    que->prepare("SELECT * from ANIMAL");
    que->exec();
    model->setQuery(*que);
    ui->tableView_2->setModel(model);
    l.dbClose();
    qDebug() << "There is:" << (model->rowCount()) << "Animals in the database now.";

    l.dbLaunch();
    view.printShelter(shelter);

}

void MainWindow::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::addToLinkedList(){

}
