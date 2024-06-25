#ifndef HOUSE_H
#define HOUSE_H

#include "HousePlan.h"

class House : public HousePlan
{
public:
    House();

    // HousePlan interface
public:
    void setBasement(QString str);
    void setStructure(QString str);
    void setRoof(QString str);
    void setInterior(QString str);
    QString decribe();

private:
    QString _Basement;
    QString _Structure;
    QString _Roof;
    QString _Interior;
};

#endif // HOUSE_H
