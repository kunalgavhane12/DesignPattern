#ifndef NORMALSHAPEFACTORY_H
#define NORMALSHAPEFACTORY_H

#include "ShapeFactory.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"

class NormalShapeFactory : public ShapeFactory
{
public:
    NormalShapeFactory();

public:
    Shape *getSquare();
    Shape *getRectangle();
    Shape *getTriangle();
};

#endif // NORMALSHAPEFACTORY_H
