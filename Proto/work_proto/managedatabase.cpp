#include "managedatabase.h"
#include "ui_managedatabase.h"
#include <QDate>

ManageDatabase::ManageDatabase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManageDatabase)
{
    ui->setupUi(this);
}

ManageDatabase::~ManageDatabase()
{
    delete ui;
}

void ManageDatabase::on_pushButton_clicked()
{
    //Добавить
}

void ManageDatabase::on_pushButton_2_clicked()
{
    //Удалить
}

void ManageDatabase::on_redact_button_clicked()
{
    //Редактирование
    redactHuman = new RedactHuman;

    QObject::connect(redactHuman, SIGNAL(redacted_human(bool)), this, SLOT(update_human(bool)));

    redactHuman->show();
}

void ManageDatabase::update_human(bool){
    //Обновление
    ui->state_label->setText("AAAAAAAAAAAAAAAAAAAAAAAA");
}

void ManageDatabase::setTitle(QString name){
    QDate cDate = QDate::currentDate();
    ui->state_label->setText("Комендант: Главная->" + name + cDate.toString());

    if(name == "Изменение информации о выселенных лицах ")
    {
        ui->pushButton->hide();
        ui->horizontalSpacer_4->changeSize(0, 10);
    }
}
