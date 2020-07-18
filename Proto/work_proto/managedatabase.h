#ifndef MANAGEDATABASE_H
#define MANAGEDATABASE_H

#include <QWidget>
#include <qsqltablemodel.h>

namespace Ui {
class ManageDatabase;
}

class ManageDatabase : public QWidget
{
    Q_OBJECT

public:
    explicit ManageDatabase(QWidget *parent = nullptr);
    ~ManageDatabase();
    void set_model(QSqlTableModel* model);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ManageDatabase *ui;
    QSqlTableModel *model;
};

#endif // MANAGEDATABASE_H
