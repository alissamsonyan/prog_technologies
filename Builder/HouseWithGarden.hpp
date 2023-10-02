#ifndef HOUSE_WITH_GARDEN_HPP
#define HOUSE_WITH_GARDEN_HPP

#include "IHouseBuilder.hpp"

class HouseWithGarden : public IHouseBuilder
{
public:
	House	*getHouse();

	HouseWithGarden();
	IHouseBuilder *createWalls();
	IHouseBuilder *createDoor();
	IHouseBuilder *createWindow();
	IHouseBuilder *createGarden();
	IHouseBuilder *createGarage();
	IHouseBuilder *createPool();
	void Build();
	private:
		House	*m_house;
};

#endif // HOUSE_WITH_GARDEN_HPP