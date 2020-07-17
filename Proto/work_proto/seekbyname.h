#ifndef SEEKBYNAME_H
#define SEEKBYNAME_H

#include <QWidget>

namespace Ui {
class SeekByName;
}

class SeekByName : public QWidget
{
    Q_OBJECT

public:
    explicit SeekByName(QWidget *parent = nullptr);
    ~SeekByName();

private:
    Ui::SeekByName *ui;
};

#endif // SEEKBYNAME_H
