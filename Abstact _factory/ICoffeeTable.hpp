#ifndef I_COFFEE_TABLE_HPP
#define I_COFFEE_TABLE_HPP

#include<iostream>

class ICoffeeTable
{
public:
    virtual void use() = 0;
    virtual ~ICoffeeTable() {}
};

#endif // I_COFFEE_TABLE_HPP
