#include "CarFactory.h"
#include "FactoryMethodClient.h"
//#include "BaseCar.h"

FactoryMethodClient::FactoryMethodClient()
{
    auto car = CarFactory::createCar("B");
    if(car != nullptr)
    {
        car->drive();
    }
    foo();
    bar();

}

void FactoryMethodClient::foo()
{
    auto car = CarFactory::createCar("F");
    if(car != nullptr)
    {
        car->drive();
    }
}

void FactoryMethodClient::bar()
{
    auto car = CarFactory::createCar("H");
    if(car != nullptr)
    {
        car->drive();
    }
}
