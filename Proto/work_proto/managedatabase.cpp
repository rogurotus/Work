#include "managedatabase.h"
#include "ui_managedatabase.h"
#include <qsqlrelationaltablemodel.h>

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
    model->insertRows(model->rowCount(), 1, QModelIndex());
    ui->tableView->update();
}

void ManageDatabase::on_pushButton_2_clicked()
{
    //Удалить
    QModelIndex currentDiscount  = ui->tableView->currentIndex();
    model->removeRow(currentDiscount.row(),QModelIndex());
}

void ManageDatabase::set_model(QSqlRelationalTableModel* model)
{
    this->model = model;
    ui->tableView->setModel(model);
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
