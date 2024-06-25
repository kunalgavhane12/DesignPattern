#include "Builder2Dialog.h"
#include "IglooHouseBuilder.h"
#include "TipiHouseBuilder.h"
#include "ui_Builder2Dialog.h"

Builder2Dialog::Builder2Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Builder2Dialog)
{
    ui->setupUi(this);
}

Builder2Dialog::~Builder2Dialog()
{
    delete ui;
}

void Builder2Dialog::on_btnTipiHouse_clicked()
{
    _engineer = new  CivilEngineer(new TipiHouseBuilder());
    auto house = _engineer->constructHouse();
    qDebug() << house->decribe();
}


void Builder2Dialog::on_btnIglooHouse_clicked()
{
    _engineer = new CivilEngineer(new IglooHouseBuilder());
    auto house = _engineer->constructHouse();
    qDebug() << house->decribe();

}

