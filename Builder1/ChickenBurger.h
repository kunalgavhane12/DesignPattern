#ifndef CHICKENBURGER_H
#define CHICKENBURGER_H

#include "Burger.h"

class ChickenBurger : public Burger
{
public:
    ChickenBurger();

public:
    QString name();
    float Price();
};

#endif // CHICKENBURGER_H
