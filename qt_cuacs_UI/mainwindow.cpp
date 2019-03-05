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
/*
 * View Animals Button for
 *        Staff
 */
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
/*
 * Add Animals Button for
 *        Staff
 */
void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->label_4->setText("Type");
    ui->label_5->setText("Breed");
    ui->label_6->setText("Name");
    ui->label_7->setText("Sex");
    ui->label_8->setText("Age");
    ui->label_9->setText("Social");
    ui->label_10->setText("Health");
    ui->label_11->setText("Diet");
    ui->label_12->setText("Trained");
    ui->label_13->setText("Nocturnal");
    ui->label_20->setText("Emotion");
    ui->label_21->setText("Pet's Worth");
    ui->label_26->setText("Has Kids");
    ui->label_27->setText("Allergies");
    ui->label_28->setText("Stability");
    ui->label_29->setText("Housing");
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

    login l;
    QSqlQueryModel *m = new QSqlQueryModel();
    l.dbOpen();
    QSqlQuery* qry = new QSqlQuery(l.db);
    qry->prepare("SELECT name from ANIMAL");
    qry->exec();
    m->setQuery(*qry);
    ui->listView_2->setModel(m);
    ui->comboBox->setModel(m);
    l.dbClose();
    qDebug() <<(m->rowCount());

    on_pushButton_24_clicked();


}
/*
 * Staff Page
 */
void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->label_2->setText("Welcome Staff!");
    ui->label_2->setStyleSheet("color: rgb(128,0,0)");
}
/*
 * Client Page
 */
void MainWindow::on_pushButton_4_clicked()
{
    ui->label->setText("Welcome Client!");
    ui->label->setStyleSheet("color: rgb(128,0,0)");
    ui->stackedWidget->setCurrentIndex(1);
}
/*
 * Back Button for
 *  View Animals
 */
void MainWindow::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
/*
 * Homepage Button for
 *    View Animals
 */
void MainWindow::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
/*
 * Back Button for
 *     Client
 */
void MainWindow::on_pushButton_7_clicked()
{
   ui->stackedWidget->setCurrentIndex(0);
}
/*
 * Save Button in Staff (Add Animal)
 * Stores an Animal in Memory and
 *          Database.
 */
void MainWindow::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    login l;
    QString type, breed, name, sex, age, social, condition, diet, train;
    QString nocturnal, emotion, petWorth, parental, allergies, stability, res;

    type         = ui->lineEdit_25->text();
    breed        = ui->lineEdit_24->text();
    name         = ui->lineEdit_23->text();
    sex          = ui->lineEdit_22->text();
    age          = ui->lineEdit_21->text();
    social       = ui->lineEdit_20->text();
    condition    = ui->lineEdit_19->text();
    diet         = ui->lineEdit_18->text();
    train        = ui->lineEdit_17->text();
    nocturnal    = ui->lineEdit_16->text();
    emotion      = ui->lineEdit_26->text();
    petWorth     = ui->lineEdit_27->text();
    parental     = ui->lineEdit_28->text();
    allergies    = ui->lineEdit_29->text();
    stability    = ui->lineEdit_30->text();
    res          = ui->lineEdit_31->text();



    if(!l.dbOpen()){
        qDebug()<<"FAILED TO OPEN DATABASE";
        return;
    }
    /*
     * Create an Animal Object for User Input
     *     and stores it in Memory
     *         (Linked List).
     */
    Animal *newAnimal;
    newAnimal = new Animal(type, breed, name, sex, age, social, condition, diet, train, nocturnal, emotion, petWorth, parental, allergies, stability, res);
    shelter.add(newAnimal);
    /*
     * Store the User Input in the
     *        Database.
     */
    l.dbOpen();
    QSqlQuery q;
    q.prepare("INSERT INTO ANIMAL(type, breed, name, sex, age, social, condition, diet, train, nocturnal, emotion, petWorth, parental, allergies, stability, res) values('"+type+"','"+breed+"','"+
              name+"','"+sex+"','"+age+"','"+social+"','"+condition+"','"+diet+"','"+train+"','"+nocturnal+"','"+emotion+"','"+petWorth+"', '"+parental+"', '"+allergies+"','"+stability+"','"+res+"')");

    if(q.exec()){
        //Message for User if Animal is added.
        QMessageBox::critical(this, tr("Save"), tr("Inserted!"));
        l.dbClose();
    }else{
        QMessageBox::critical(this, tr("ERROR"), q.lastError().text());
    }
    /*
     * Print Updated
     *   Database.
     */
    QSqlQueryModel *model = new QSqlQueryModel();
    l.dbOpen();
    QSqlQuery *que = new QSqlQuery(l.db);
    que->prepare("SELECT * from ANIMAL");
    que->exec();
    model->setQuery(*que);
    ui->tableView_2->setModel(model);
    l.dbClose();
    qDebug() << "There is:" << (model->rowCount()) << "Animals in the database now.";

    //login l;
    QSqlQueryModel *m = new QSqlQueryModel();
    l.dbOpen();
    QSqlQuery* qry = new QSqlQuery(l.db);
    qry->prepare("SELECT name from ANIMAL");
    qry->exec();
    m->setQuery(*qry);
    ui->listView_2->setModel(m);
    ui->comboBox->setModel(m);
    l.dbClose();
    qDebug() <<(m->rowCount());

    l.dbLaunch();
    on_pushButton_24_clicked();

}
/*
 * Back Button for
 *  Add Animals
 */
