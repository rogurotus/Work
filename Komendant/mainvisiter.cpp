#include "mainvisiter.h"
#include "ui_mainvisiter.h"

MainVisiter::MainVisiter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainVisiter)
{
    ui->setupUi(this);
}

MainVisiter::~MainVisiter()
{
    delete ui;
}
