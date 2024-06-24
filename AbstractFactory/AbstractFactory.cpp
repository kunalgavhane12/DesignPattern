#include "AbstractFactory.h"
#include "FactoryProducer.h"
#include "ui_AbstractFactory.h"

AbstractFactory::AbstractFactory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AbstractFactory)
{
    ui->setupUi(this);
    _shapeFactory = nullptr;
}

AbstractFactory::~AbstractFactory()
{
    delete ui;
}

void AbstractFactory::on_btnRoundedShape_clicked()
{
    _shapeFactory = FactoryProducer::getFactory(true);
    drawShapes();
}


void AbstractFactory::on_btnNormalShape_clicked()
{
    _shapeFactory = FactoryProducer::getFactory(false);
    drawShapes();
}

void AbstractFactory::drawShapes()
{
    if(_shapeFactory != nullptr)
    {
        _shapeFactory->getRectangle()->draw();
        _shapeFactory->getSquare()->draw();
        _shapeFactory->getTriangle()->draw();
    }
}

