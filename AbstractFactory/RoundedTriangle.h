#ifndef ROUNDEDTRIANGLE_H
#define ROUNDEDTRIANGLE_H

#include "Shape.h"

class RoundedTriangle : public Shape
{
public:
    RoundedTriangle();

    // Shape interface
public:
    void draw();
};

#endif // ROUNDEDTRIANGLE_H
