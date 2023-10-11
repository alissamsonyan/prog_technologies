#include "ConcretePrototype.hpp"
#include "SubClassPrototype.hpp"

int main() {
   
    ConcretePrototype concreteProto(13, "ConcretePrototype");
    IPrototype* concreteClone1 = concreteProto.clone();
    IPrototype* concreteClone2 = concreteProto.clone();

    
    SubClassPrototype subClassProto(5.7);
    IPrototype* subClassClone1 = subClassProto.clone();
    IPrototype* subClassClone2 = subClassProto.clone();

   
    concreteProto.print();
    concreteClone1->print();
    concreteClone2->print();

    subClassProto.print();
    subClassClone1->print();
    subClassClone2->print();


    delete concreteClone1;
    delete concreteClone2;
    delete subClassClone1;
    delete subClassClone2;

    return 0;
}
