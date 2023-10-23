#include "BorderDecorator.hpp"
#include "ScrollDecorator.hpp"
#include "TextView.hpp"

int main() {
	IVisualComponent* txtView = new TextView();

	IVisualComponent* scroll = new ScrollDecorator(txtView, 7);
	IVisualComponent* border = new BorderDecorator(txtView, 10);

	scroll->Draw();
	border->Draw();
	

}