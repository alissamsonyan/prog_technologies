#ifndef MAKEORDER_HPP
#define MAKEORDER_HPP
#include "Kitchen.hpp"
#include "Waiter.hpp"

class MakeOrder {
public:
void orderFood();

private:
Kitchen kitchen;
Waiter waiter;

};

#endif