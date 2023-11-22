#include "OneHoundredDollarHadler.hpp"

OneHundredDollarHandler::OneHundredDollarHandler(ATMHandler* successor) : ATMHandler(successor) {}

void OneHundredDollarHandler::HandleRequest(int amt) {
    if (amt % 100 == 0) {
        std::cout << "Number of 100 dollars is: " << amt / 100 << std::endl;
        std::cout << "Request is completely ended" << std::endl;
    } else {
        int dollar100 = amt / 100;
        std::cout << "Number of 100 dollars is: " << dollar100 << std::endl;
        amt = amt - dollar100 * 100;
        ATMHandler::HandleRequest(amt);
    }
}
