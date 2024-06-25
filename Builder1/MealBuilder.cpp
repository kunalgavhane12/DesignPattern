#include "MealBuilder.h"

MealBuilder::MealBuilder()
{

}

Meal *MealBuilder::prepareVegMeal()
{
    auto meal = new Meal();
    meal->addItem(new VegBurger());
    meal->addItem(new Coke());
    return meal;
}

Meal *MealBuilder::prepareNonvegMeal()
{
    auto meal = new Meal();
    meal->addItem(new ChickenBurger());
    meal->addItem(new Pepsi());
    return meal;

}
