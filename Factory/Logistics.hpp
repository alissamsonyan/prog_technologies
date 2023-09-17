#ifndef LOGISTICS_FACTORY_HPP
#define LOGISTICS_FACTORY_HPP

#include <iostream>
#include "Transport.hpp"

class LogisticsApp {

public:
	void planDelivery();
	virtual Transport* createTransport() = 0;
};




#endif // !LOGISTICS_FACTORY_HPP

