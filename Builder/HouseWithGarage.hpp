#ifndef HOUSE_WITH_GARAGE_HPP
#define HOUSE_WITH_GARAGE_HPP

#include "IHouseBuilder.hpp"

class HouseWithGarage : public IHouseBuilder
{
public:
	House *getHouse();

	HouseWithGarage();
	IHouseBuilder *createWalls();
	IHouseBuilder *createDoor();
	IHouseBuilder *createWindow();
	IHouseBuilder *createGarage();
	IHouseBuilder *createPool();
	IHouseBuilder *createGarden();
	void Build();

private:
	House *m_house;
};

#endif // HOUSE_WITH_GARAGE_HPP