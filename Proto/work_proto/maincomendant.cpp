#include "db.h"
#include "maincomendant.h"
#include "ui_maincomendant.h"
#include <QDate>
#include <qsqlquery.h>
#include <QDebug>

MainComendant::MainComendant(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainComendant)
{
    ui->setupUi(this);

    QDate cDate = QDate::currentDate();
    ui->label->setText("Комендант: Главная " + cDate.toString());

    // заполнение ui из бд
}

MainComendant::~MainComendant()
{
    delete ui;
}

void MainComendant::on_action_triggered()
{
    //Добавить информацию о заселенных лицах
    manageDatabase = new ManageDatabase;
    QSqlTableModel* model = new QSqlTableModel(manageDatabase);

    /*
    model->setTable("Больной_ф");
    model->select();
    */

    manageDatabase->set_model(model);
    manageDatabase->show();
}

void MainComendant::on_action_2_triggered()
{
    //Изменить информацию о выселенных лицах
    manageDatabase = new ManageDatabase;
    manageDatabase->show();
}

void MainComendant::on_action_3_triggered()
{
    //Получить список свободных мест
    view = new View;
    QSqlQueryModel* model = new QSqlQueryModel(view);

    QSqlQuery *q = new QSqlQuery(QString("select building.id, room.name, "
                                         "(building.place_in_room) places from room "
                                         "inner join building on building = building.id "
                                         "except "
                                         "select building.id, room.name, "
                                         "(building.place_in_room) places from citizen_room "
                                         "inner join room on room.number = citizen_room.number "
                                         "inner join building on room.building = building.id "
                                         "inner join citizen on citizen_room.citizen = citizen.id "
                                         "order by building.id;"));

    model->setQuery(*q);
    view->set_model(model);
    view->show();
}

void MainComendant::on_action_4_triggered()
{
    //Получить список свободных комнат
    view = new View;
    QSqlQueryModel* model = new QSqlQueryModel(view);
    QSqlQuery *q = new QSqlQuery(QString("select building.id, room.name from room "
                                         "inner join building on room.building = building.id "
                                         "except "
                                         "select building.id, room.name from citizen_room "
                                         "inner join room on room.number = citizen_room.number "
                                         "inner join building on room.building = building.id "
                                         "inner join citizen on citizen_room.citizen = citizen.id "
                                         "order by building.id;"));

    model->setQuery(*q);
    view->set_model(model);
    view->show();
}

void MainComendant::on_action_5_triggered()
{
    //Получить информацию о комнате
    seekByName = new SeekByName;
    seekByName->show();
}

void MainComendant::on_action_6_triggered()
{
    //Получить список проживающих
    view = new View;
    QSqlQueryModel* model = new QSqlQueryModel(view);
    QSqlQuery *q = new QSqlQuery(QString("select "
                                         "(building.place_in_room - (select count(*) from citizen_room "
                                         "inner join room on room.number = citizen_room.number "
                                         "inner join building on room.building = building.id "
                                         "group by citizen_room.number)) places, "
                                         "citizen.surname, citizen.name, citizen.patronymic, "
                                         "citizen.status, citizen.position, citizen.in_date, citizen.out_date, citizen.telephone, "
                                         "citizen.mail from citizen_room "
                                         "inner join room on room.number = citizen_room.number "
                                         "inner join building on room.building = building.id "
                                         "inner join citizen on citizen_room.citizen = citizen.id "
                                         "where (out_date > date());"));

    model->setQuery(*q);
    view->set_model(model);
    view->show();
}

void MainComendant::on_action_7_triggered()
{
    //Получить список заявок
    requests = new Requests;
    requests->show();
}

void MainComendant::on_pushButton_clicked()
{
    redactData = new RedactData;

    QObject::connect(redactData, SIGNAL(redacted(bool)), this, SLOT(update(bool)));

    redactData->show();
}

void MainComendant::update(bool){
    DB db;
    QSqlQuery dormitory(QString("select * from dormitory "
                                "inner join login on manager = login.id "
                                "where manager = %1;").
                                arg(QString::number(db.login.get_id())));
    dormitory.exec();
    //раскидываем значения общаги


    QSqlQuery building(QString("select * from dormitory_building "
                               "inner join building on dormitory_building.building = building.id "
                               "where dormitory = %1;").
                                arg(QString::number(db.login.get_id())));
    building.exec();
    // раскидываем значения корпусов
}
