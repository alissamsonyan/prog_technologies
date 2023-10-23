#ifndef BORDER_DECORATOR_HPP
#define BORDER_DECORATOR_HPP

#include "Decorator.hpp"

class BorderDecorator :public Decorator {

private:
	int borderWidth;
public:
	BorderDecorator(IVisualComponent* comp,const int &borderW);
	void Draw();
	void DrawBorder();
};

#endif // BORDER_DECORATOR_HPP
