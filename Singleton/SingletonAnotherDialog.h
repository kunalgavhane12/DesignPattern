#ifndef SINGLETONANOTHERDIALOG_H
#define SINGLETONANOTHERDIALOG_H

#include "Logger.h"

#include <QDialog>

namespace Ui {
class SingletonAnotherDialog;
}

class SingletonAnotherDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SingletonAnotherDialog(QWidget *parent = nullptr);
    ~SingletonAnotherDialog();

private slots:
    void on_btnAction2_clicked();

private:
    Ui::SingletonAnotherDialog *ui;
    Logger *_logger;

};

#endif // SINGLETONANOTHERDIALOG_H
