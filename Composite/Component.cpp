#include "Component.h"

Component::Component()
{

}

bool Component::isComposite()
{
    return false;
}

Component *Component::parent() const
{
    return _parent;
}

void Component::setParent(Component *newParent)
{
    _parent = newParent;
}
