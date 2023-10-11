#ifndef I_PROTOTYPE_HPP
#define I_PROTOTYPE_HPP

#include <iostream>

class IPrototype
{
public:
    virtual IPrototype *clone() const = 0;
    virtual void print() const = 0;
};

#endif // I_PROTOTYPE_HPP
