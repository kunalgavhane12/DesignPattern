#include "Burger.h"

Burger::Burger()
{

}

Packing *Burger::packing()
{
    return new WrapperPacking();

}
