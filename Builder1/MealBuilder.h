#ifndef MEALBUILDER_H
#define MEALBUILDER_H

#include "Meal.h"
#include "VegBurger.h"
#include "ChickenBurger.h"
#include "Coke.h"
#include "Pepsi.h"

class MealBuilder
{
public:
    MealBuilder();
    Meal *prepareVegMeal();
    Meal *prepareNonvegMeal();

};

#endif // MEALBUILDER_H
