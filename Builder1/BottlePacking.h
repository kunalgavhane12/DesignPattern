#ifndef BOTTLEPACKING_H
#define BOTTLEPACKING_H

#include "Packing.h"

class BottlePacking : public Packing
{
public:
    BottlePacking();

    // Packing interface
public:
    QString name();
};

#endif // BOTTLEPACKING_H
