#ifndef COLDDRINKS_H
#define COLDDRINKS_H

#include "BottlePacking.h"

#include "Items.h"

class ColdDrinks : public Items
{
public:
    ColdDrinks();

public:
    Packing *packing();
};

#endif // COLDDRINKS_H
