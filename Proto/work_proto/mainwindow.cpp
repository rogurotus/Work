#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->password_edit->setEchoMode(QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    mainvisiter = new MainVisiter;
    mainvisiter->show();
    this->close();
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->login_edit->text().length() == 0)
        {
            ui->login_label->setStyleSheet("color: rgb(200, 0, 0)");
            ui->login_label->setText("Введите логин!!!");
        }
        else
        {
            ui->login_label->setStyleSheet("color: rgb(0, 0, 0)");
            ui->login_label->setText("Введите логин");

            if(ui->password_edit->text().length() == 0)
            {
                ui->password_label->setStyleSheet("color: rgb(200, 0, 0)");
                ui->password_label->setText("Введите пароль!!!");
            }
            else
            {
                //Поиск учетной записи, если успех то вход в активность. Иначе вывод сообщения
                maincomendant = new MainComendant;
                maincomendant->show();
                this->close();
            }
        }
}
