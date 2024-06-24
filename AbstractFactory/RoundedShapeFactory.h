#ifndef ROUNDEDSHAPEFACTORY_H
#define ROUNDEDSHAPEFACTORY_H

#include "ShapeFactory.h"
#include "RoundedRectangle.h"
#include "RoundedSquare.h"
#include "RoundedTriangle.h"

class RoundedShapeFactory : public ShapeFactory
{
public:
    RoundedShapeFactory();

    // ShapeFactory interface
public:
    Shape *getSquare();
    Shape *getTriangle();
    Shape *getRectangle();
};

#endif // ROUNDEDSHAPEFACTORY_H
