#ifndef HOUSEPLAN_H
#define HOUSEPLAN_H

#include <QString>


class HousePlan
{
public:
    HousePlan();

    virtual void setBasement(QString str) = 0;
    virtual void setStructure(QString str) = 0;
    virtual void setRoof(QString str) = 0;
    virtual void setInterior(QString str) =0;
    virtual QString decribe() = 0;
};

#endif // HOUSEPLAN_H
