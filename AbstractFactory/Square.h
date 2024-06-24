#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape
{
public:
    Square();

    // Shape interface
public:
    void draw();
};

#endif // SQUARE_H
