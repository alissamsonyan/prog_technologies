#pragma once

#include "component.hpp"

class Item : public Component {
private: 
	int price;
public:
	int getPrice() override;

	Item(int);
};
