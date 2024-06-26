#ifndef COMPOSITEDESIGNDIALOG_H
#define COMPOSITEDESIGNDIALOG_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class CompositeDesignDialog;
}

class CompositeDesignDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CompositeDesignDialog(QWidget *parent = nullptr);
    ~CompositeDesignDialog();

private slots:
    void on_btnGetPrice_clicked();

private:
    Ui::CompositeDesignDialog *ui;
};

#endif // COMPOSITEDESIGNDIALOG_H
