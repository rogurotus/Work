#ifndef MAINCOMENDANT_H
#define MAINCOMENDANT_H

#include <QMainWindow>
#include <redactdata.h>
#include <view.h>
#include <seekbyname.h>
#include <requests.h>
#include <managedatabase.h>

namespace Ui {
class MainComendant;
}

class MainComendant : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainComendant(QWidget *parent = nullptr);
    ~MainComendant();

private slots:
    void on_action_triggered();

    void on_action_2_triggered();

    void on_action_3_triggered();

    void on_action_4_triggered();

    void on_action_5_triggered();

    void on_action_6_triggered();

    void on_action_7_triggered();

    void on_pushButton_clicked();

private:
    Ui::MainComendant *ui;

    RedactData * redactData;

    View * view;
    Requests * requests;
    SeekByName * seekByName;
    ManageDatabase * manageDatabase;
};

#endif // MAINCOMENDANT_H
