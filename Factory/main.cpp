#include "Logistics.hpp"
#include "RoadLogistics.hpp"
#include "SeaLogistics.hpp"
#include "Truck.hpp"
#include "Ship.hpp"

int main() {
    
    LogisticsApp* roadLogistics = new RoadLogistics();
    LogisticsApp* seaLogistics = new SeaLogistics();

    Transport* truck = roadLogistics->createTransport();
    truck->deliver();
    Transport* ship = seaLogistics->createTransport();
    ship->deliver();


    delete roadLogistics;
    delete seaLogistics;
    delete truck;
    delete ship;

    return 0;
}
