#include "Box.h"

Box::Box()
{

}

void Box::add(Component *newComponent)
{
    _children.append(newComponent);
    newComponent->setParent(this);
}

void Box::remove(Component *newComponent)
{
    _children.removeOne(newComponent);
    newComponent->setParent(nullptr);
}

bool Box::isComposite()
{
    return true;
}

float Box::price()
{
    float sum = 0;
    foreach(auto child, _children)
        sum += child->price();

    return sum;
}
