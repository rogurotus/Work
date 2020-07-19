#include "db.h"
#include "mainvisiter.h"
#include "ui_mainvisiter.h"
#include <QDate>
#include <qsqlquery.h>

static int dormitory_id;
static int build_id_first;
static int build_id_second;
static int dormitory_id2;
static int build_id_first2;
static int build_id_second2;

MainVisiter::MainVisiter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainVisiter)
{
    ui->setupUi(this);

    QDate cDate = QDate::currentDate();
    ui->state_label->setText("Гость: Главная " + cDate.toString());

    DB db;
    QSqlQuery build(QString("select building "
                            "from dormitory_building "
                            "order by dormitory;"));
    build.exec();
    build.next();
    build_id_first = build.value(0).toInt();
    ui->building11_label->setText("Корпус №" + QString::number(build_id_first));
    build.next();
    build_id_second = build.value(0).toInt();
    ui->building12_label->setText("Корпус №" + QString::number(build_id_second));

    QSqlQuery dormitory("select dormitory.id, "
                        "address, surname, name, "
                        "patronymic from dormitory "
                        "inner join login on manager = login.id;");
    dormitory.exec();
    dormitory.next();
    dormitory_id = dormitory.value(0).toInt();
    ui->address1_label->setText("Адрес: " + dormitory.value(1).toString());
    ui->dormitory1_groupbox->setTitle("Общежитие №" + dormitory.value(0).toString());
    ui->comendant1_label->setText(QString("Комендант: %1 %2 %3").arg(dormitory.value(2).toString(),
                                                          dormitory.value(3).toString(),
                                                          dormitory.value(4).toString()));
    /*dormitory.exec();
    dormitory.next();
    dormitory_id2 = dormitory.value(0).toInt();
    ui->address2_label->setText("Адрес: " + dormitory.value(1).toString());
    ui->dormitory2_groupbox->setTitle("Общежитие №" + dormitory.value(0).toString());
    ui->comendant2_label->setText(QString("Комендант: %1 %2 %3").arg(dormitory.value(2).toString(),
                                                          dormitory.value(3).toString(),
                                                          dormitory.value(4).toString()));*/
    /*
    build.next();
    build_id_first2 = build.value(0).toInt();
    ui->building21_label->setText("Корпус №" + QString::number(build_id_first2));
    build.next();
    build_id_second2 = build.value(0).toInt();
    ui->building22_label->setText("Корпус №" + QString::number(build_id_second2));*/

    QSqlQuery places(QString("select sum(\"мест свободно\") from (select id_b as \"корпус\", name as \"номер комнаты\", places_n as \"мест свободно\" from "
                                         "(select id_b, name, (building.place_in_room - places) as places_n "
                                         "from(  "
                                         "select id_b, name, places from (  "
                                         "select building.id as id_b, room.name, room.number "
                                         "from citizen_room "
                                         "inner join room on room.number = citizen_room.number  "
                                         "inner join building on room.building = building.id "
                                         "inner join citizen on citizen_room.citizen = citizen.id "
                                         "where id_b in (  "
                                         "select building from dormitory_building where dormitory = %1)  "
                                         "union "
                                         "select building.id as id_b, room.name, room.number "
                                         "from citizen_room "
                                         "inner join room on room.number = citizen_room.number  "
                                         "inner join building on room.building = building.id "
                                         "inner join citizen on citizen_room.citizen = citizen.id "
                                         "where id_b in ( "
                                         "select building from dormitory_building where dormitory = %1) "
                                         ") t1  "
                                         "inner join (select count(*) as places, room.number from citizen_room  "
                                         "inner join room on room.number = citizen_room.number "
                                         "inner join building on room.building = building.id "
                                         "group by citizen_room.number) t2 on t1.number = t2.number) "
                                         "inner join building on building.id = id_b "
                                         "where places_n > 0 "
                                         "union "
                                         "select building.id as id_b, room.name,  "
                                         "(building.place_in_room) places_n from room  "
                                         "inner join building on building = building.id  "
                                         "where id_b in ( "
                                         "select building from dormitory_building where dormitory = %1) "
                                         "except "
                                         "select building.id as id_b, room.name,  "
                                         "(building.place_in_room) places_n from citizen_room "
                                         "inner join room on room.number = citizen_room.number  "
                                         "inner join building on room.building = building.id "
                                         "inner join citizen on citizen_room.citizen = citizen.id "
                                         "where building.id in ( "
                                         "select building from dormitory_building where dormitory = %1) "
                                         "except "
                                         "select building.id as id_b, room.number, "
                                         "(building.place_in_room - (select count(*) from citizen_room "
                                         "inner join room on room.number = citizen_room.number "
                                         "inner join building on room.building = building.id "
                                         "group by citizen_room.number)) places_n from citizen_room "
                                         "inner join room on room.number = citizen_room.number "
                                         "inner join building on room.building = id_b "
                                         "inner join citizen on citizen_room.citizen = citizen.id "
                                         "where citizen.status = 1)) group by \"корпус\"; ").arg(dormitory_id));
    places.exec();
    places.next();
    ui->room_amount11_label->setText("Мест свободно: " + places.value(0).toString());
    places.next();
    ui->room_amount12_label->setText("Мест свободно: " + places.value(0).toString());

    /*QSqlQuery places2(QString("select sum(\"мест свободно\") from (select id_b as \"корпус\", name as \"номер комнаты\", places_n as \"мест свободно\" from "
                                         "(select id_b, name, (building.place_in_room - places) as places_n "
                                         "from(  "
                                         "select id_b, name, places from (  "
                                         "select building.id as id_b, room.name, room.number "
                                         "from citizen_room "
                                         "inner join room on room.number = citizen_room.number  "
                                         "inner join building on room.building = building.id "
                                         "inner join citizen on citizen_room.citizen = citizen.id "
                                         "where id_b in (  "
                                         "select building from dormitory_building where dormitory = %1)  "
                                         "union "
                                         "select building.id as id_b, room.name, room.number "
                                         "from citizen_room "
                                         "inner join room on room.number = citizen_room.number  "
                                         "inner join building on room.building = building.id "
                                         "inner join citizen on citizen_room.citizen = citizen.id "
                                         "where id_b in ( "
                                         "select building from dormitory_building where dormitory = %1) "
                                         ") t1  "
                                         "inner join (select count(*) as places, room.number from citizen_room  "
                                         "inner join room on room.number = citizen_room.number "
                                         "inner join building on room.building = building.id "
                                         "group by citizen_room.number) t2 on t1.number = t2.number) "
                                         "inner join building on building.id = id_b "
                                         "where places_n > 0 "
                                         "union "
                                         "select building.id as id_b, room.name,  "
                                         "(building.place_in_room) places_n from room  "
                                         "inner join building on building = building.id  "
                                         "where id_b in ( "
                                         "select building from dormitory_building where dormitory = %1) "
                                         "except "
                                         "select building.id as id_b, room.name,  "
                                         "(building.place_in_room) places_n from citizen_room "
                                         "inner join room on room.number = citizen_room.number  "
                                         "inner join building on room.building = building.id "
                                         "inner join citizen on citizen_room.citizen = citizen.id "
                                         "where building.id in ( "
                                         "select building from dormitory_building where dormitory = %1) "
                                         "except "
                                         "select building.id as id_b, room.number, "
                                         "(building.place_in_room - (select count(*) from citizen_room "
                                         "inner join room on room.number = citizen_room.number "
                                         "inner join building on room.building = building.id "
                                         "group by citizen_room.number)) places_n from citizen_room "
                                         "inner join room on room.number = citizen_room.number "
                                         "inner join building on room.building = id_b "
                                         "inner join citizen on citizen_room.citizen = citizen.id "
                                         "where citizen.status = 1)) group by \"корпус\"; ").arg(dormitory_id2));
    places2.exec();
    places2.next();
    ui->room_amount21_label->setText("Мест свободно: " + places2.value(0).toString());
    places.next();
    ui->room_amount22_label->setText("Мест свободно: " + places2.value(0).toString());*/

}

MainVisiter::~MainVisiter()
{
    delete ui;
}

void MainVisiter::on_pushButton_clicked()
{
    makeRequest = new MakeRequest;
    makeRequest->show();
}
