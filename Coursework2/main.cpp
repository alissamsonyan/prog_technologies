#include <iostream>
#include "UserManager.hpp"
#include "Repository.hpp"
#include "Log.hpp"
#include "Menu.hpp"

int main()
{
    
    UserRepository userRepository;
    Logger logger;

    
    UserManager userManager(userRepository, logger);
    Menu menu(userManager);
    menu.showMainMenu();
    

    return 0;
}
