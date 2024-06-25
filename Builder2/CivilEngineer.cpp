#include "CivilEngineer.h"

CivilEngineer::CivilEngineer(HouseBuilder *builder)
{
    _builder = builder;

}

House *CivilEngineer::constructHouse()
{
    _builder->construct();
    return _builder->getHouse();

}

House *CivilEngineer::getHouse()
{
    return _builder->getHouse();
}
