#include "requests.h"
#include "ui_requests.h"
#include <QDate>

Requests::Requests(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Requests)
{
    ui->setupUi(this);
}

Requests::~Requests()
{
    delete ui;
}

void Requests::setTitle(QString name){
    QDate cDate = QDate::currentDate();
    ui->state_label->setText("Комендант: Главная->" + name + cDate.toString());
}
