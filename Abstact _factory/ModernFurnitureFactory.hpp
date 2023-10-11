#ifndef MODERN_FURNITURE_FACTORY_HPP
#define MODERN_FURNITURE_FACTORY_HPP

#include "IFurnitureFactory.hpp"

class ModernFurnitureFactory : public IFurnitureFactory
{
public:
    IChair *createChair() ;
    ICoffeeTable *createTable() ;
};

#endif // MODERN_FURNITURE_FACTORY_HPP
