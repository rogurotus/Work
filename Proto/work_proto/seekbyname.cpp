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
    auto citizens = Citizen::search(ui->lineEdit_2->text(), ui->lineEdit->text(), ui->lineEdit_3->text());
    ui->tableView->setModel(Citizen::get_cojitel(citizens, this));
}
