#ifndef MAKEREQUEST_H
#define MAKEREQUEST_H

#include <QWidget>

namespace Ui {
class MakeRequest;
}

class MakeRequest : public QWidget
{
    Q_OBJECT

public:
    explicit MakeRequest(QWidget *parent = nullptr);
    ~MakeRequest();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MakeRequest *ui;
};

#endif // MAKEREQUEST_H
