#ifndef SCUBA_H
#define SCUBA_H

#include <QWidget>
#include <padi.h>
#include <mergulho.h>

namespace Ui {
class Scuba;
}

class Scuba : public QWidget
{
    Q_OBJECT

public:
    explicit Scuba(QWidget *parent = 0);
    ~Scuba();

private slots:
    void on_calc1_clicked();

private:
    Ui::Scuba *ui;
    PADI padi;
};

#endif // SCUBA_H
