#include "makerequest.h"
#include "ui_makerequest.h"
#include <QDate>
#include <QMessageBox>
#include <QRegExp>
#include <QRegExpValidator>
#include <qsqlquery.h>

MakeRequest::MakeRequest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MakeRequest)
{
    ui->setupUi(this);

    QRegExp rxFio("^[A-Z a-z А-Я а-я]{0,255}$");
    QValidator *fio = new QRegExpValidator(rxFio, this);

    ui->surname_edit->setValidator(fio);
    ui->name_edit->setValidator(fio);
    ui->patronymic_edit->setValidator(fio);

    ui->phone_edit->setInputMask("[8]-(999)-999-99-99");

    QRegExp mailRx("^[A-Z a-z 0-9 @ _ \\.]{0,255}$");
    QValidator *validator = new QRegExpValidator(mailRx, this);
    ui->mail_edit->setValidator(validator);

    ui->student_radio->setChecked(true);
}

MakeRequest::~MakeRequest()
{
    delete ui;
}

void MakeRequest::on_pushButton_clicked()
{
    //QDate cDate = QDate::currentDate(); //Возвращает дату заявки

    if(ui->surname_edit->text().length() != 0 &&
            ui->name_edit->text().length() != 0 &&
            ui->phone_edit->text().length() != 0 &&
            ui->mail_edit->text().length() != 0 &&
            ui->group_work_edit->text().length() != 0)
    {
        QRegExp reg = QRegExp("^[A-Za-z0-9_]{1,100}[@]{1}[A-Za-z0-9_]{1,100}[\\.]{1}[A-Za-z0-9_]{1,100}$");
        if(ui->phone_edit->text().length() == 17 && reg.exactMatch(ui->mail_edit->text()))
        {
            //Запись в бд
            /*QSqlQuery q(QString("insert into citizen (surname, name, patronymic, status, position, telephone, mail) "
                                "values ('%1', '%2', '%3', %4, '%5', '%6', '%7')").arg(
                                ));*/
            QMessageBox::information(NULL,QObject::tr("Уведомление"),tr("Заявка отправлена!"));
            this->close();
        }
        else
        {
            QMessageBox::information(NULL,QObject::tr("Важно!"),tr("Введены некорректные данные телефона или электронной почты!"));
        }
    }
    else
    {
        QMessageBox::information(NULL,QObject::tr("Важно!"),tr("Пожалуйста, укажите все данные!"));
    }
}
