#include "item.hpp"

int  Item::getPrice() {
	return price;
}

Item::Item(int price) : price{ price } {};