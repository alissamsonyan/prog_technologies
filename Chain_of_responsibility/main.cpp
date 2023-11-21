#include "ATMHandler.hpp"
#include "FiftyDollarHandler.hpp"
#include "OneHoundredDollarHadler.hpp"
#include "TwentyDollarHandler.hpp" 

int main() {
   
   
     ATMHandler* hundredHandler = new OneHundredDollarHandler();
     ATMHandler* fiftyHandler = new FiftyDollarHandler();
     ATMHandler* twentyHandler = new TwentyDollarHandler();


    hundredHandler ->SUC(fiftyHandler);
    fiftyHandler->SUC(twentyHandler);


    ATMHandler* atm = hundredHandler;


    std::cout << "Requesting $150: " << std::endl;
    atm->HandleRequest(150);

    std::cout << "\nRequesting $250: " << std::endl;
    atm->HandleRequest(250);

    std::cout << "\nRequesting $320: " << std::endl;
    atm->HandleRequest(320);

    delete twentyHandler;
    delete fiftyHandler;
    delete hundredHandler;

    return 0;
}
