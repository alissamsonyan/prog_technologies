#include "Menu.hpp"
#include <iostream>

Menu::Menu(UserManager& userManager) : userManager(userManager) {}

void Menu::showMainMenu()
{
    int choice;
    do
    {
        std::cout << "Main Menu\n";
        std::cout << "1. Register\n";
        std::cout << "2. Login\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            userManager.registerUser();
            break;

        case 2:
            userManager.loginUser();
            break;

        case 3:
            std::cout << "Exiting...\n";
            break;

        default:
            std::cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 3);
}
