#include "RoundedShapeFactory.h"

RoundedShapeFactory::RoundedShapeFactory()
{

}

Shape *RoundedShapeFactory::getSquare()
{
    return new RoundedSquare();
}

Shape *RoundedShapeFactory::getTriangle()
{
    return new RoundedTriangle();
}

Shape *RoundedShapeFactory::getRectangle()
{
    return  new RoundedRectangle();
}
