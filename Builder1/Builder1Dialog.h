#ifndef BUILDER1DIALOG_H
#define BUILDER1DIALOG_H

#include "MealBuilder.h"

#include <QDialog>

namespace Ui {
class Builder1Dialog;
}

class Builder1Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Builder1Dialog(QWidget *parent = nullptr);
    ~Builder1Dialog();

private slots:
    void on_btnVegMeal_clicked();

    void on_btnNonVegMeal_clicked();

private:
    Ui::Builder1Dialog *ui;
    MealBuilder _builder;
};

#endif // BUILDER1DIALOG_H
