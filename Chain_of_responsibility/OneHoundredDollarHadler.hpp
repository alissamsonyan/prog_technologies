#ifndef ONEHUNDREDDOLLARHANDLER_HPP
#define ONEHUNDREDDOLLARHANDLER_HPP

#include "ATMHandler.hpp"

class OneHundredDollarHandler : public ATMHandler {
public:
    OneHundredDollarHandler(ATMHandler* successor = nullptr);
    void HandleRequest(int amt) override;
};

#endif // ONEHUNDREDDOLLARHANDLER_HPP
