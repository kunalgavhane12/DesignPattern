#include "Mobile.h"
#include "MobileCreator.h"

MobileCreator::MobileCreator()
{

}

Product *MobileCreator::FactoryMethod()
{
    return new Mobile();
}
