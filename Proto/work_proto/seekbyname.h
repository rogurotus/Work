#ifndef SEEKBYNAME_H
#define SEEKBYNAME_H

#include <QWidget>

namespace Ui {
class SeekByName;
}

class SeekByName : public QWidget
{
    Q_OBJECT

public:
    explicit SeekByName(QWidget *parent = nullptr);
    ~SeekByName();

public slots:
    void setTitle(QString name);

private slots:
    void on_Enter_FIO_clicked();

private:
    Ui::SeekByName *ui;
};

#endif // SEEKBYNAME_H
