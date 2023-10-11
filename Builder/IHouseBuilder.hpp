#ifndef I_HOUSE_BUILDER_HPP
#define I_HOUSE_BUILDER_HPP

#include <iostream>
#include "House.hpp"
class House;

class IHouseBuilder
{

public:
	bool Walls;
	bool Window;
	bool Door;
	bool Pool;
	bool Garage;
	bool Garden;

public:
	virtual House *getHouse() = 0;
	virtual IHouseBuilder *createWalls() = 0;
	virtual IHouseBuilder *createDoor() = 0;
	virtual IHouseBuilder *createWindow() = 0;
	virtual IHouseBuilder *createPool() = 0;
	virtual IHouseBuilder *createGarden() = 0;
	virtual IHouseBuilder *createGarage() = 0;
	virtual void Build() = 0;
};

#endif // I_HOUSE_BUILDER_HPP