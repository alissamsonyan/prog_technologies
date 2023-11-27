#ifndef ATMHANDLER_HPP
#define ATMHANDLER_HPP

#include <iostream>

class ATMHandler {
public:
    ATMHandler(ATMHandler* successor = nullptr);
    virtual void HandleRequest(int amt);
    void SUC(ATMHandler* successor);
protected:
    ATMHandler* successor;
};

#endif // ATMHANDLER_HPP
