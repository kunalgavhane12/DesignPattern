#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Singleton/SingletonDialog.h"

#include <AbstractFactory/AbstractFactory.h>
#include <Builder1/Builder1Dialog.h>
#include <Builder2/Builder2Dialog.h>
#include <Composite/CompositeDesignDialog.h>
#include <FactoryMethod1/FactoryMethodClient.h>
#include <FactoryMethod2/FactoryMethod2.h>


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


void MainWindow::on_btnFactory_2_clicked()
{
    FactoryMethod2 client;
}


void MainWindow::on_btnAbstractFactory_clicked()
{
    AbstractFactory dlg;
    dlg.exec();
}


void MainWindow::on_btnBuilder1Pattern_clicked()
{
    Builder1Dialog dlg;
    dlg.exec();
}


void MainWindow::on_btnBuilder2Pattern_clicked()
{
    Builder2Dialog dlg;
    dlg.exec();
}


void MainWindow::on_btnCompositePattern_clicked()
{
    CompositeDesignDialog dlg;
    dlg.exec();
}

