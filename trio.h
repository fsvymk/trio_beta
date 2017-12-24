#ifndef TRIO_H
#define TRIO_H

#include <QMainWindow>

namespace Ui {
class trio;
}

class trio : public QMainWindow
{
    Q_OBJECT

public:
    explicit trio(QWidget *parent = 0);
    ~trio();

private slots:
    void on_pushButton_clicked();
    void calc();

private:
    Ui::trio *ui;
};

#endif // TRIO_H
