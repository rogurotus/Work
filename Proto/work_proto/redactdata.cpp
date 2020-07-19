#include "redactdata.h"
#include "ui_redactdata.h"
#include <QMessageBox>

RedactData::RedactData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RedactData)
{
    ui->setupUi(this);

    QRegExp rxFio("^[A-Z a-z А-Я а-я]{0,255}$");
    QValidator *fio = new QRegExpValidator(rxFio, this);

    QRegExp num("^[0-9]{0,3}$");
    QValidator *numVal = new QRegExpValidator(num, this);

    QRegExp address("^[A-Z a-z А-Я а-я 0-9 \\.]{0,255}$");
    QValidator *addVal = new QRegExpValidator(address, this);

    ui->address_edit->setValidator(addVal);
    ui->surname_edit->setValidator(fio);
    ui->name_edit->setValidator(fio);
    ui->patronymic_edit->setValidator(fio);
    ui->room_amount1_edit->setValidator(numVal);
    ui->room_amount2_edit->setValidator(numVal);
}

RedactData::~RedactData()
{
    delete ui;
}

void RedactData::on_pushButton_clicked()
{
    //Ок
    if(ui->address_edit->text().length() != 0 &&
            ui->surname_edit->text().length() != 0 &&
            ui->name_edit->text().length() != 0 &&
            ui->patronymic_edit->text().length() != 0 &&
            ui->room_amount1_edit->text().length() != 0 &&
            ui->room_amount2_edit->text().length() != 0)
    {
        //Ввод данных
        emit redacted(true);
        QMessageBox::information(NULL,QObject::tr("Уведомление"),tr("Данные отредактированы!"));
        this->close();
    }
    else
    {
        QMessageBox::information(NULL,QObject::tr("Важно!"),tr("Заполните все поля!"));
    }
}

void RedactData::on_pushButton_2_clicked()
{
    //Отмена
    this->close();
}
