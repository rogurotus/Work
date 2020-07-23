#ifndef MAINVISITER_H
#define MAINVISITER_H

#include <QWidget>
#include <makerequest.h>

namespace Ui {
class MainVisiter;
}

class MainVisiter : public QWidget
{
    Q_OBJECT

public:
    explicit MainVisiter(QWidget *parent = nullptr);
    ~MainVisiter();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainVisiter *ui;
    MakeRequest * makeRequest;
};

#endif // MAINVISITER_H
