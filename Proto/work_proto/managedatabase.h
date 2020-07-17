#ifndef MANAGEDATABASE_H
#define MANAGEDATABASE_H

#include <QWidget>

namespace Ui {
class ManageDatabase;
}

class ManageDatabase : public QWidget
{
    Q_OBJECT

public:
    explicit ManageDatabase(QWidget *parent = nullptr);
    ~ManageDatabase();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ManageDatabase *ui;
};

#endif // MANAGEDATABASE_H
