#include "House.h"

House::House()
{

}

void House::setBasement(QString str)
{
    this->_Basement = str;
}

void House::setStructure(QString str)
{
    this->_Structure = str;
}

void House::setRoof(QString str)
{
    this->_Roof = str;
}

void House::setInterior(QString str)
{
    this->_Interior = str;
}

QString House::decribe()
{
    return QString("%0 -- %1 -- %2 -- %3").arg(_Basement).arg(_Structure).arg(_Roof).arg(_Interior);
}
