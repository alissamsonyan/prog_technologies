#include "ClientCode.hpp"
#include <iostream>

void ClientCode(const Target *target) {
    std::cout << target->Request();
}
