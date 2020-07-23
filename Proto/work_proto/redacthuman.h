#ifndef REDACTHUMAN_H
#define REDACTHUMAN_H

#include <QWidget>

namespace Ui {
class RedactHuman;
}

class RedactHuman : public QWidget
{
    Q_OBJECT

public:
    explicit RedactHuman(bool old, int citizen_id, QWidget *parent = nullptr);
    ~RedactHuman();

signals:
    void redacted_human(bool);

private slots:
    void on_redacted_clicked();
    bool isData(QString data);


    void on_building_combobox_currentIndexChanged(int index);

private:
    Ui::RedactHuman *ui;
    int citizen_id;
    bool old;
};

#endif // REDACTHUMAN_H
