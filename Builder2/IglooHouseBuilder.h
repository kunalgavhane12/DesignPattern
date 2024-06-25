#ifndef IGLOOHOUSEBUILDER_H
#define IGLOOHOUSEBUILDER_H

#include "HouseBuilder.h"

class IglooHouseBuilder : public HouseBuilder
{
public:
    IglooHouseBuilder();

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

#endif // IGLOOHOUSEBUILDER_H
