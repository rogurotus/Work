#include "requests.h"
#include "ui_requests.h"
#include <QDate>

#include <qsqlquery.h>

Requests::Requests(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Requests)
{
    ui->setupUi(this);
    QSqlQueryModel* model = new QSqlQueryModel(this);
    QSqlQuery *q = new QSqlQuery(
                                                         "select "
                                                         "citizen.surname as 'фамилия', citizen.name as 'имя', citizen.patronymic as 'отчество', "
                                                         "citizen.status as 'статус', citizen.position as 'должность', "
                                                         "citizen.telephone  as 'телефон', "
                                                         "citizen.mail  as 'почта' from citizen where in_date is null and out_date is null;");

    model->setQuery(*q);
    ui->tableView->setModel(model);
}

Requests::~Requests()
{
    delete ui;
}

void Requests::setTitle(QString name){
    QDate cDate = QDate::currentDate();
    ui->state_label->setText("Комендант: Главная->" + name + cDate.toString());
}
