#ifndef DB_H
#define DB_H

#include <qsqlrelationaltablemodel.h>


namespace Ui
{
    class DB;
    class Login;
}

class Login
{

    explicit Login(QString login, QString pass);
    ~Login();
    bool check_login_pass(QString login, QString pass);

private:
    int id;
    QString address;
    QString name;
    QString surname;
    QString patronymic;

public:
    Login();
    int get_id();
    QString get_address();
    QString get_name();
    QString get_surname();
    QString get_patronymic();
};

class DB
{

public:
    explicit DB();
    ~DB();

private:
    static QSqlDatabase *_db;
    QSqlDatabase *db;
    Login login;
};



#endif // DB_H
