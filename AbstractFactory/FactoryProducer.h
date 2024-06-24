#ifndef FACTORYPRODUCER_H
#define FACTORYPRODUCER_H

#include "ShapeFactory.h"
#include "NormalShapeFactory.h"
#include "RoundedShapeFactory.h"

class FactoryProducer
{
public:
    FactoryProducer();

    static ShapeFactory *getFactory(bool isRounded);
};

#endif // FACTORYPRODUCER_H