void MainWindow::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
/*
 * Homepage Button for
 *    Add Animals
 */
void MainWindow::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

/*
 * Back Button for
 *  staff login
 *
 */
void MainWindow::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
/*
 * View Clients
 *  for Staff
 */
void MainWindow::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
    ui->label_23->setText("Database");
    ui->label_23->setStyleSheet("color: rgb(128,0,0)");
    login c;
    QSqlQueryModel *model = new QSqlQueryModel();
    c.dbOpen();
    QSqlQuery *q = new QSqlQuery(c.db);
    q->prepare("SELECT * from CLIENT");
    q->exec();
    model->setQuery(*q);
    ui->tableView_3->setModel(model);
    c.dbClose();
    qDebug() << (model->rowCount());
}
/*
 * View Animals
 *  for Clients
 */
void MainWindow::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    ui->label_25->setText("Database");
    ui->label_25->setStyleSheet("color: rgb(128,0,0)");
    login c;
    QSqlQueryModel *model = new QSqlQueryModel();
    c.dbOpen();
    QSqlQuery *q = new QSqlQuery(c.db);
    q->prepare("SELECT * from ANIMAL");
    q->exec();
    model->setQuery(*q);
    ui->tableView_4->setModel(model);
    c.dbClose();
    qDebug() << (model->rowCount());
}
/*
 * Back Button for
 * Client View Animals
 */
void MainWindow::on_pushButton_14_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
/*
 * Homepage Button
 * for Client View Animals
 */
