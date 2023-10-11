#include "Director.hpp"

std::ostream&	operator<<(std::ostream& os, const House house)
{
	os << std::boolalpha << "Wall ->\t" << house.getWalls() << std::endl;
	os << std::boolalpha << "Window ->\t" << house.getWindow() << std::endl;
	os << std::boolalpha << "Door ->\t" << house.getDoor() << std::endl;
	os << std::boolalpha << "Pool ->\t" << house.getPool() << std::endl;
	os << std::boolalpha << "Garage ->\t" << house.getGarage() << std::endl;
	os << std::boolalpha << "Garden ->\t" << house.getGarden() << std::endl;
	return os;
}

int main() {

	try
	{
		Director director;

		std::string HouseType = "";

		std::cout << "Input House type (Normal, Pool, Garage, Garden): ";
		std::cin >> HouseType;

		director.setHouseBuilder(HouseType);
		House *result = director.getProduct();
		std::cout << result;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return 0;
}

