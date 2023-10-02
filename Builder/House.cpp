#include "House.hpp"

House::House(IHouseBuilder& builder)
{
	Walls = builder.Walls;
	Window = builder.Window;
	Door = builder.Door;
	Pool = builder.Pool;
	Garage = builder.Garage;
	Garden = builder.Garden;
}

void	House::setWalls()
{
	Walls = true;	
}

void	House::setWindow()
{
	Window = true;	
}

void	House::setDoor()
{
	Door = true;	
}

void	House::setPool()
{
	Pool = true;	
}

void	House::setGarage()
{
	Garage = true;	
}

void	House::setGarden()
{
	Garden = true;	
}

bool	House::getWalls() const
{
	return Walls;
}

bool	House::getWindow() const
{
	return Window;
}

bool	House::getDoor() const
{
	return Door;
}

bool	House::getPool() const
{
	return Pool;
}

bool	House::getGarage() const
{
	return Garage;
}

bool	House::getGarden() const
{
	return Garden;
}


	
