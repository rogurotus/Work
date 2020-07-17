#include "maincomendant.h"
#include "ui_maincomendant.h"
#include <QDate>

MainComendant::MainComendant(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainComendant)
{
    ui->setupUi(this);

    QDate cDate = QDate::currentDate();
    ui->label->setText("Комендант: Главная " + cDate.toString());

    // заполнение ui из бд
}

MainComendant::~MainComendant()
{
    delete ui;
}

void MainComendant::on_action_triggered()
{
    //Добавить информацию о заселенных лицах
    manageDatabase = new ManageDatabase;
    manageDatabase->show();
}

void MainComendant::on_action_2_triggered()
{
    //Изменить информацию о выселенных лицах
    manageDatabase = new ManageDatabase;
    manageDatabase->show();
}

void MainComendant::on_action_3_triggered()
{
    //Получить список свободных мест
    view = new View;
    view->show();
}

void MainComendant::on_action_4_triggered()
{
    //Получить список свободных комнат
    view = new View;
    view->show();
}

void MainComendant::on_action_5_triggered()
{
    //Получить информацию о комнате
    seekByName = new SeekByName;
    seekByName->show();
}

void MainComendant::on_action_6_triggered()
{
    //Получить список проживающих
    view = new View;
    view->show();
}

void MainComendant::on_action_7_triggered()
{
    //Получить список заявок
    requests = new Requests;
    requests->show();
}

void MainComendant::on_pushButton_clicked()
{
    redactData = new RedactData;

    QObject::connect(redactData, SIGNAL(redacted(bool)), this, SLOT(update(bool)));

    redactData->show();
}

void MainComendant::update(bool){
    ui->label->setText("AAAAAAAAAAAAAAAAAAAAAA");
}
