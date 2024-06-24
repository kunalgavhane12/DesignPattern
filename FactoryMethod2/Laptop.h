#ifndef LAPTOP_H
#define LAPTOP_H

#include "Product.h"


class Laptop : public Product
{
public:
    Laptop();

    // Product interface
public:
    QString describe();
};

#endif // LAPTOP_H
