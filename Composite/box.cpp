#include "box.hpp"

int Box::getPrice() {
	int sum = 0; 
	for (const auto& it : components) {
		 sum += it->getPrice();
	}

	return sum;
}

void Box::addComponent(Component* component)
{
	components.push_back(component);
}