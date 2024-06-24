#include "LaptopCreator.h"

LaptopCreator::LaptopCreator()
{

}

Product *LaptopCreator::FactoryMethod()
{
    return new Laptop();
}
