#include "db.h"
#include <QSqlQuery>
#include <QDebug>

QSqlDatabase *DB::_db;

DB::DB()
{
    if(!_db)
    {
        _db = new QSqlDatabase();
        *_db = QSqlDatabase::addDatabase("QSQLITE");
        _db->setDatabaseName("..\\work.db");
        _db->open();
        db = _db;
    }
    else
    {
        db = _db;
    }
}
DB::~DB() {delete db;};

void DB::set_login(Login login)
{
    this->login = login;
}

Login::Login()
{
   this->name = "Гость";
}
Login::~Login(){}
Login::Login(QString login, QString pass)
{
    QSqlQuery query;
    query.exec(QString("select id, name, surname, patronymic from login where (login = %1 and password = %2);").arg(login,pass));
    query.next();
    this->id = query.value(0).toInt();
    this->name = query.value(1).toString();
    this->surname = query.value(2).toString();
    this->patronymic = query.value(3).toString();
}
int Login::get_id() {return id;}
QString Login::get_address() {return address;}
QString Login::get_name() {return name;}
QString Login::get_surname() {return surname;}
QString Login::get_patronymic() {return patronymic;}

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
    qDebug() << q << endl;
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
    QSqlQuery query;
    query.exec(QString("select id from citizen where name like '%%1' and surname like '%%2' and patronymic like '%%3';").
               arg(name, surname, patronymic));
    QList<Citizen> result;
    while(query.next())
    {
        result.push_back(Citizen(query.value(0).toInt()));
    }
    return result;
}

QSqlQueryModel* Citizen::get_cojitel(QList<Citizen> citizens, QWidget* parent) // возвращает всех сожителей по комнате
{
    QSqlQueryModel *model = new QSqlQueryModel(parent);
    if(citizens.size() > 0)
    {
        qDebug() << citizens[0].name << endl;
        QString query = "";
        for (int i = 0; i < citizens.size(); ++i)
        {
            query += QString( "select building.id, room.name, "
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
                    "where citizen_room.citizen = %1 ").arg(QString::number(citizens[i].room));
            if (i != citizens.size() - 1)
            {
                query += "union ";
            }
        }
        query += "order by room.name; ";
        qDebug() << endl << query;
        QSqlQuery *q = new QSqlQuery(query);
        model->setQuery(*q);
    }



    return model;
}

