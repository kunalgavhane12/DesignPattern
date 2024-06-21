#ifndef SINGLETONDIALOG_H
#define SINGLETONDIALOG_H

#include <QDialog>
#include "Logger.h"
#include "SingletonAnotherDialog.h"

namespace Ui {
class SingletonDialog;
}

class SingletonDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SingletonDialog(QWidget *parent = nullptr);
    ~SingletonDialog();

private slots:
    void on_btnAction_clicked();

    void on_btnDialog2_clicked();

private:
    Ui::SingletonDialog *ui;
    Logger *_logger;
};

#endif // SINGLETONDIALOG_H
