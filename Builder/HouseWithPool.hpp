#ifndef HOUSE_WITH_POOL_HPP
#define HOUSE_WITH_POOL_HPP

#include "IHouseBuilder.hpp"

class HouseWithPool : public IHouseBuilder
{
public:
	House	*getHouse();

	HouseWithPool();
	IHouseBuilder *createWalls();
	IHouseBuilder *createDoor();
	IHouseBuilder *createWindow();
	IHouseBuilder *createPool();
	IHouseBuilder *createGarden();
	IHouseBuilder *createGarage();
	void Build();

	private:
		House	*m_house;
};

#endif // HOUSE_WITH_POOL_HPP