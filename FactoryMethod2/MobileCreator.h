#ifndef MOBILECREATOR_H
#define MOBILECREATOR_H

#include "Creator.h"
#include "Mobile.h"

class MobileCreator : public Creator
{
public:
    MobileCreator();

public:
    Product *FactoryMethod();
};

#endif // MOBILECREATOR_H