void MainWindow::on_pushButton_15_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
/*
 * Back Button for
 * Staff View Client
*/
void MainWindow::on_pushButton_16_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
/*
 * Homepage Button for
 * Staff View Client
*/
void MainWindow::on_pushButton_17_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
/*
 * Add Client Button
 *    for Staff
*/
void MainWindow::on_pushButton_18_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
    ui->label_32->setText("id");
    ui->label_33->setText("Name");
    ui->label_34->setText("Address");

    login c;
    QSqlQueryModel *model = new QSqlQueryModel();
    c.dbOpen();
    QSqlQuery *q = new QSqlQuery(c.db);
    q->prepare("SELECT * from CLIENT");
    q->exec();
    model->setQuery(*q);
    ui->tableView_5->setModel(model);
    c.dbClose();
    qDebug() << (model->rowCount());

    login l;
    QSqlQueryModel *m = new QSqlQueryModel();
    l.dbOpen();
    QSqlQuery* qry = new QSqlQuery(l.db);
    qry->prepare("SELECT id from CLIENT");
    qry->exec();
    m->setQuery(*qry);
    ui->listView_3->setModel(m);
    ui->comboBox_2->setModel(m);
    l.dbClose();
    qDebug() <<(m->rowCount());

    on_pushButton_25_clicked();
}
/*
 * Save Button for
 * Add Client
 * in Staff
*/
void MainWindow::on_pushButton_20_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
    login l;
    QString id, name, address;

    id          = ui->lineEdit_32->text();
    name        = ui->lineEdit_33->text();
    address     = ui->lineEdit_34->text();



    if(!l.dbOpen()){
        qDebug()<<"FAILED TO OPEN DATABASE";
        return;
    }
    /*
     * Create an Client Object for User Input
     *     and stores it in Memory
     *         (Linked List).
     */
    Client *newClient;
    newClient = new Client(id, name, address);
    shelter.addClient(newClient);
    /*
     * Store the User Input in the
     *        Database.
     */
    l.dbOpen();
    QSqlQuery q;
    q.prepare("INSERT INTO CLIENT(id, name, address) values('"+id+"','"+name+"','"+address+"')");

    if(q.exec()){
        //Message for User if Client is added.
        QMessageBox::critical(this, tr("Save"), tr("Inserted!"));
        l.dbClose();
    }else{
        QMessageBox::critical(this, tr("ERROR"), q.lastError().text());
    }
    /*
     * Print Updated
     *   Database.
     */
    QSqlQueryModel *model = new QSqlQueryModel();
    l.dbOpen();
    QSqlQuery *que = new QSqlQuery(l.db);
    que->prepare("SELECT * from CLIENT");
    que->exec();
    model->setQuery(*que);
    ui->tableView_5->setModel(model);
    l.dbClose();
    qDebug() << "There is:" << (model->rowCount()) << "Clients in the database now.";

    //login l;
    QSqlQueryModel *m = new QSqlQueryModel();
    l.dbOpen();
    QSqlQuery* qry = new QSqlQuery(l.db);
    qry->prepare("SELECT id from CLIENT");
    qry->exec();
    m->setQuery(*qry);
    ui->listView_3->setModel(m);
    ui->comboBox_2->setModel(m);
    l.dbClose();
    qDebug() <<(m->rowCount());

    l.dbLaunch();
    on_pushButton_25_clicked();

}
/*
 * Back Button for
 * Add Client
 * in Staff
*/
void MainWindow::on_pushButton_21_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
/*
 * Homepage Button for
 * Add Client
 * in Staff
*/
void MainWindow::on_pushButton_19_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

