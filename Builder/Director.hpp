#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include "House.hpp"
#include "NormalHouse.hpp"
#include "HouseWithPool.hpp"
#include "HouseWithGarage.hpp"
#include "HouseWithGarden.hpp"
#include <iostream>

class Director
{
private:
	IHouseBuilder *houseBuilder;

public:
	void setHouseBuilder(std::string);
	House *getProduct();
};

#endif // DIRECTOR_HPP