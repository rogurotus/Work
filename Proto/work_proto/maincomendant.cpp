#include "db.h"
#include "maincomendant.h"
#include "ui_maincomendant.h"
#include <QDate>
#include <qsqlquery.h>
#include <QDebug>

static int build_id_first;
static int build_id_second;

MainComendant::MainComendant(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainComendant)
{
    ui->setupUi(this);
    DB db;
    QDate cDate = QDate::currentDate();
    ui->state_label->setText("Комендант: Главная " + cDate.toString());
    QSqlQuery build(QString("select building.id, rooms, place_in_room "
                            "from dormitory_building "
                            "inner join building on dormitory_building.building = building.id "
                            "where dormitory = %1 "
                            "order by building.id;").
                            arg(QString::number(db.login.get_id_dormitory())));
    build.exec();
    build.next();
    build_id_first = build.value(0).toInt();
    ui->building_1_label->setText("Корпус №" + QString::number(build_id_first));
    ui->room_amount_1_label->setText("Всего комнат " + QString::number(build.value(1).toInt()));
    ui->place_amount_1_label->setText("Мест в комнате " + QString::number(build.value(2).toInt()));

    build.next();
    build_id_second = build.value(0).toInt();
    ui->building_2_label->setText("Корпус №" + QString::number(build_id_second));
    ui->room_amount_2_label->setText("Всего комнат " + QString::number(build.value(1).toInt()));
    ui->place_amount_2_label->setText("Мест в комнате " + QString::number(build.value(2).toInt()));
}

MainComendant::~MainComendant()
{
    delete ui;
}

void MainComendant::on_action_triggered()
{
    //Добавить информацию о заселенных лицах
    manageDatabase = new ManageDatabase;
    QSqlRelationalTableModel* model = new QSqlRelationalTableModel(manageDatabase);


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

    QSqlQuery build(QString("select building.id, rooms, place_in_room "
                            "from dormitory_building "
                            "inner join building on dormitory_building.building = building.id "
                            "where dormitory = %1 "
                            "order by building.id;").
                            arg(QString::number(db.login.get_id_dormitory())));
    build.exec();
    build.next();
    build_id_first = build.value(0).toInt();
    ui->building_1_label->setText("Корпус №" + QString::number(build_id_first));
    ui->room_amount_1_label->setText("Всего комнат " + QString::number(build.value(1).toInt()));
    ui->place_amount_1_label->setText("Мест в комнате " + QString::number(build.value(2).toInt()));

    build.next();
    build_id_second = build.value(0).toInt();
    ui->building_2_label->setText("Корпус №" + QString::number(build_id_second));
    ui->room_amount_2_label->setText("Всего комнат " + QString::number(build.value(1).toInt()));
    ui->place_amount_2_label->setText("Мест в комнате " + QString::number(build.value(2).toInt()));
    // раскидываем значения корпусов
}
