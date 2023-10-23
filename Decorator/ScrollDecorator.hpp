#ifndef SCROLL_DECORATOR_HPP
#define SCROLL_DECORATOR_HPP

#include "Decorator.hpp"

class ScrollDecorator :public Decorator {

private:
	int scrollPosition;
public:
	ScrollDecorator(IVisualComponent* comp,const int &scrP);
	void Draw();
	void ScrollTo();
};

#endif // SCROLL_DECORATOR_HPP
