#ifndef CONCRETESUBSCRIBERS_HPP
#define CONCRETESUBSCRIBERS_HPP

#include "Subscribers.hpp"

class ConcreteSubscribers : public Subscribers {
public:
    void update(const std::string& context) override;
};

#endif // CONCRETESUBSCRIBERS_HPP
