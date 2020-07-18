#include "seekbyname.h"
#include "ui_seekbyname.h"
#include "db.h"

SeekByName::SeekByName(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SeekByName)
{
    ui->setupUi(this);
}

SeekByName::~SeekByName()
{
    delete ui;
}

void SeekByName::on_Enter_FIO_clicked()
{
    auto citizens = Citizen::search(ui->name_edit->text(), ui->surname_edit->text(), ui->patronymic_edit->text());
    ui->tableView->setModel(Citizen::get_cojitel(citizens, this));
}
