#ifndef BUILDER2DIALOG_H
#define BUILDER2DIALOG_H

#include "CivilEngineer.h"

#include <QDialog>
#include <QDebug>

namespace Ui {
class Builder2Dialog;
}

class Builder2Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Builder2Dialog(QWidget *parent = nullptr);
    ~Builder2Dialog();

private slots:
    void on_btnTipiHouse_clicked();

    void on_btnIglooHouse_clicked();

private:
    Ui::Builder2Dialog *ui;
    CivilEngineer *_engineer;
};

#endif // BUILDER2DIALOG_H
