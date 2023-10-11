#include "Director.hpp"


void	Director::setHouseBuilder(std::string HouseType)
{
    IHouseBuilder *houseBuilder = nullptr;

    if (HouseType == "Normal")
    {
        houseBuilder = new NormalHouse();
    }
    else if (HouseType == "Pool")
    {
        houseBuilder = new HouseWithPool();
    }
    else if (HouseType == "Garden")
    {
        houseBuilder = new HouseWithGarden();
    }
    else if (HouseType == "Garage")
    {
        houseBuilder = new HouseWithGarage();
    }
    
    else
    {
		throw	std::runtime_error("Invalid house type!");
    }
	houseBuilder->Build();
}


House* Director::getProduct()
{
	return houseBuilder->getHouse();
}
