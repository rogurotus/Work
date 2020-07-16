#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"

#include <QSqlQuery>
#include <QSqlRelationalDelegate>

static QSqlDatabase db;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("..\\work.db");
    db.open();
    if(db.isOpen())
    {
        for(int i = 1; i < 10; ++i)
        {
            int status = 0;
            if(i % 5 == 0)
            {
                status = 1;
            }
            QSqlQuery query;
            query.exec("insert into citizen"
                       "(name, surname, patronymic, status, position, in_date, out_date, telephone, mail )"
                       "values ('Имя " + QString::number(i) + "', 'Фамилия " + QString::number(i)
                       + "', 'Отчество" + QString::number(i) + "'," + QString::number(status)
                       + ", 'Должность', '2020-07-15', '2020-08-" + QString::number(i + 1) + "', '0000000000', 'Мыло'" + ")");
        }

        qDebug() << endl << "good" << endl;
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

