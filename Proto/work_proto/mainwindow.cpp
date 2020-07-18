#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "db.h"

#include <QSqlQuery>
#include <QSqlRelationalDelegate>
#include <qmessagebox.h>

static DB db;

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
                if(Login::check_login_pass(ui->login_edit->text(), ui->lineEdit_2->text()))
                {
                    // инициализая db.login
                    db.login = Login(ui->login_edit->text(), ui->lineEdit_2->text());
                    maincomendant = new MainComendant;
                    maincomendant->show();
                    this->close();
                }
                else
                {
                    QMessageBox::information(NULL,QObject::tr("Важно!"),tr("Неверный логин или пароль"));
                }

            }
        }
}
