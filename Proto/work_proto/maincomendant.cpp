#include "db.h"
#include "maincomendant.h"
#include "ui_maincomendant.h"
#include <QDate>
#include <qsqlquery.h>
#include <QDebug>

static int build_id_first;
static int build_id_second;
#include <QUrl>
#include <QCoreApplication>
#include <QDesktopServices>

MainComendant::MainComendant(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainComendant)
{
    ui->setupUi(this);
    DB db;
    QDate cDate = QDate::currentDate();
    ui->state_label->setText("Комендант: Главная " + cDate.toString());

    ui->address_label->setText(QString("Адрес: %1").arg(db.login.address));
    ui->comendant_label->setText(QString("Комендант: %1 %2 %3").arg(db.login.surname, db.login.name, db.login.patronymic));


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

    ui->dormitory_groupbox->setTitle(QString("Общежитие №%1").arg(QString::number(db.login.get_id_dormitory())));
}

MainComendant::~MainComendant()
{
    delete ui;
}

void MainComendant::on_action_triggered()
{
    DB db;
    //Добавить информацию о заселенных лицах
    manageDatabase = new ManageDatabase;
    QSqlQueryModel* model = new QSqlQueryModel(manageDatabase);
    QSqlQuery *q = new QSqlQuery(QString(
                " select citizen.id, building.id as корпус, room.name as \"номер комнаты\", "
                " citizen.surname, citizen.name, citizen.patronymic, "
                " citizen.status, citizen.position, citizen.in_date, "
                " citizen.out_date, citizen.telephone, "
                " citizen.mail from citizen_room "
                " inner join room on room.number = citizen_room.number "
                " inner join building on room.building = building.id "
                " inner join citizen on citizen_room.citizen = citizen.id "
                " inner join dormitory_building on building.id = dormitory_building.building"
                " where citizen.in_date < date() and citizen.out_date > date() and dormitory = %1;").arg(db.login.get_id_dormitory()));
    model->setQuery(*q);
    manageDatabase->set_model(model);
    manageDatabase->setWindowTitle("Добавление информации о заселенных лицах");
    manageDatabase->setTitle("Добавление информации о заселенных лицах ");
    manageDatabase->show();
}

void MainComendant::on_action_2_triggered()
{
    //Изменить информацию о выселенных лицах
    manageDatabase = new ManageDatabase;
    DB db;
    QSqlQueryModel* model = new QSqlQueryModel(manageDatabase);
    QSqlQuery *q = new QSqlQuery(QString(
                " select citizen.id, building.id as корпус, room.name as \"номер комнаты\", "
                " citizen.surname, citizen.name, citizen.patronymic, "
                " citizen.status, citizen.position, citizen.in_date, "
                " citizen.out_date, citizen.telephone, "
                " citizen.mail from citizen_room "
                " inner join room on room.number = citizen_room.number "
                " inner join building on room.building = building.id "
                " inner join citizen on citizen_room.citizen = citizen.id "
                " inner join dormitory_building on building.id = dormitory_building.building"
                " where citizen.out_date < date() and dormitory = %1;").arg(db.login.get_id_dormitory()));
    model->setQuery(*q);
    manageDatabase->set_model(model);
    manageDatabase->setWindowTitle("Изменение информации о выселенных лицах");
    manageDatabase->setTitle("Изменение информации о выселенных лицах ");
    manageDatabase->show();
}

void MainComendant::on_action_3_triggered()
{
    //Получить список свободных мест
    DB db;
    view = new View;
    QSqlQueryModel* model = new QSqlQueryModel(view);

    QSqlQuery *q = new QSqlQuery(QString("select id_b as \"корпус\", name as \"номер комнаты\", places_n as \"мест свободно\" from "
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
                                         "where citizen.status = 1); ").arg(db.login.get_id_dormitory()));

    model->setQuery(*q);
    view->set_model(model);
    view->setWindowTitle("Получение списка свободных мест");
    view->setTitle("Получение списка свободных мест ");
    view->show();
}

void MainComendant::on_action_4_triggered()
{
    //Получить список свободных комнат
    view = new View;
    DB db;
    QSqlQueryModel* model = new QSqlQueryModel(view);
    QSqlQuery *q = new QSqlQuery(QString("select building.id as \"корпус\", room.name as \"номер комнаты\" from room "
                                         "inner join building on room.building = building.id "
                                         "inner join dormitory_building on dormitory_building.building = building.id "
                                         "where dormitory = %1 "
                                         "except "
                                         "select building.id, room.name from citizen_room "
                                         "inner join room on room.number = citizen_room.number "
                                         "inner join building on room.building = building.id "
                                         "inner join citizen on citizen_room.citizen = citizen.id "
                                         "inner join dormitory_building on dormitory_building.building = building.id "
                                         "where dormitory = %1 "
                                         "order by building.id;").arg(QString::number(db.login.get_id_dormitory())));

    model->setQuery(*q);
    view->set_model(model);
    view->setWindowTitle("Получение списка свободных комнат");
    view->setTitle("Получение списка свободных комнат ");
    view->show();
}

void MainComendant::on_action_5_triggered()
{
    //Получить информацию о комнате
    seekByName = new SeekByName;
    seekByName->setWindowTitle("Получение информации о комнате");
    seekByName->setTitle("Получение информации о комнате ");
    seekByName->show();
}

void MainComendant::on_action_6_triggered()
{
    //Получить список проживающих
    view = new View;
    QSqlQueryModel* model = new QSqlQueryModel(view);
    DB db;
    QSqlQuery *q = new QSqlQuery(QString("select "
                                         "citizen.surname, citizen.name, citizen.patronymic, "
                                         "citizen.status, citizen.position, citizen.in_date, citizen.out_date, citizen.telephone, "
                                         "citizen.mail from citizen_room "
                                         "inner join room on room.number = citizen_room.number "
                                         "inner join building on room.building = building.id "
                                         "inner join citizen on citizen_room.citizen = citizen.id "
                                         "inner join dormitory_building on dormitory_building.building = building.id "
                                         "where (out_date > date()) and dormitory = %1;").arg(QString::number(db.login.get_id_dormitory())));

    model->setQuery(*q);
    view->set_model(model);
    view->setWindowTitle("Получение списка проживающих");
    view->setTitle("Получение списка проживающих ");
    view->show();
}

void MainComendant::on_action_7_triggered()
{
    //Получить список заявок
    requests = new Requests;
    requests->setWindowTitle("Получение списка заявок");
    requests->setTitle("Получение списка заявок ");
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
    /*QSqlQuery dormitory(QString("select * from dormitory "
                                "inner join login on manager = login.id "
                                "where manager = %1;").
                                arg(QString::number(db.login.get_id())));
    dormitory.exec();*/

    ui->address_label->setText(QString("Адрес: %1").arg(db.login.address));
    ui->comendant_label->setText(QString("Комендант: %1 %2 %3").arg(db.login.surname, db.login.name, db.login.patronymic));
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

void MainComendant::on_action_8_triggered()
{
    //Справка пользователя
    QUrl url;
    url = QCoreApplication::applicationDirPath() + "/help_user.html";
    QDesktopServices temp;
    temp.openUrl(url);
}

void MainComendant::on_action_9_triggered()
{
    //Справка разработчика
    QUrl url;
    url = QCoreApplication::applicationDirPath() + "/help_developer.html";
    QDesktopServices temp;
    temp.openUrl(url);
}
