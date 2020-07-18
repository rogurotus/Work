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
    ui->setupUi(this);
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
    ui->building1_label->setText("Корпус №" + QString::number(build_id_first));
    ui->room_amount1_label->setText("Всего комнат " + QString::number(build.value(1).toInt()));
    ui->place_amount1_label->setText("Мест в комнате " + QString::number(build.value(2).toInt()));

    build.next();
    build_id_second = build.value(0).toInt();
    ui->building2_label->setText("Корпус №" + QString::number(build_id_second));
    ui->room_amount2_label->setText("Всего комнат " + QString::number(build.value(1).toInt()));
    ui->place_amount2_label->setText("Мест в комнате " + QString::number(build.value(2).toInt()));

    //db.login.get_name() и тд;

    qDebug() << build_id_first << "   " << build_id_second << "   " << db.login.get_id_dormitory() << endl;


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
    db.login.patronymic = "";*/

    QString room_amount1_edit = ui->room_amount1_edit->text();
    if(ui->room_amount1_edit->text() == "")
    {
        room_amount1_edit = ui->room_amount1_edit->text();
    }

    QString place_amount1_spinbox = QString::number(ui->place_amount1_spinbox->value());
    if(ui->place_amount1_spinbox->value() == 0)
    {
        place_amount1_spinbox = ui->place_amount1_label->text().replace("Мест в комнате ", "");
    }

    auto bug = QString("update building set rooms = %1, "
                       "place_in_room = %2 "
                       "where id = %3;").
                       arg(room_amount1_edit,
                       place_amount1_spinbox,
                       QString::number(build_id_first));
    qDebug() << bug << endl;
    QSqlQuery first_build(bug);
    qDebug() << first_build.exec();

    QString room_amount2_edit = ui->room_amount2_edit->text();
    if(ui->room_amount2_edit->text() == "")
    {
        room_amount2_edit = ui->room_amount2_edit->text();
    }

    QString place_amount2_spinbox = QString::number(ui->place_amount2_spinbox->value());
    if(ui->place_amount2_spinbox->value() == 0)
    {
        place_amount2_spinbox = ui->place_amount2_label->text().replace("Мест в комнате ", "");
    }

    QSqlQuery second_build(QString("update building set rooms = %1, "
                                  "place_in_room = %2 "
                                  "where id = %3;").arg(
                                  room_amount2_edit,
                                  place_amount2_spinbox,
                                  QString::number(build_id_second)));
    second_build.exec();

    emit redacted(true);
    this->close();
}

void RedactData::on_pushButton_2_clicked()
{
    //Отмена
    this->close();
}


