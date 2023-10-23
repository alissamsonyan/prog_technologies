#pragma once

#include "component.hpp"
#include <vector>

class Box : public Component {
private:
	std::vector<Component*> components;
public:
	int getPrice() override;

	void addComponent(Component*);
};