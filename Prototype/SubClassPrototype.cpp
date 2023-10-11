#include "SubClassPrototype.hpp"


SubClassPrototype::SubClassPrototype(double value) : value(value) {}

SubClassPrototype::SubClassPrototype(const SubClassPrototype &other) : value(other.value) {}

IPrototype *SubClassPrototype::clone() const
{
    return new SubClassPrototype(*this);
}

void SubClassPrototype::print() const
{
    std::cout << "SubClassPrototype - Value: " << value << std::endl;
}
