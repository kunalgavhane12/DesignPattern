#ifndef ITEMS_H
#define ITEMS_H

#include "Packing.h"

#include <QString>


class Items
{
public:
    Items();
    virtual QString name() = 0;
    virtual Packing *packing() = 0;
    virtual float Price() = 0;
};

#endif // ITEMS_H
