#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>

class Product
{
public:
    Product();
    virtual QString describe() = 0;
};

#endif // PRODUCT_H
