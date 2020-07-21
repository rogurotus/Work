#include "db.h"
#include <QSqlQuery>
#include <QDebug>

QSqlDatabase *DB::_db;
Login DB::login;

DB::DB()
{
    if(!_db)
    {
        _db = new QSqlDatabase();
        *_db = QSqlDatabase::addDatabase("QSQLITE");
        _db->setDatabaseName("C:/InterfacePrototype/Work/Proto/work.db");
        _db->open();
        db = _db;
    }
    else
    {
        db = _db;
    }
}
DB::~DB()
{
    if(!db) {delete db;}
}

Login::Login()
{
   this->name = "Гость";
}
Login::~Login(){}
Login::Login(QString login, QString pass)
{
    QSqlQuery query;
    query.exec(QString("select login.id, name, surname, patronymic, dormitory.id, address "
                       "from dormitory "
                       "inner join login on manager = login.id "
                       "where (login.login = '%1' and login.password = '%2');").arg(login,pass));
    query.next();
    this->id = query.value(0).toInt();
    this->name = query.value(1).toString();
    this->surname = query.value(2).toString();
    this->patronymic = query.value(3).toString();
    this->dormitory = query.value(4).toInt();
    this->address = query.value(5).toString();
}
int Login::get_id() {return id;}
int Login::get_id_dormitory() {return dormitory;}

bool Login::check_login_pass(QString login, QString pass)
{
    QSqlQuery query;
    query.exec(QString("select id, name, surname, patronymic from login where (login = '%1' and password = '%2');").arg(login,pass));
    return query.next();
}

Citizen::Citizen(int id)
{
    QString q = QString(
                "select citizen.id, citizen.name, citizen.surname, citizen.patronymic, "
                "citizen.status, position, in_date, out_date, telephone, mail, citizen_room.number "
                "from citizen_room "
                "inner join room on room.number = citizen_room.number "
                "inner join building on room.building = building.id "
                "inner join citizen on citizen_room.citizen = citizen.id "
                "where citizen = %1;"
                ).arg(QString::number(id));
    QSqlQuery query;
    query.exec(q);
    query.next();
    this->id = query.value(0).toInt();
    this->name = query.value(1).toString();
    this->surname = query.value(2).toString();
    this->patronymic = query.value(3).toString();
    this->status = query.value(4).toBool();
    this->position = query.value(5).toString();
    this->in_date = query.value(6).toString();
    this->out_date = query.value(7).toString();
    this->telephone = query.value(8).toString();
    this->mail = query.value(9).toString();
    this->room = query.value(10).toInt();
}

Citizen::~Citizen() {}

QList<Citizen> Citizen::search(QString name, QString surname, QString patronymic)
{
    DB db;
    QSqlQuery query;
    query.exec(QString("select citizen.id from citizen_room "
                       "inner join citizen on citizen = citizen.id "
                       "inner join room on citizen_room.number = room.number "
                       "inner join building on room.building = building.id "
                       "inner join dormitory_building on building.id = dormitory_building.building "
                       "where citizen.name like '%1%' and citizen.surname like '%2%' "
                       "and citizen.patronymic like '%3%' "
                       "and dormitory = %4;").
               arg(name, surname, patronymic, QString::number(db.login.get_id_dormitory())));
    QList<Citizen> result;
    while(query.next())
    {
        result.push_back(Citizen(query.value(0).toInt()));
        qDebug() << result.back().surname;
    }
    return result;
}

QSqlQueryModel* Citizen::get_cojitel(QList<Citizen> citizens, QWidget* parent) // возвращает всех сожителей по комнате
{
    QSqlQueryModel *model = new QSqlQueryModel(parent);
    if(citizens.size() > 0)
    {
        QString set_citizen = "(";
        for(int i = 0; i < citizens.size(); ++i)
        {
            set_citizen += QString::number(citizens[i].id);
            if(i != citizens.size() - 1)
            {
                set_citizen += ", ";
            }
        }
        set_citizen += ")";
        QString query = QString("select building.id as корпус, room.name as \"номер комнаты\", "
                "(building.place_in_room - t2.places) as \"свободно мест\", "
                "citizen.surname as 'фамилия' , citizen.name as 'имя', citizen.patronymic as 'отчество', "
                "citizen.status as 'статус', citizen.position as 'должность', citizen.in_date as 'дата заселения', "
                "citizen.out_date as 'дата выселения', citizen.telephone as 'телефон', "
                "citizen.mail as 'почта' from citizen_room "
                "inner join room on room.number = citizen_room.number "
                "inner join building on room.building = building.id "
                "inner join citizen on citizen_room.citizen = citizen.id "
                "inner join "
                "(select count(*) as places, room.number from citizen_room "
                "inner join room on room.number = citizen_room.number "
                "inner join building on room.building = building.id "
                "group by citizen_room.number) t2 on room.number = t2.number "
                "where citizen_room.number in (select number from citizen_room "
                "where citizen in %1) ").arg(set_citizen);

        qDebug() << query;
        query += "order by room.name; ";
        QSqlQuery *q = new QSqlQuery(query);
        model->setQuery(*q);
    }
    return model;
}

