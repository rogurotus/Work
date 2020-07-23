#ifndef MAINVISITER_H
#define MAINVISITER_H

#include <QWidget>

namespace Ui {
class MainVisiter;
}

class MainVisiter : public QWidget
{
    Q_OBJECT

public:
    explicit MainVisiter(QWidget *parent = nullptr);
    ~MainVisiter();

private:
    Ui::MainVisiter *ui;
};

#endif // MAINVISITER_H
