#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape
{
public:
    Triangle();

    // Shape interface
public:
    void draw();
};

#endif // TRIANGLE_H
