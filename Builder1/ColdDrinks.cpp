#include "ColdDrinks.h"

ColdDrinks::ColdDrinks()
{

}

Packing *ColdDrinks::packing()
{
    return new BottlePacking();
}
