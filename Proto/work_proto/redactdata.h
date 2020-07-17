#ifndef REDACTDATA_H
#define REDACTDATA_H

#include <QWidget>


namespace Ui {
class RedactData;
}

class RedactData : public QWidget
{
    Q_OBJECT

public:
    explicit RedactData(QWidget *parent = nullptr);
    ~RedactData();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::RedactData *ui;
};

#endif // REDACTDATA_H
