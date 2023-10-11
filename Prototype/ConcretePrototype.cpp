#include "ConcretePrototype.hpp"

ConcretePrototype::ConcretePrototype(int data, const std::string &name)
    : data(data), name(name) {}

ConcretePrototype::ConcretePrototype(const ConcretePrototype &other)
    : data(other.data), name(other.name) {}

IPrototype *ConcretePrototype::clone() const
{
    return new ConcretePrototype(*this);
}

void ConcretePrototype::print() const
{
    std::cout << "ConcretePrototype - Data: " << data << ", Name: " << name << std::endl;
}
