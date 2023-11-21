#include "FiftyDollarHandler.hpp"
#include <iostream>

FiftyDollarHandler::FiftyDollarHandler(ATMHandler* successor) : ATMHandler(successor) {}

void FiftyDollarHandler::HandleRequest(int amt) {
    if (amt % 50 == 0) {
        std::cout << "Number of 50 dollars is: " << amt / 50 << std::endl;
        std::cout << "Request is completely ended" << std::endl;
    } else {
        int dollar50 = amt / 50;
        std::cout << "Number of 50 dollars is: " << dollar50 << std::endl;
        amt = amt - dollar50 * 50;
        ATMHandler::HandleRequest(amt);
    }
}
