#include "TipiHouseBuilder.h"

TipiHouseBuilder::TipiHouseBuilder()
{
    _house = new House();
}

void TipiHouseBuilder::buildBasement()
{
    _house->setBasement("Wooden Poles");
}

void TipiHouseBuilder::buildStructure()
{
    _house->setStructure("Wood and Ice");

}

void TipiHouseBuilder::buildRoof()
{
    _house->setRoof("Wood, caribou and seal skins");
}

void TipiHouseBuilder::buildInterior()
{
    _house->setInterior("Fire wood");
}

void TipiHouseBuilder::construct()
{
    this->buildBasement();
    this->buildStructure();
    this->buildRoof();
}

House *TipiHouseBuilder::getHouse()
{
    return _house;
}
