#include "mainvisiter.h"
#include "ui_mainvisiter.h"
#include <QDate>

MainVisiter::MainVisiter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainVisiter)
{
    ui->setupUi(this);

    QDate cDate = QDate::currentDate();
    ui->label->setText("Гость: Главная " + cDate.toString());
}

MainVisiter::~MainVisiter()
{
    delete ui;
}

void MainVisiter::on_pushButton_clicked()
{
    makeRequest = new MakeRequest;
    makeRequest->show();
}
