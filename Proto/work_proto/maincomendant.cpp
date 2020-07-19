#include "maincomendant.h"
#include "ui_maincomendant.h"
#include <QDate>
#include <QUrl>
#include <QCoreApplication>
#include <QDesktopServices>

MainComendant::MainComendant(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainComendant)
{
    ui->setupUi(this);

    QDate cDate = QDate::currentDate();
    ui->state_label->setText("Комендант: Главная " + cDate.toString());
}

MainComendant::~MainComendant()
{
    delete ui;
}

void MainComendant::on_action_triggered()
{
    //Добавить информацию о заселенных лицах
    manageDatabase = new ManageDatabase;
    manageDatabase->setWindowTitle("Добавление информации о заселенных лицах");
    manageDatabase->setTitle("Добавление информации о заселенных лицах ");
    manageDatabase->show();
}

void MainComendant::on_action_2_triggered()
{
    //Изменить информацию о выселенных лицах
    manageDatabase = new ManageDatabase;
    manageDatabase->setWindowTitle("Изменение информации о выселенных лицах");
    manageDatabase->setTitle("Изменение информации о выселенных лицах ");
    manageDatabase->show();
}

void MainComendant::on_action_3_triggered()
{
    //Получить список свободных мест
    view = new View;
    view->setWindowTitle("Получение списка свободных мест");
    view->setTitle("Получение списка свободных мест ");
    view->show();
}

void MainComendant::on_action_4_triggered()
{
    //Получить список свободных комнат
    view = new View;
    view->setWindowTitle("Получение списка свободных комнат");
    view->setTitle("Получение списка свободных комнат ");
    view->show();
}

void MainComendant::on_action_5_triggered()
{
    //Получить информацию о комнате
    seekByName = new SeekByName;
    seekByName->setWindowTitle("Получение информации о комнате");
    seekByName->setTitle("Получение информации о комнате ");
    seekByName->show();
}

void MainComendant::on_action_6_triggered()
{
    //Получить список проживающих
    view = new View;
    view->setWindowTitle("Получение списка проживающих");
    view->setTitle("Получение списка проживающих ");
    view->show();
}

void MainComendant::on_action_7_triggered()
{
    //Получить список заявок
    requests = new Requests;
    requests->setWindowTitle("Получение списка заявок");
    requests->setTitle("Получение списка заявок ");
    requests->show();
}

void MainComendant::on_pushButton_clicked()
{
    redactData = new RedactData;

    QObject::connect(redactData, SIGNAL(redacted(bool)), this, SLOT(update(bool)));

    redactData->show();
}

//////////////////////////////////////////////Здесь обновление
void MainComendant::update(bool){
    ui->state_label->setText("AAAAAAAAAAAAAAAAAAAAAA");
}

void MainComendant::on_action_8_triggered()
{
    //Справка пользователя
    QUrl url;
    url = QCoreApplication::applicationDirPath() + "/help_user.html";
    QDesktopServices temp;
    temp.openUrl(url);
}

void MainComendant::on_action_9_triggered()
{
    //Справка разработчика
    QUrl url;
    url = QCoreApplication::applicationDirPath() + "/help_developer.html";
    QDesktopServices temp;
    temp.openUrl(url);
}
