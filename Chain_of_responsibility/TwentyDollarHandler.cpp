#include "TwentyDollarHandler.hpp"
#include <iostream>

TwentyDollarHandler::TwentyDollarHandler(ATMHandler* successor) : ATMHandler(successor) {}

void TwentyDollarHandler::HandleRequest(int amt) {
    if (amt % 20 == 0) {
        std::cout << "Number of 20 dollars is: " << amt / 20 << std::endl;
        std::cout << "Request is completely ended" << std::endl;
    } else {
        int dollar20 = amt / 20;
        std::cout << "Number of 20 dollars is: " << dollar20 << std::endl;
        amt = amt - dollar20 * 20;
        ATMHandler::HandleRequest(amt);
    }
}
