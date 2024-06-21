#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Singleton/SingletonDialog.h"

#include <FactoryMethod1/FactoryMethodClient.h>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnSingleton_clicked()
{
    SingletonDialog dlg;
    dlg.exec();
}


void MainWindow::on_btnFactory_clicked()
{
    FactoryMethodClient client;
}

