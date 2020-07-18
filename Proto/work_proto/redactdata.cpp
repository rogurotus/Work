#include "db.h"
#include "redactdata.h"
#include "ui_redactdata.h"
#include <qsqlquery.h>
#include <QDebug>

static int build_id_first;
static int build_id_second;

RedactData::RedactData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RedactData)
{
    DB db;
    QSqlQuery build(QString("select building.id, rooms, place_in_room "
                            "from dormitory_building "
                            "inner join building on dormitory_building.building = building.id "
                            "where dormitory = %1 "
                            "order by building.id;").
                            arg(QString::number(db.login.get_id_dormitory())));
    build.exec();
    build.next();
    build_id_first = build.value(0).toInt();
    //заполнить данные по первой общаге

    build.next();
    build_id_second = build.value(0).toInt();
    //заполнить данные по второй общаге

    //db.login.get_name() и тд;

    qDebug() << build_id_first << "   " << build_id_second << "   " << db.login.get_id_dormitory() << endl;

    ui->setupUi(this);
}

RedactData::~RedactData()
{
    delete ui;
}

void RedactData::on_pushButton_clicked()
{
    //не забыть заменить пустые строки на данные из лайблов
    DB db;
    /*QSqlQuery login(QString("update login set surname = '%1' "
                        "set name = '%2' "
                        "set patronymic = '%3' where id = %4;").
                        arg("","","",QString::number(db.login.get_id())));
    login.exec();


    db.login.name = "";
    db.login.surname = "";
    db.login.patronymic = "";


    QSqlQuery first_build(QString("update building set rooms = '%1' "
                                  "set place_in_room = '%2' "
                                  "where id = %3;").
                                  arg("","",QString::number(build_id_first)));
    first_build.exec();

    QSqlQuery second_build(QString("update building set rooms = '%1' "
                                  "set place_in_room = '%2' "
                                  "where id = %3;").
                                  arg("","",QString::number(build_id_second)));
    second_build.exec();*/

    emit redacted(true);
    this->close();
}

void RedactData::on_pushButton_2_clicked()
{
    //Отмена
    this->close();
}

