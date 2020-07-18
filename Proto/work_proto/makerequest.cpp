#include "makerequest.h"
#include "ui_makerequest.h"
#include <QDate>
#include <QMessageBox>
#include <QRegExp>

MakeRequest::MakeRequest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MakeRequest)
{
    ui->setupUi(this);

    ui->phone_edit->setInputMask("[8]-(999)-999-99-99");
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
            ui->group_work_edit->text().length() != 0 &&
            (ui->student_radio->isChecked() || ui->sotrudnik_radio->isChecked()))
    {
        //Желательно поразбираться с регулярными выражениями
        //При успехе - запись данных в бд
    }
    else
    {
        QMessageBox::information(NULL,QObject::tr("Важно!"),tr("Пожалуйста, укажите все данные!"));
    }
}
