#include "HouseWithGarage.hpp"

HouseWithGarage::HouseWithGarage()
{
	m_house = new House();
	std::cout << "Creating House With Garage..." << std::endl;
}

IHouseBuilder *HouseWithGarage::createWalls()
{
	m_house->setWalls();
	std::cout << "Walls are created..." << std::endl;
	return this;
}

IHouseBuilder *HouseWithGarage::createDoor()
{
	m_house->setDoor();
	std::cout << "Door is created..." << std::endl;
	return this;
}

IHouseBuilder *HouseWithGarage::createWindow()
{
	m_house->setWindow();
	std::cout << "Window is created..." << std::endl;
	return this;
}

IHouseBuilder *HouseWithGarage::createGarage()
{
	m_house->setGarage();
	std::cout << "Garage is created..." << std::endl;
	return this;
}

IHouseBuilder *HouseWithGarage::createPool()
{
	return this;
}

IHouseBuilder *HouseWithGarage::createGarden()
{
	return this;
}

void HouseWithGarage::Build()
{
	this->createWalls()->createDoor()->createWindow()->createGarage();
}

House *HouseWithGarage::getHouse()
{
	return m_house;
}