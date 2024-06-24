#ifndef FACTORYMETHOD2_H
#define FACTORYMETHOD2_H

#include "Creator.h"
#include "MobileCreator.h"
#include "LaptopCreator.h"


class FactoryMethod2
{
public:
    FactoryMethod2();

    void handleProduct(Creator *creator);
};

#endif // FACTORYMETHOD2_H