/*
 * Load Button for
 * Add Animal in Staff
*/
/*
void MainWindow::on_pushButton_22_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    login l;
    QSqlQueryModel *m = new QSqlQueryModel();
    l.dbOpen();
    QSqlQuery* qry = new QSqlQuery(l.db);
    qry->prepare("SELECT name from ANIMAL");
    qry->exec();
    m->setQuery(*qry);
    ui->listView_2->setModel(m);
    ui->comboBox->setModel(m);
    l.dbClose();
    qDebug() <<(m->rowCount());

}
*/
/*
 * Combo Click
 * in Add Animal
*/
void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1)
{
    ui->stackedWidget->setCurrentIndex(4);
    QString name = ui->comboBox->currentText();
    login l;


    if(!l.dbOpen()){
        qDebug()<<"FAILED TO OPEN DATABASE";
        return;
    }
    /*
     * Store the User Input in the
     *        Database.
     */
    l.dbOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM ANIMAL where name ='"+name+"'");

    if(qry.exec()){
        while(qry.next()){
            ui->lineEdit_25->setText(qry.value(0).toString());
            ui->lineEdit_24->setText(qry.value(1).toString());
            ui->lineEdit_23->setText(qry.value(2).toString());
            ui->lineEdit_22->setText(qry.value(3).toString());
            ui->lineEdit_21->setText(qry.value(4).toString());
            ui->lineEdit_20->setText(qry.value(5).toString());
            ui->lineEdit_19->setText(qry.value(6).toString());
            ui->lineEdit_18->setText(qry.value(7).toString());
            ui->lineEdit_17->setText(qry.value(8).toString());
            ui->lineEdit_16->setText(qry.value(9).toString());
            ui->lineEdit_26->setText(qry.value(10).toString());
            ui->lineEdit_27->setText(qry.value(11).toString());
            ui->lineEdit_28->setText(qry.value(12).toString());
            ui->lineEdit_29->setText(qry.value(13).toString());
            ui->lineEdit_30->setText(qry.value(14).toString());
            ui->lineEdit_31->setText(qry.value(15).toString());

        }
        l.dbClose();
    }else{
        QMessageBox::critical(this, tr("ERROR"), qry.lastError().text());
    }
}
/*
 * Table Click in
 * Add Animals
*/
void MainWindow::on_tableView_2_activated(const QModelIndex &index)
{
    ui->stackedWidget->setCurrentIndex(4);
    QString val = ui->tableView_2->model()->data(index).toString();
    login l;


    if(!l.dbOpen()){
        qDebug()<<"FAILED TO OPEN DATABASE";
        return;
    }
    /*
     * Store the User Input in the
     *        Database.
     */
    l.dbOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM ANIMAL where type ='"+val+"' or breed='"+val+"' or name='"+
                val+"' or sex='"+val+"' or age='"+val+"' or social='"+val+"' or condition='"+val+"' or diet='"+val+"' or train='"+val+"' or nocturnal='"+val+"' or emotion='"+val+"' or petWorth='"+val+"' or parental='"+val+"' or allergies='"+val+"' or stability='"+val+"' or res='"+val+"'");

    if(qry.exec()){
        while(qry.next()){
            ui->lineEdit_25->setText(qry.value(0).toString());
            ui->lineEdit_24->setText(qry.value(1).toString());
            ui->lineEdit_23->setText(qry.value(2).toString());
            ui->lineEdit_22->setText(qry.value(3).toString());
            ui->lineEdit_21->setText(qry.value(4).toString());
            ui->lineEdit_20->setText(qry.value(5).toString());
            ui->lineEdit_19->setText(qry.value(6).toString());
            ui->lineEdit_18->setText(qry.value(7).toString());
            ui->lineEdit_17->setText(qry.value(8).toString());
            ui->lineEdit_16->setText(qry.value(9).toString());
            ui->lineEdit_26->setText(qry.value(10).toString());
            ui->lineEdit_27->setText(qry.value(11).toString());
            ui->lineEdit_28->setText(qry.value(12).toString());
            ui->lineEdit_29->setText(qry.value(13).toString());
            ui->lineEdit_30->setText(qry.value(14).toString());
            ui->lineEdit_31->setText(qry.value(15).toString());

        }
        l.dbClose();
    }else{
        QMessageBox::critical(this, tr("ERROR"), qry.lastError().text());
    }

}
/*
 * List Click in
 * Add Animals
*/
void MainWindow::on_listView_2_activated(const QModelIndex &index)
{
    ui->stackedWidget->setCurrentIndex(4);
    QString val = ui->listView_2->model()->data(index).toString();
    login l;


    if(!l.dbOpen()){
        qDebug()<<"FAILED TO OPEN DATABASE";
        return;
    }
    /*
     * Store the User Input in the
     *        Database.
     */
    l.dbOpen();
    QSqlQuery qry;

    qry.prepare("SELECT * FROM ANIMAL where name ='"+val+"'");
    if(qry.exec()){
        while(qry.next()){
            ui->lineEdit_25->setText(qry.value(0).toString());
            ui->lineEdit_24->setText(qry.value(1).toString());
            ui->lineEdit_23->setText(qry.value(2).toString());
            ui->lineEdit_22->setText(qry.value(3).toString());
            ui->lineEdit_21->setText(qry.value(4).toString());
            ui->lineEdit_20->setText(qry.value(5).toString());
            ui->lineEdit_19->setText(qry.value(6).toString());
            ui->lineEdit_18->setText(qry.value(7).toString());
            ui->lineEdit_17->setText(qry.value(8).toString());
            ui->lineEdit_16->setText(qry.value(9).toString());
            ui->lineEdit_26->setText(qry.value(10).toString());
            ui->lineEdit_27->setText(qry.value(11).toString());
            ui->lineEdit_28->setText(qry.value(12).toString());
            ui->lineEdit_29->setText(qry.value(13).toString());
            ui->lineEdit_30->setText(qry.value(14).toString());
            ui->lineEdit_31->setText(qry.value(15).toString());

        }
        l.dbClose();
    }else{
        QMessageBox::critical(this, tr("ERROR"), qry.lastError().text());
    }
}
/*
 * Load Button for
 * Add Client in Staff
*/
/*
void MainWindow::on_pushButton_23_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
    login l;
    QSqlQueryModel *m = new QSqlQueryModel();
    l.dbOpen();
    QSqlQuery* qry = new QSqlQuery(l.db);
    qry->prepare("SELECT id from CLIENT");
    qry->exec();
    m->setQuery(*qry);
    ui->listView_3->setModel(m);
    ui->comboBox_2->setModel(m);
    l.dbClose();
    qDebug() <<(m->rowCount());
}
*/
/*
 * Combo Click
 * in Add CLient
*/
void MainWindow::on_comboBox_2_currentIndexChanged(const QString &arg1)
{
    ui->stackedWidget->setCurrentIndex(7);
    QString id = ui->comboBox_2->currentText();
    login l;


    if(!l.dbOpen()){
        qDebug()<<"FAILED TO OPEN DATABASE";
        return;
    }
    /*
     * Store the User Input in the
     *        Database.
     */
    l.dbOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM CLIENT where id ='"+id+"'");

    if(qry.exec()){
        while(qry.next()){
            ui->lineEdit_32->setText(qry.value(0).toString());
            ui->lineEdit_33->setText(qry.value(1).toString());
            ui->lineEdit_34->setText(qry.value(2).toString());

        }
        l.dbClose();
    }else{
        QMessageBox::critical(this, tr("ERROR"), qry.lastError().text());
    }

}
/*
 * Table Click in
 * Add Client
*/
void MainWindow::on_tableView_5_activated(const QModelIndex &index)
{
    ui->stackedWidget->setCurrentIndex(7);
    QString val = ui->tableView_5->model()->data(index).toString();
    login l;


    if(!l.dbOpen()){
        qDebug()<<"FAILED TO OPEN DATABASE";
        return;
    }
    /*
     * Store the User Input in the
     *        Database.
     */
    l.dbOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM CLIENT where id ='"+val+"' or name='"+val+"' or address='"+val+"'");

    if(qry.exec()){
        while(qry.next()){
            ui->lineEdit_32->setText(qry.value(0).toString());
            ui->lineEdit_33->setText(qry.value(1).toString());
            ui->lineEdit_34->setText(qry.value(2).toString());

        }
        l.dbClose();
    }else{
        QMessageBox::critical(this, tr("ERROR"), qry.lastError().text());
    }

}
/*
 * List Click in
 * Add Client
*/
void MainWindow::on_listView_3_activated(const QModelIndex &index)
{
    ui->stackedWidget->setCurrentIndex(7);
    QString val = ui->listView_3->model()->data(index).toString();
    login l;


    if(!l.dbOpen()){
        qDebug()<<"FAILED TO OPEN DATABASE";
        return;
    }
    /*
     * Store the User Input in the
     *        Database.
     */
    l.dbOpen();
    QSqlQuery qry;

    qry.prepare("SELECT * FROM CLIENT where id ='"+val+"'");
    if(qry.exec()){
        while(qry.next()){
            ui->lineEdit_32->setText(qry.value(0).toString());
            ui->lineEdit_33->setText(qry.value(1).toString());
            ui->lineEdit_34->setText(qry.value(2).toString());
        }
        l.dbClose();
    }else{
        QMessageBox::critical(this, tr("ERROR"), qry.lastError().text());
    }

}
/*
 * Clear Button for
 * Add Animals
*/
void MainWindow::on_pushButton_24_clicked()
{
    ui->lineEdit_25->setText("");
    ui->lineEdit_24->setText("");
    ui->lineEdit_23->setText("");
    ui->lineEdit_22->setText("");
    ui->lineEdit_21->setText("");
    ui->lineEdit_20->setText("");
    ui->lineEdit_19->setText("");
    ui->lineEdit_18->setText("");
    ui->lineEdit_17->setText("");
    ui->lineEdit_16->setText("");
    ui->lineEdit_26->setText("");
    ui->lineEdit_27->setText("");
    ui->lineEdit_28->setText("");
    ui->lineEdit_29->setText("");
    ui->lineEdit_30->setText("");
    ui->lineEdit_31->setText("");
}
/*
 * Clear Button for
 * Add Clients
*/
void MainWindow::on_pushButton_25_clicked()
{
    ui->lineEdit_32->setText("");
    ui->lineEdit_33->setText("");
    ui->lineEdit_34->setText("");


}
