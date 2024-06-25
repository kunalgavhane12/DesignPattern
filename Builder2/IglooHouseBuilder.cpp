#include "IglooHouseBuilder.h"

IglooHouseBuilder::IglooHouseBuilder()
{
    _house = new House();
}

void IglooHouseBuilder::buildBasement()
{
    _house->setBasement("Ice Bars");
}

void IglooHouseBuilder::buildStructure()
{
    _house->setStructure("Ice Blocke");
}

void IglooHouseBuilder::buildRoof()
{
    _house->setRoof("Ice Dome");
}

void IglooHouseBuilder::buildInterior()
{
    _house->setInterior("Ice Carvings");
}

void IglooHouseBuilder::construct()
{
    this->buildBasement();
    this->buildStructure();
    this->buildRoof();
    this->buildInterior();
}

House *IglooHouseBuilder::getHouse()
{
    return _house;
}
