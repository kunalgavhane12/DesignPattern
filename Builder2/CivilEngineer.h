#ifndef CIVILENGINEER_H
#define CIVILENGINEER_H

#include "House.h"
#include "HouseBuilder.h"

class CivilEngineer
{
public:
    CivilEngineer(HouseBuilder *builder);

    House *constructHouse();
    House *getHouse();

private:
    HouseBuilder *_builder;
};

#endif // CIVILENGINEER_H
