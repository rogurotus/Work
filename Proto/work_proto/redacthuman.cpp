#include "redacthuman.h"
#include "ui_redacthuman.h"
#include "QMessageBox"
#include "db.h"

#include <qsqlquery.h>
#include <QDebug>

static QPair<int,int> old_number_building;

RedactHuman::RedactHuman(bool old, int citizen_id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RedactHuman)
{
    ui->setupUi(this);
    this->old = old;
    DB db;
    this->citizen_id = citizen_id;
    ui->phone_edit->setInputMask("[8]-(999)-999-99-99");

    QSqlQuery q(QString("select surname, citizen.name, patronymic, position, "
                        "in_date, out_date, telephone, mail, citizen_room.number, building.id "
                        "from citizen_room "
                        "inner join citizen on citizen = citizen.id "
                        "inner join room on citizen_room.number = room.number "
                        "inner join building on room.building = building.id "
                        "where citizen = %1;").arg(citizen_id));
    q.exec();
    q.next();


    ui->surname_label->setText(q.value(0).toString());
    ui->name_label->setText(q.value(1).toString());
    ui->patronymic_label->setText(q.value(2).toString());
    ui->status_label->setText("Должность/группа: ");
    ui->status_edit->setText(q.value(3).toString());
    ui->data_in_label->setText("Дата заселения: " + q.value(4).toString());
    ui->data_out_edit->setText(q.value(5).toString());
    ui->phone_edit->setText(q.value(6).toString());
    ui->mail_edit->setText(q.value(7).toString());

    old_number_building = QPair<int, int>(q.value(8).toInt(), q.value(9).toInt());
    QRegExp mailRx("^[A-Z a-z 0-9 @ _ \\.]{0,255}$");
    QValidator *mailVal = new QRegExpValidator(mailRx, this);

    QSqlQuery building(QString("select id "
                               "from building "
                               "inner join dormitory_building on dormitory_building.building = id "
                               "where dormitory = %1;").arg(db.login.get_id_dormitory()));

    ui->building_combobox->addItem(QString("Прежний (%1)").arg(QString::number(old_number_building.second)),
                                   old_number_building.second);

    building.exec();
    while(building.next())
    {
        ui->building_combobox->addItem(building.value(0).toString(), building.value(0).toInt());
    }



    ui->data_out_edit->setInputMask("[2\\0]99-99-99");
    ui->mail_edit->setValidator(mailVal);
}

RedactHuman::~RedactHuman()
{
    delete ui;
}

void RedactHuman::on_redacted_clicked()
{
    //Принять изменения
    QRegExp reg = QRegExp("^[A-Za-z0-9_]{1,100}[@]{1}[A-Za-z0-9_]{1,100}[\\.]{1}[A-Za-z0-9_]{1,100}$");
    if(ui->phone_edit->text().length() == 17 &&
            reg.exactMatch(ui->mail_edit->text()) &&
            isData(ui->data_out_edit->text()) &&
            ui->status_edit->text().length() != 0)
    {
        //Добавить данные
        auto _q = QString("update citizen set position = '%1', out_date = '%2', telephone = '%3', "
                          "mail = '%4' where id = %5;").arg(ui->status_edit->text().trimmed(),
                                                            ui->data_out_edit->text().trimmed(),
                                                            ui->phone_edit->text(),
                                                            ui->mail_edit->text(),
                                                            QString::number(citizen_id));
        // todo изменить комнату корпус
        auto _q2 = QString("update citizen_room set number = %1 where citizen = %2;").arg(
                                                             ui->room_combobox->currentData().toString(),
                                                             QString::number(citizen_id));
        qDebug() << _q2;

        QSqlQuery q2(_q2);
        q2.exec();
        QSqlQuery q(_q);
        qDebug() << _q << endl << q.exec();
        emit redacted_human(true);
        QMessageBox::information(NULL,QObject::tr("Уведомление"),tr("Данные отредактированы!"));
        this->close();
    }
    else
    {
        QMessageBox::information(NULL,QObject::tr("Важно!"),tr("Введены некорректные данные!"));
    }
}

