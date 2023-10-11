#include "HouseWithGarden.hpp"

HouseWithGarden::HouseWithGarden()
{
	m_house = new House();
	std::cout << "Creating House With Garden..." << std::endl;
}

IHouseBuilder *HouseWithGarden::createWalls()
{
	m_house->getWalls();
	std::cout << "Walls are created..." << std::endl;
	return this;
}

IHouseBuilder *HouseWithGarden::createDoor()
{
	m_house->getDoor();
	std::cout << "Door is created..." << std::endl;
	return this;
}

IHouseBuilder *HouseWithGarden::createWindow()
{
	m_house->getWindow();
	std::cout << "Window is created..." << std::endl;
	return this;
}

IHouseBuilder *HouseWithGarden::createGarden()
{
	m_house->getGarage();
	std::cout << "Garden is created..." << std::endl;
	return this;
}

IHouseBuilder *HouseWithGarden::createPool()
{
	return this;
}

IHouseBuilder *HouseWithGarden::createGarage()
{
	return this;
}

void HouseWithGarden::Build()
{
	this->createWalls()->createDoor()->createWindow()->createGarden();
}

House *HouseWithGarden::getHouse()
{
	return m_house;
}