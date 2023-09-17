#ifndef SHIP_HPP
#define SHIP_HPP
#include <iostream>
#include "Transport.hpp"

class Ship : public Transport {
public: virtual void deliver();
};

#endif //SHIP_HPP