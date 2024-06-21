#include "SingletonDialog.h"
#include "ui_SingletonDialog.h"

SingletonDialog::SingletonDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SingletonDialog)
{
    ui->setupUi(this);
    _logger = Logger::getInstance();
}

SingletonDialog::~SingletonDialog()
{
    delete ui;
}

void SingletonDialog::on_btnAction_clicked()
{
    ui->lstConsole->addItem("Action 1 Clicked...");
     _logger->log("Action 1");
}


void SingletonDialog::on_btnDialog2_clicked()
{
    SingletonAnotherDialog _dlg;
    _dlg.exec();
    ui->lstConsole->addItem("Dialog 2 Closed...");
    _logger->log("Dialog Closed");
}

