#include "db.h"
#include "managedatabase.h"
#include "ui_managedatabase.h"
#include <qsqlquery.h>
#include <qsqlrelationaltablemodel.h>

ManageDatabase::ManageDatabase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManageDatabase)
{
    ui->setupUi(this);
}

ManageDatabase::~ManageDatabase()
{
    delete ui;
}

void ManageDatabase::on_pushButton_clicked()
{
    //Добавить
    model->insertRows(model->rowCount(), 1, QModelIndex());
    ui->tableView->update();
}

void ManageDatabase::on_pushButton_2_clicked()
{
    //Удалить
    QModelIndex currentDiscount  = ui->tableView->currentIndex();
    model->removeRow(currentDiscount.row(),QModelIndex());
}

void ManageDatabase::set_model(QSqlQueryModel* model)
{
    this->model = model;
    ui->tableView->setModel(model);
}

void ManageDatabase::on_redact_button_clicked()
{
    //Редактирование
    redactHuman = new RedactHuman;

    QObject::connect(redactHuman, SIGNAL(redacted_human(bool)), this, SLOT(update_human(bool)));

    redactHuman->show();
}

void ManageDatabase::update_human(bool){
    //Обновление
    DB db;
    QSqlQuery *q = new QSqlQuery(QString(
                " select building.id as корпус, room.name as \"номер комнаты\", "
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
    this->set_model(model);
}
