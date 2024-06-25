#ifndef VEGBURGER_H
#define VEGBURGER_H

#include "Burger.h"

class VegBurger : public Burger
{
public:
    VegBurger();

public:
    QString name();
    float Price();
};

#endif // VEGBURGER_H
