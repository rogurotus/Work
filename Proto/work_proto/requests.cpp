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
                " select *"
                " from citizen where in_date is null and out_date is null;");

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
