#include "Box.h"
#include "CompositeDesignDialog.h"
#include "ProductLeaf.h"
#include "ui_CompositeDesignDialog.h"

CompositeDesignDialog::CompositeDesignDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CompositeDesignDialog)
{
    ui->setupUi(this);
}

CompositeDesignDialog::~CompositeDesignDialog()
{
    delete ui;
}

void CompositeDesignDialog::on_btnGetPrice_clicked()
{
    Component *MainBox = new Box();
    Component *box1 = new Box();
    Component *box2 = new Box();
    Component *p1 = new ProductLeaf(20);
    MainBox->add(box1);
    MainBox->add(box2);
    MainBox->add(p1);

    Component *p2 = new ProductLeaf(30);
    box2->add(p2);

    Component *box2_1 = new Box();
    Component *box2_2 = new Box();

    box2->add(box2_1);
    box2->add(box2_2);

    Component *p3 = new ProductLeaf(50);
    Component *p4 = new ProductLeaf(60);
    Component *p5 = new ProductLeaf(70);

    box2_1->add(p3);
    box2_2->add(p4);
    box2_2->add(p5);

    qDebug() << MainBox->price();

}

