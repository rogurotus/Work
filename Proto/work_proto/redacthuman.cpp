#include "redacthuman.h"
#include "ui_redacthuman.h"
#include "QMessageBox"
#include "db.h"

#include <qsqlquery.h>
#include <QDebug>

RedactHuman::RedactHuman(int citizen_id, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RedactHuman)
{
    ui->setupUi(this);
    DB db;
    this->citizen_id = citizen_id;
    ui->phone_edit->setInputMask("[8]-(999)-999-99-99");

    QSqlQuery q(QString("select surname, name, patronymic, position, "
                        "in_date, out_date, telephone, mail "
                        "from citizen where id = %1;").arg(citizen_id));
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
    QRegExp mailRx("^[A-Z a-z 0-9 @ _ \\.]{0,255}$");
    QValidator *mailVal = new QRegExpValidator(mailRx, this);

    QSqlQuery building(QString("select id "
                               "from building "
                               "inner join dormitory_building on dormitory_building.building = id "
                               "where dormitory = %1;").arg(db.login.get_id_dormitory()));
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
    if(ui->phone_edit->text().length() == 17 &&
            isMail(ui->mail_edit->text()) &&
            isData(ui->data_out_edit->text()) &&
            ui->status_edit->text().length() != 0)
    {
        //Добавить данные
        QSqlQuery q(QString("update citizen set position = '%1', out_date = '%2', telephone = '%3' "
                            "mail = '%4' where id = %5;").arg(ui->status_edit->text().trimmed(),
                                                              ui->data_out_edit->text(),
                                                              ui->phone_edit->text(),
                                                              ui->mail_edit->text(),
                                                              QString::number(citizen_id)));
        qDebug() << q.exec();
        emit redacted_human(true);
        QMessageBox::information(NULL,QObject::tr("Уведомление"),tr("Данные отредактированы!"));
        this->close();
    }
    else
    {
        QMessageBox::information(NULL,QObject::tr("Важно!"),tr("Введены некорректные данные!"));
    }
}

bool RedactHuman::isMail(QString mail){
    bool Flet, Odog, notDot, Odot, lastCh;

    if (mail[0] != "." && mail[0] != "@")
        Flet = true;
    else
        Flet = false;

    if(mail.count("@") == 1)
        Odog = true;
    else
        Odog = false;

    if(mail[mail.indexOf("@") + 1] != ".")
        notDot = true;
    else
        notDot = false;

    if(mail.count(".") == 1 && (mail.indexOf(".") > mail.indexOf("@")))
        Odot = true;
    else
        Odot = false;

    if(mail.indexOf(".") < mail.length() - 1)
        lastCh = true;
    else
        lastCh = false;

    if(Flet && Odog && notDot && Odot && lastCh)
        return true;
    else
        return false;
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
    ui->room_combobox->clear();
    QSqlQuery q(QString("select number, name from room inner "
                        "join building on room.building = id "
                        "where building = %1;").arg(ui->building_combobox->currentData().toString()));
    q.exec();
    while(q.next())
    {
        ui->room_combobox->addItem(q.value(1).toString(), q.value(0).toInt());
    }
}
