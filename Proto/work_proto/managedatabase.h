#ifndef MANAGEDATABASE_H
#define MANAGEDATABASE_H

#include <QWidget>
#include <redacthuman.h>

namespace Ui {
class ManageDatabase;
}

class ManageDatabase : public QWidget
{
    Q_OBJECT

public:
    explicit ManageDatabase(QWidget *parent = nullptr);
    ~ManageDatabase();

public slots:
    void update_human(bool);
    void setTitle(QString name);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_redact_button_clicked();

private:
    Ui::ManageDatabase *ui;
    RedactHuman * redactHuman;
};

#endif // MANAGEDATABASE_H
