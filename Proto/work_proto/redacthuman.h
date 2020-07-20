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
    explicit RedactHuman(QWidget *parent = nullptr);
    ~RedactHuman();

signals:
    void redacted_human(bool);

private slots:
    void on_redacted_clicked();
    bool isData(QString data);

private:
    Ui::RedactHuman *ui;
};

#endif // REDACTHUMAN_H
