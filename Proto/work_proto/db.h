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

private:
    int id;

    int dormitory;

public:
    explicit Login(QString login, QString pass);
    ~Login();
    static bool check_login_pass(QString login, QString pass);
    Login();
    int get_id();
    QString address;
    QString name;
    QString surname;
    QString patronymic;
    int get_id_dormitory();
};

class DB
{

public:
    explicit DB();
    ~DB();
    static Login login;

private:
    static QSqlDatabase *_db;
    QSqlDatabase *db;

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
    int room;

    static QList<Citizen> search(QString name, QString surname, QString patronymic);
    static QSqlQueryModel* get_cojitel(QList<Citizen> citizens, QWidget* parent);
    //static QSqlRelationalTableModel
};





#endif // DB_H
