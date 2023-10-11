#include "Target.hpp"
#include "Adaptee.hpp"
#include "Adapter.hpp"
#include "ClientCode.hpp"

#include<iostream>

int main() {
    std::cout << "Client: I can work just fine with the Target objects:\n";
    Target *target = new Target;
    ClientCode(target);
    std::cout << std::endl;
    Adaptee *adaptee = new Adaptee;
    std::cout << "Client: The Adaptee class has a weird interface. See, I don't understand it:\n\n";
    std::cout << "Adaptee: " << adaptee->SpecificRequest();
     std::cout << std::endl;
    std::cout << "Client: But I can work with it via the Adapter:"<<std::endl;
    Adapter *adapter = new Adapter(adaptee);
    ClientCode(adapter);
   std::cout << std::endl;

    delete target;
    delete adaptee;
    delete adapter;

    return 0;
}
