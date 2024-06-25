#ifndef WRAPPERPACKING_H
#define WRAPPERPACKING_H

#include "Packing.h"

class WrapperPacking : public Packing
{
public:
    WrapperPacking();

    // Packing interface
public:
    QString name();
};

#endif // WRAPPERPACKING_H
