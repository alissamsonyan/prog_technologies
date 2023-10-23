#include "ScrollDecorator.hpp"

ScrollDecorator::ScrollDecorator(IVisualComponent* comp,const int& scrP) : Decorator{ comp }, scrollPosition{ scrP } {}

void ScrollDecorator::Draw() {
	Decorator::Draw();
	ScrollTo();
}
void ScrollDecorator::ScrollTo() {
	std::cout << "Scroll To::" << scrollPosition << std::endl;
}