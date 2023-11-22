#ifndef PUBLISHER_HPP
#define PUBLISHER_HPP

#include <vector>
#include <algorithm> 

#include "Subscribers.hpp"

class Publisher {
private:
    std::vector<Subscribers*> subscribers;
    std::string mainState;

public:
    void subscribe(Subscribers* subscriber);
    void unsubscribe(Subscribers* subscriber);
    void notifySubscribers();
    void mainBusinessLogic();
};

#endif // PUBLISHER_HPP
