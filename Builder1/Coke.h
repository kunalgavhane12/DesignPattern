#ifndef COKE_H
#define COKE_H

#include "ColdDrinks.h"

class Coke : public ColdDrinks
{
public:
    Coke();

    // Items interface
public:
    QString name();
    float Price();
};

#endif // COKE_H
