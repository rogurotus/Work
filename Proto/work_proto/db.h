#ifndef DB_H
#define DB_H

#include <QWidget>
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

class Citizen
{

public:
    explicit Citizen(int id);
    ~Citizen();
    int id;
    QString name;
    QString surname;
    QString patronymic;
    bool status;
    QString position;
    QString in_date;
    QString out_date;
    QString telephone;
    QString mail;
    QString room;

    static QList<Citizen> search(QString name, QString surname, QString patronymic);
    static QSqlQueryModel* get_cojitel(QList<Citizen> citizens, QWidget* parent);
    //static QSqlRelationalTableModel
};





#endif // DB_H
