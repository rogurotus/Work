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
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
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
                if(Login::check_login_pass(ui->login_edit->text(), ui->lineEdit_2->text()))
                {
                    // инициализая db.login
                    db.set_login(Login(ui->login_edit->text(), ui->lineEdit_2->text()));
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
