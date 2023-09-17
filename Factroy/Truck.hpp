#ifndef TRUCK_HPP
#define TRUCK_HPP

#include <iostream>
#include "Transport.hpp"

class Truck: public Transport {
public: virtual void deliver();
};

#endif //TRUCK_HPP
