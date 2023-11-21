#ifndef FIFTYDOLLARHANDLER_HPP
#define FIFTYDOLLARHANDLER_HPP

#include "ATMHandler.hpp"

class FiftyDollarHandler : public ATMHandler {
public:
    FiftyDollarHandler(ATMHandler* successor = nullptr);
    void HandleRequest(int amt) override;
};

#endif // FIFTYDOLLARHANDLER_HPP
