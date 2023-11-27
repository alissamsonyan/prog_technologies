#ifndef MENU_HPP
#define MENU_HPP

#include "UserManager.hpp"

class Menu
{
public:
    Menu(UserManager& userManager);

    void showMainMenu();

private:
    UserManager& userManager;
};

#endif // MENU_HPP
