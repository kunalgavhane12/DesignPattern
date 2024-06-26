#ifndef PRODUCTLEAF_H
#define PRODUCTLEAF_H

#include "Component.h"

class ProductLeaf : public Component
{
public:
    ProductLeaf(float price);

    // Component interface
public:
    float price();
    void setPrice(float newPrice);

private:
    float _price;
};

#endif // PRODUCTLEAF_H
