#ifndef MANAGEDATABASE_H
#define MANAGEDATABASE_H

#include <QSqlRelationalTableModel>
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
    void set_model(QSqlQueryModel* model);

public slots:
    void update_human(bool);
    void setTitle(QString name);

private slots:
    void on_redact_button_clicked();

private:
    Ui::ManageDatabase *ui;
    QSqlQueryModel *model;
    RedactHuman * redactHuman;
};

#endif // MANAGEDATABASE_H
