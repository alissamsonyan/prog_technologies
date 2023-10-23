#ifndef DECORATOR_HPP
#define DECORATOR_HPP

#include "IVisualComponent.hpp"

class Decorator :public IVisualComponent {
protected:
	IVisualComponent* component;
public:
	Decorator() {}
	Decorator(IVisualComponent *comp);
	void Draw();
};

#endif // DECORATOR_HPP
