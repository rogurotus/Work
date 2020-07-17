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

    ui->lineEdit_5->setInputMask("[8]-(999)-999-99-99");
}

MakeRequest::~MakeRequest()
{
    delete ui;
}

void MakeRequest::on_pushButton_clicked()
{
    //QDate cDate = QDate::currentDate(); //Возвращает дату заявки

    if(ui->lineEdit->text().length() != 0 &&
            ui->lineEdit_2->text().length() != 0 &&
            ui->lineEdit_3->text().length() != 0 &&
            ui->lineEdit_4->text().length() != 0 &&
            ui->lineEdit_5->text().length() != 0 &&
            ui->lineEdit_6->text().length() != 0 &&
            (ui->radioButton->isChecked() || ui->radioButton_2->isChecked()))
    {
        //Желательно поразбираться с регулярными выражениями
        //При успехе - запись данных в бд
    }
    else
    {
        QMessageBox::information(NULL,QObject::tr("Важно!"),tr("Пожалуйста, укажите все данные!"));
    }
}
