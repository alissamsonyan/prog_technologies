#include "ModernFurnitureFactory.hpp"
#include "ModernChair.hpp"
#include "ModernCoffeeTable.hpp"

IChair *ModernFurnitureFactory::createChair()
{
    return new ModernChair();
}

ICoffeeTable *ModernFurnitureFactory::createTable()
{
    return new ModernCoffeeTable();
}
