#ifndef CARFACTORY_H
#define CARFACTORY_H

#include "BaseCar.h"

class CarFactory
{
public:
    CarFactory();

    static BaseCar *createCar(QString type);
};

#endif // CARFACTORY_H
