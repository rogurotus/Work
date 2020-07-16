#include "db.h"
#include <QSqlQuery>

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

Login::Login()
{
   this->name = "Гость";
}
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
    query.exec(QString("select id, name, surname, patronymic from login where (login = %1 and password = %2);").arg(login,pass));
    return query.next();
}
