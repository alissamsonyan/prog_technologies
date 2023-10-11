#include "HouseWithPool.hpp"

HouseWithPool::HouseWithPool()
{
	m_house = new House();
	std::cout << "Creating House With Pool..." << std::endl;
}

IHouseBuilder *HouseWithPool::createWalls()
{
	m_house->setWalls();
	std::cout << "Walls are created..." << std::endl;
	return this;
}

IHouseBuilder *HouseWithPool::createDoor()
{
	m_house->setDoor();
	std::cout << "Door is created..." << std::endl;
	return this;
}

IHouseBuilder *HouseWithPool::createWindow()
{
	m_house->setWindow();
	std::cout << "Window is created..." << std::endl;
	return this;
}

IHouseBuilder *HouseWithPool::createPool()
{
	m_house->setPool();
	std::cout << "Pool is created..." << std::endl;
	return this;
}

IHouseBuilder *HouseWithPool::createGarden()
{
	return this;
}

IHouseBuilder *HouseWithPool::createGarage()
{
	return this;
}

void HouseWithPool::Build()
{
	this->createWalls()->createDoor()->createWindow()->createPool();
}

House *HouseWithPool::getHouse()
{
	return m_house;
}
