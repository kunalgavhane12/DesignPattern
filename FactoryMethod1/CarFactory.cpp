#include "BMW.h"
#include "CarFactory.h"
#include "Ford.h"
#include "Honda.h"

CarFactory::CarFactory()
{

}

BaseCar *CarFactory::createCar(QString type)
{
    BaseCar *car = nullptr;
    if(type == "B")
    {
        car = new BMW();
    }
    else if(type == "F")
    {
        car = new Ford();
    }
    else if(type == "H")
    {
        car = new Honda();
    }
    return car;

}
