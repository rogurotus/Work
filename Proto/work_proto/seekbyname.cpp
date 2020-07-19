#include "seekbyname.h"
#include "ui_seekbyname.h"
#include <QDate>

SeekByName::SeekByName(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SeekByName)
{
    ui->setupUi(this);

    QRegExp rxFio("^[A-Z a-z А-Я а-я]{0,255}$");
    QValidator *fio = new QRegExpValidator(rxFio, this);

    ui->surname_edit->setValidator(fio);
    ui->name_edit->setValidator(fio);
    ui->patronymic_edit->setValidator(fio);
}

SeekByName::~SeekByName()
{
    delete ui;
}

void SeekByName::on_Enter_FIO_clicked()
{
    auto citizens = Citizen::search(ui->name_edit->text(), ui->surname_edit->text(), ui->patronymic_edit->text());
    qDebug() << citizens.size();
    ui->tableView->setModel(Citizen::get_cojitel(citizens, this));
}

void SeekByName::setTitle(QString name){
    QDate cDate = QDate::currentDate();
    ui->state_label->setText("Комендант: Главная->" + name + cDate.toString());
}
