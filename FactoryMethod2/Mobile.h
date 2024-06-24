#ifndef MOBILE_H
#define MOBILE_H

#include "Product.h"


class Mobile : public Product
{
public:
    Mobile();

    // Product interface
public:
    QString describe();
};

#endif // MOBILE_H
