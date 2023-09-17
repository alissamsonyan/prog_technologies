#ifndef SEA_LOGISTICS_HPP
#define SEA_LOGISTICS_HPP

#include "Logistics.hpp"
#include "Transport.hpp"
#include "Ship.hpp"

class SeaLogistics: public LogisticsApp {
public: virtual Transport* createTransport();
};

#endif //SEA_LOGISTICS_HPP