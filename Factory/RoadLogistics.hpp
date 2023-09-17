#ifndef ROAD_LOGISTICS_HPP
#define ROAD_LOGISTICS_HPP
#include "Logistics.hpp"
#include "Transport.hpp"
#include "Truck.hpp"

class RoadLogistics:public LogisticsApp {
public: virtual Transport* createTransport();
};

#endif //ROAD_LOGISTICS_HPP