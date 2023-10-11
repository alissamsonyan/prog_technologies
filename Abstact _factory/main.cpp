#include <iostream>
#include "ModernFurnitureFactory.hpp"
#include "VictorianFurnitureFactory.hpp"
#include "IChair.hpp"
#include "ICoffeeTable.hpp"

int main()
{
    IFurnitureFactory *modernFactory = new ModernFurnitureFactory();
    IFurnitureFactory *victorianFactory = new VictorianFurnitureFactory();

    IChair *modernChair = modernFactory->createChair();
    ICoffeeTable *modernTable = modernFactory->createTable();

    IChair *victorianChair = victorianFactory->createChair();
    ICoffeeTable *victorianTable = victorianFactory->createTable();

    modernChair->siton();
    modernChair->haslegs(); 
    modernTable->use();

    victorianChair->siton();
    victorianChair->haslegs();
    victorianTable->use();

    delete modernFactory;
    delete victorianFactory;
    delete modernChair;
    delete modernTable;
    delete victorianChair;
    delete victorianTable;

    return 0;
}
