#include "BorderDecorator.hpp"

BorderDecorator::BorderDecorator(IVisualComponent* comp, const int& borderW) :Decorator{ comp }, borderWidth{ borderW } {}

void BorderDecorator::Draw() {
	Decorator::Draw();
	DrawBorder();
}
void BorderDecorator::DrawBorder() {
	std::cout << "Border Width::" << borderWidth << std::endl;
}