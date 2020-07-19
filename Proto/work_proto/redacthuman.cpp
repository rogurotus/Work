#include "redacthuman.h"
#include "ui_redacthuman.h"
#include "QMessageBox"

RedactHuman::RedactHuman(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RedactHuman)
{
    ui->setupUi(this);

    ui->phone_edit->setInputMask("[8]-(999)-999-99-99");

    QRegExp mailRx("^[A-Z a-z 0-9 @ _ \\.]{0,255}$");
    QValidator *mailVal = new QRegExpValidator(mailRx, this);

    ui->data_out_edit->setInputMask("[2\\0]99-99-99");
    ui->mail_edit->setValidator(mailVal);
}

RedactHuman::~RedactHuman()
{
    delete ui;
}

void RedactHuman::on_redacted_clicked()
{
    //Принять изменения
    if(ui->phone_edit->text().length() == 17 &&
            isMail(ui->mail_edit->text()) &&
            isData(ui->data_out_edit->text()) &&
            ui->status_edit->text().length() != 0)
    {
        //Добавить данные
        emit redacted_human(true);
        QMessageBox::information(NULL,QObject::tr("Уведомление"),tr("Данные отредактированы!"));
        this->close();
    }
    else
    {
        QMessageBox::information(NULL,QObject::tr("Важно!"),tr("Введены некорректные данные!"));
    }
}

bool RedactHuman::isMail(QString mail){
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

bool RedactHuman::isData(QString data){
    bool len, month, day;

    if(data.length() == 10)
        len = true;
    else
        len = false;

    if(data.mid(5,2).toInt() < 13)
        month = true;
    else
        month = false;

    if(data.mid(8,2).toInt() < 32)
        day = true;
    else
        day = false;

    if(len && month && day)
        return true;
    else
        return false;
}
