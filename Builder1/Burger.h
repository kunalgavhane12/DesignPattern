#ifndef BURGER_H
#define BURGER_H

#include "Items.h"

#include "WrapperPacking.h"

class Burger : public Items
{
public:
    Burger();

public:
    Packing *packing();
};

#endif // BURGER_H
