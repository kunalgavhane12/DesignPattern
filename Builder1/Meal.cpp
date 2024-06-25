#include "Meal.h"

Meal::Meal()
{

}

void Meal::addItem(Items *newItem)
{
    _items.append(newItem);
}

float Meal::cost()
{
    float sum = 0;
    foreach(auto item, _items)
    {
        sum += item->Price();
    }
    return sum;
}

void Meal::showItems()
{
    foreach(auto item, _items)
        qDebug() << item->name() << item->packing()->name() << item->Price();
}

