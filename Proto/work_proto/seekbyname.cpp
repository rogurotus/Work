#include "seekbyname.h"
#include "ui_seekbyname.h"

SeekByName::SeekByName(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SeekByName)
{
    ui->setupUi(this);
}

SeekByName::~SeekByName()
{
    delete ui;
}
