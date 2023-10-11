#ifndef MODERN_COFFEE_TABLE_HPP
#define MODERN_COFFEE_TABLE_HPP

#include "ICoffeeTable.hpp"

class ModernCoffeeTable : public ICoffeeTable
{
public:
    ModernCoffeeTable() {}
    void use();
    ~ModernCoffeeTable()  {}
};

#endif // MODERN_COFFEE_TABLE_HPP
