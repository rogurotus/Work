#include "managedatabase.h"
#include "ui_managedatabase.h"

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
