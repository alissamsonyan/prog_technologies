#ifndef I_FURNITURE_FACTORY_HPP
#define I_FURNITURE_FACTORY_HPP

class IChair;
class ICoffeeTable;

class IFurnitureFactory
{
public:
    virtual IChair *createChair() = 0;
    virtual ICoffeeTable *createTable() = 0;
};

#endif // I_FURNITURE_FACTORY_HPP
