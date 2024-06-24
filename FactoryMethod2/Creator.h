#ifndef CREATOR_H
#define CREATOR_H

#include "Product.h"

class Creator
{
public:
    Creator();

    virtual Product *FactoryMethod() = 0;

    QString describe(){
        auto product = FactoryMethod();
        return product->describe();
    }
};

#endif // CREATOR_H
