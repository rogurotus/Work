#include "makerequest.h"
#include "ui_makerequest.h"
#include <QDate>
#include <QMessageBox>
#include <QRegExp>
#include <QRegExpValidator>

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

        if(ui->phone_edit->text().length() == 17 && isMail(ui->mail_edit->text()))
        {
            //Запись в бд
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

bool MakeRequest::isMail(QString mail){
    bool Flet, Odog, notDot, Odot, lastCh;

    if (mail[0] != "." && mail[0] != "@")
        Flet = true;
    else
        Flet = false;

    if(mail.count("@") == 1)
        Odog = true;
    else
        Odog = false;

    if(mail[mail.indexOf("@") + 1] != ".")
        notDot = true;
    else
        notDot = false;

    if(mail.count(".") == 1 && (mail.indexOf(".") > mail.indexOf("@")))
        Odot = true;
    else
        Odot = false;

    if(mail.indexOf(".") < mail.length() - 1)
        lastCh = true;
    else
        lastCh = false;

    if(Flet && Odog && notDot && Odot && lastCh)
        return true;
    else
        return false;
}
