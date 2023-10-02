#ifndef NORMAL_HOUSE_HPP
#define NORMAL_HOUSE_HPP

#include "IHouseBuilder.hpp"

class NormalHouse : public IHouseBuilder
{

public:
	NormalHouse();
	House*	getHouse();
	
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

#endif // NORMAL_HOUSE_HPP