bool RedactHuman::isData(QString data){
    bool len, month, day;

    if(data.length() == 10)
        len = true;
    else
        len = false;

    if(data.mid(5,2).toInt() < 13)
        month = true;
    else
        month = false;

    if(data.mid(8,2).toInt() < 32)
        day = true;
    else
        day = false;

    if(len && month && day)
        return true;
    else
        return false;
}

void RedactHuman::on_building_combobox_currentIndexChanged(int index)
{
    DB db;
    ui->room_combobox->clear();

    QSqlQuery name_room(QString("select name from room where number = %1;").arg(old_number_building.first));
    name_room.exec();
    name_room.next();
    ui->room_combobox->addItem(QString("Прежняя (%1)").arg(name_room.value(0).toString()), old_number_building.first);

    if(!old)
    {
        auto gg = QString("select name, number from( "
                          "select id as корпус , name, number, places from   "
                          "(select id, name, t1.number, places from (   "
                          "select building.id, room.name, room.number   "
                          "from citizen_room   "
                          "inner join room on room.number = citizen_room.number   "
                          "inner join building on room.building = building.id   "
                          "inner join citizen on citizen_room.citizen = citizen.id   "
                          "inner join dormitory_building on dormitory_building.building = building.id   "
                          "where citizen.out_date > date() and citizen.status != 1 and dormitory = %2   "
                          "union   "
                          "select building.id, room.name, room.number   "
                          "from citizen_room   "
                          "inner join room on room.number = citizen_room.number   "
                          "inner join building on room.building = building.id   "
                          "inner join citizen on citizen_room.citizen = citizen.id   "
                          "inner join dormitory_building on dormitory_building.building = building.id   "
                          "where citizen.out_date > date() and citizen.status != 1 and dormitory =  %2 ) t1   "
                          "inner join (select (building.place_in_room - count(*)) as places, room.number from citizen_room    "
                          "inner join room on room.number = citizen_room.number   "
                          "inner join building on room.building = building.id   "
                          "inner join citizen on citizen.id = citizen_room.citizen   "
                          "inner join dormitory_building on dormitory_building.building = building.id   "
                          "where citizen.out_date > date() and dormitory =  %2   "
                          "group by citizen_room.number) t2 on t1.number = t2.number   "
                          "where places > 0   "
                          "union   "
                          "select room.building, name, number, building.place_in_room as places from room   "
                          "inner join building on room.building = building.id   "
                          "inner join dormitory_building on dormitory_building.building = building.id   "
                          "where dormitory =  %2 "
                          "except   "
                          "select building.id, room.name, room.number, building.place_in_room as places   "
                          "from citizen_room   "
                          "inner join room on room.number = citizen_room.number   "
                          "inner join building on room.building = building.id   "
                          "inner join citizen on citizen_room.citizen = citizen.id   "
                          "inner join dormitory_building on dormitory_building.building = building.id   "
                          "where citizen.out_date > date() and dormitory =  %2)) where корпус = %1; " ).
                  arg(ui->building_combobox->currentData().toString(),
                  QString::number(db.login.get_id_dormitory()));
        QSqlQuery q(gg);
        qDebug() <<gg;
        q.exec();
        while(q.next())
        {
            ui->room_combobox->addItem(q.value(0).toString(), q.value(1).toInt());
        }
    }
    else
    {
        QSqlQuery q(QString("select name, number from room "
                            "inner join building on room.building = building.id "
                            "inner join dormitory_building on dormitory_building.building = building.id "
                            "where dormitory = %1;").arg(QString::number(db.login.get_id_dormitory())));
        q.exec();
        while(q.next())
        {
            ui->room_combobox->addItem(q.value(0).toString(), q.value(1).toInt());
        }
    }
}
