#include "redacthuman.h"
#include "ui_redacthuman.h"

RedactHuman::RedactHuman(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RedactHuman)
{
    ui->setupUi(this);

    ui->phone_edit->setInputMask("[8]-(999)-999-99-99");
}

RedactHuman::~RedactHuman()
{
    delete ui;
}

void RedactHuman::on_redacted_clicked()
{
    //Принять изменения
    emit redacted_human(true);
}
