#include "scuba.h"
#include "ui_scuba.h"

Scuba::Scuba(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Scuba)
{
    ui->setupUi(this);

}

Scuba::~Scuba()
{
    delete ui;
}

void Scuba::on_calc1_clicked()
{
    ui->gp1->setText(this->padi.findGp(this->ui->prof1->text().toInt(), this->ui->tf1->text().toInt()));
}
