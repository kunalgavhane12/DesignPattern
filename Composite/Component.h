#ifndef COMPONENT_H
#define COMPONENT_H


class Component
{
public:
    Component();

    virtual void add(Component* newComponent){}
    virtual void remove(Component* newComponent){}

    virtual bool isComposite();

    virtual float price() = 0;

    Component *parent() const;
    void setParent(Component *newParent);

protected:
    Component *_parent;
};

#endif // COMPONENT_H
