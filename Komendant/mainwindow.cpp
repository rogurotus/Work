#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
    if(ui->lineEdit->text().length() == 0)
    {
        ui->label->setStyleSheet("color: rgb(200, 0, 0)");
        ui->label->setText("Введите логин!!!");
    }
    else
    {
        ui->label->setStyleSheet("color: rgb(0, 0, 0)");
        ui->label->setText("Введите логин");

        if(ui->lineEdit_2->text().length() == 0)
        {
            ui->label_2->setStyleSheet("color: rgb(200, 0, 0)");
            ui->label_2->setText("Введите пароль!!!");
        }
        else
        {
            //Поиск учетной записи, если успех то вход в активность. Иначе вывод сообщения
        }
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    mainvisiter = new MainVisiter;
    mainvisiter->show();
    this->close();
}
