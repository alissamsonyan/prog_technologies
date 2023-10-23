#include "Decorator.hpp"


Decorator::Decorator(IVisualComponent* comp) {
	component = comp;
}

void Decorator::Draw() {
	component->Draw();
}

