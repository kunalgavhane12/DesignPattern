#include "FactoryMethod2.h"
#include <QDebug>

FactoryMethod2::FactoryMethod2()
{
    auto creator1 = new LaptopCreator();
    handleProduct(creator1);
    auto creator2 = new MobileCreator();
    handleProduct(creator2);
}

void FactoryMethod2::handleProduct(Creator *creator)
{
    qDebug()<< creator->describe();

}
