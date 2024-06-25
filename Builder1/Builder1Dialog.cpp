#include "Builder1Dialog.h"
#include "ui_Builder1Dialog.h"

Builder1Dialog::Builder1Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Builder1Dialog)
{
    ui->setupUi(this);
}

Builder1Dialog::~Builder1Dialog()
{
    delete ui;
}

void Builder1Dialog::on_btnVegMeal_clicked()
{
    auto meal = _builder.prepareVegMeal();
    meal->showItems();
}


void Builder1Dialog::on_btnNonVegMeal_clicked()
{
    auto meal = _builder.prepareNonvegMeal();
    meal->showItems();

}

