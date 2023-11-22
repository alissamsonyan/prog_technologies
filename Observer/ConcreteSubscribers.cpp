
#include "ConcreteSubscribers.hpp"

void ConcreteSubscribers::update(const std::string& context) {
    std::cout << "Received update: " << context << std::endl;
}
