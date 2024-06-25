#ifndef TIPIHOUSEBUILDER_H
#define TIPIHOUSEBUILDER_H

#include "HouseBuilder.h"

class TipiHouseBuilder : public HouseBuilder
{
public:
    TipiHouseBuilder();

    // HouseBuilder interface
public:
    void buildBasement();
    void buildStructure();
    void buildRoof();
    void buildInterior();
    void construct();
    House *getHouse();

private:
    House *_house;

};

#endif // TIPIHOUSEBUILDER_H
