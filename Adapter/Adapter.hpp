#ifndef ADAPTER_HPP
#define ADAPTER_HPP

#include "Target.hpp"
#include "Adaptee.hpp"

class Adapter : public Target {
private:
    Adaptee *adaptee_;

public:
    Adapter(Adaptee *adaptee);
    std::string Request() const override;
};

#endif // ADAPTER_HPP
