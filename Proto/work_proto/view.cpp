#include "view.h"
#include "ui_view.h"
#include <QDate>

View::View(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::View)
{
    ui->setupUi(this);
}

View::~View()
{
    delete ui;
}

void View::setTitle(QString name){
    QDate cDate = QDate::currentDate();
    ui->state_label->setText("Комендант: Главная->" + name + cDate.toString());
}
