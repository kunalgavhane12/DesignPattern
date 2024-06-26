#include "ProductLeaf.h"

ProductLeaf::ProductLeaf(float price)
{
    setPrice(price);
}

float ProductLeaf::price()
{
    return _price;
}

void ProductLeaf::setPrice(float newPrice)
{
    _price = newPrice;
}
