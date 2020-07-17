#include "redactdata.h"
#include "ui_redactdata.h"

RedactData::RedactData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RedactData)
{
    ui->setupUi(this);
}

RedactData::~RedactData()
{
    delete ui;
}

void RedactData::on_pushButton_clicked()
{
    //Ввод данных
    // функия в бд и в Maincomendant
    emit redacted(true);
    this->close();
}

void RedactData::on_pushButton_2_clicked()
{
    this->close();
}

