#ifndef PEPSI_H
#define PEPSI_H

#include "ColdDrinks.h"

class Pepsi : public ColdDrinks
{
public:
    Pepsi();

    // Items interface
public:
    QString name();
    float Price();

};

#endif // PEPSI_H
