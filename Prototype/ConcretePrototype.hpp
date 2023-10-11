#ifndef CONCRETE_PROTOTYPE_HPP
#define CONCRETE_PROTOTYPE_HPP

#include "IPrototype.hpp"
#include <iostream>

class ConcretePrototype : public IPrototype
{
private:
    int data;
    std::string name;

public:
    ConcretePrototype(int data, const std::string &name);
    ConcretePrototype(const ConcretePrototype &other);
    IPrototype *clone() const ;
    void print() const ;
};

#endif // CONCRETE_PROTOTYPE_HPP
