#include <iostream> 
#include "component.hpp"
#include "item.hpp"
#include "box.hpp"

int main() {
	Box* root = new Box();
	Item* item2 = new Item(200);
	root->addComponent(item2);

	Box* innerBox = new Box();
	Component* item1 = new Item(100);
	Component* item3 = new Item(500);
	innerBox->addComponent(item1);
	innerBox->addComponent(item3);
	root->addComponent(innerBox);

	std::cout << "Price: " << root->getPrice() << std::endl;
}