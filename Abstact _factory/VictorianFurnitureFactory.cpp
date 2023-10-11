#include "VictorianFurnitureFactory.hpp"
#include "VictorianChair.hpp"
#include "VictorianCoffeeTable.hpp"

IChair *VictorianFurnitureFactory::createChair()
{
    return new VictorianChair();
}

ICoffeeTable *VictorianFurnitureFactory::createTable()
{
    return new VictorianCoffeeTable();
}
