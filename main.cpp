#include <iostream>
#include "singleton.hpp"

 bool operator==(const Singleton& lhs, const Singleton& rhs) {
    return &lhs == &rhs;
}

int main() {
    Singleton& ins1 = Singleton::getInstance();
    Singleton& ins2 = Singleton::getInstance();

    if (ins1 == ins2) {
        std::cout << "Same instances" << std::endl;
    } else {
        std::cout << "Not same instances" << std::endl;
    }

    return 0;
}
