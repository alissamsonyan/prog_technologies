#ifndef TWENTYDOLLARHANDLER_HPP
#define TWENTYDOLLARHANDLER_HPP

#include "ATMHandler.hpp"

class TwentyDollarHandler : public ATMHandler {
public:
    TwentyDollarHandler(ATMHandler* successor = nullptr);
    void HandleRequest(int amt) override;
};

#endif // TWENTYDOLLARHANDLER_HPP
