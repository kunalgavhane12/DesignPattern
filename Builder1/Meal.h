#ifndef MEAL_H
#define MEAL_H

#include "Items.h"

#include <QList>
#include <QDebug>

class Meal
{
public:
    Meal();

    void addItem(Items *newItem);
    float cost();
    void showItems();

private:
    QList<Items *> _items;
};

#endif // MEAL_H
