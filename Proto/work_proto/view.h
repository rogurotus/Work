#ifndef VIEW_H
#define VIEW_H

#include <QWidget>
#include <QSqlQueryModel>

namespace Ui {
class View;
}

class View : public QWidget
{
    Q_OBJECT

public:
    explicit View(QWidget *parent = nullptr);
    ~View();
    void set_model(QSqlQueryModel *model);

private:
    Ui::View *ui;
};

#endif // VIEW_H
