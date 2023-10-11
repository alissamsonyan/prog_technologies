#ifndef VICTORIAN_FURNITURE_FACTORY_HPP
#define VICTORIAN_FURNITURE_FACTORY_HPP

#include "IFurnitureFactory.hpp"

class VictorianFurnitureFactory : public IFurnitureFactory
{
public:
    IChair *createChair();
    ICoffeeTable *createTable() ;
};

#endif // VICTORIAN_FURNITURE_FACTORY_HPP
