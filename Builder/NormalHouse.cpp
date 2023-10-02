#include "NormalHouse.hpp"

NormalHouse::NormalHouse()
{
	m_house = new House();
	std::cout << "Creating Normal House..." << std::endl;
}

IHouseBuilder *NormalHouse::createWalls()
{
	m_house->setWalls();
	std::cout << "Walls are created..." << std::endl;
	return this;
}

IHouseBuilder *NormalHouse::createDoor()
{
	m_house->setDoor();

	std::cout << "Door is created..." << std::endl;
	return this;
}

IHouseBuilder *NormalHouse::createWindow()
{
	m_house->setWindow();

	std::cout << "Window is created..." << std::endl;
	return this;
}

IHouseBuilder *NormalHouse::createPool()
{
	return this;
}

IHouseBuilder *NormalHouse::createGarden()
{
	return this;
}

IHouseBuilder *NormalHouse::createGarage()
{
	return this;
}

void NormalHouse::Build()
{
	this->createWalls()->createDoor()->createWindow();
}

House *NormalHouse::getHouse()
{
	return m_house;
}