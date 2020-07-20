#include "db.h"
#include "managedatabase.h"
#include "ui_managedatabase.h"
#include <qsqlquery.h>
#include <qsqlrelationaltablemodel.h>
#include <QDate>
#include <QDebug>

ManageDatabase::ManageDatabase(bool old, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManageDatabase)
{
    this->old = old;
    ui->setupUi(this);
}

ManageDatabase::~ManageDatabase()
{
    delete ui;
}


void ManageDatabase::set_model(QSqlQueryModel* model)
{
    this->model = model;
    ui->tableView->setModel(model);
}

void ManageDatabase::on_redact_button_clicked()
{
    //Редактирование
    redactHuman = new RedactHuman(old, ui->tableView
                                  ->model()->data(ui->tableView->model()
                                  ->index(ui->tableView->currentIndex().row(), 0)).toInt());
    //QModelIndex currentDiscount  = ui->tableView->currentIndex();
    QObject::connect(redactHuman, SIGNAL(redacted_human(bool)), this, SLOT(update_human(bool)));

    redactHuman->show();
}

void ManageDatabase::update_human(bool){
    //Обновление
    DB db;
    QSqlQuery q;
    if(!old)
    {
        q = QSqlQuery(QString(
                    " select citizen.id, building.id as корпус, room.name as \"номер комнаты\", "
                    " citizen.surname as 'фамилия', citizen.name as 'имя', citizen.patronymic as 'отчество', "
                    " citizen.status as 'статус', citizen.position as 'должность', citizen.in_date as 'дата вселения', "
                    " citizen.out_date as 'дата выселения', citizen.telephone as 'телефон', "
                    " citizen.mail as 'почта' from citizen_room "
                    " inner join room on room.number = citizen_room.number "
                    " inner join building on room.building = building.id "
                    " inner join citizen on citizen_room.citizen = citizen.id "
                    " inner join dormitory_building on building.id = dormitory_building.building "
                    " where citizen.in_date < date() and citizen.out_date > date() and dormitory = %1;").arg(db.login.get_id_dormitory()));
    }
    else
    {
        q = QSqlQuery(QString(
                          " select citizen.id, building.id as корпус, room.name as \"номер комнаты\", "
                          " citizen.surname as 'фамилия', citizen.name as 'имя', citizen.patronymic as 'отчество', "
                          " citizen.status as 'статус', citizen.position as 'должность', citizen.in_date as 'дата вселения', "
                          " citizen.out_date as 'дата выселения', citizen.telephone as 'телефон', "
                          " citizen.mail as 'почта' from citizen_room "
                          " inner join room on room.number = citizen_room.number "
                          " inner join building on room.building = building.id "
                          " inner join citizen on citizen_room.citizen = citizen.id "
                          " inner join dormitory_building on building.id = dormitory_building.building "
                          " where citizen.out_date < date() and dormitory = %1;").arg(db.login.get_id_dormitory()));
    }

    model->setQuery(q);
    ui->tableView->setModel(model);
    this->set_model(model);
    ui->tableView->show();
}

void ManageDatabase::setTitle(QString name){
    QDate cDate = QDate::currentDate();
    ui->state_label->setText("Комендант: Главная->" + name + cDate.toString());
}
