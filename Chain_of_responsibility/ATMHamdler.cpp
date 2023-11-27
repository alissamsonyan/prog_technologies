#include "ATMHandler.hpp"

ATMHandler::ATMHandler(ATMHandler* successor) : successor(successor) {}

void ATMHandler::HandleRequest(int amt) {
    if (successor) {
        successor->HandleRequest(amt);
    }
}

void ATMHandler::SUC(ATMHandler* successor) {
    this->successor = successor;
}
