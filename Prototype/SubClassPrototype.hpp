#ifndef SUBCLASS_PROTOTYPE_HPP
#define SUBCLASS_PROTOTYPE_HPP

#include "IPrototype.hpp"

class SubClassPrototype : public IPrototype
{
private:
    double value;

public:
    SubClassPrototype(double value);
    SubClassPrototype(const SubClassPrototype &other);
    IPrototype *clone() const ;
    void print() const ;
};

#endif // SUBCLASS_PROTOTYPE_HPP
