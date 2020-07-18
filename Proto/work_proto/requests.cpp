#include "requests.h"
#include "ui_requests.h"

#include <qsqlquery.h>

Requests::Requests(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Requests)
{
    ui->setupUi(this);
    QSqlQueryModel* model = new QSqlQueryModel(this);
    QSqlQuery *q = new QSqlQuery(QString("select citizen.id, name, surname, patronymic, "
                                         "status, position, telephone, mail from request_dormitory "
                                         "inner join citizen on human = citizen.id;"));

    model->setQuery(*q);
    ui->tableView->setModel(model);
}

Requests::~Requests()
{
    delete ui;
}


