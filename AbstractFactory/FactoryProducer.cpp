#include "FactoryProducer.h"

FactoryProducer::FactoryProducer()
{

}

ShapeFactory *FactoryProducer::getFactory(bool isRounded)
{
    if(isRounded)
    {
        return new RoundedShapeFactory();
    }

    return new NormalShapeFactory();
}
