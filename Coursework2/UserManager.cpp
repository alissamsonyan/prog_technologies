#include "UserManager.hpp"


UserManager::UserManager(UserRepository &repo, Log &log)
    : userRepository(repo), logger(log) {}

void UserManager::registerUser()
{
    std::string username, password, securityQuestion, securityAnswer;

    std::cout << "Enter username: ";
    std::cin >> username;

    std::cout << "Enter password: ";
    std::cin >> password;

    std::string hashedPassword = Hashing::hashPassword(password);

    char wantsSecurityQuestions;
    std::cout << "Do you want to set security questions? (y/n): ";
    std::cin >> wantsSecurityQuestions;

    if (tolower(wantsSecurityQuestions) == 'y')
    {
        std::cout << "Choose security questions from the following options:\n";
        std::cout << "1. Your favorite color\n";
        std::cout << "2. Your pet's name\n";

        int questionChoice;
        std::cout << "Enter the number corresponding to your chosen question 1 or 2: ";
        std::cin >> questionChoice;

        switch (questionChoice)
        {
        case 1:
            securityQuestion = "Your favorite color";
            break;

        case 2:
            securityQuestion = "Your pet's name";
            break;

        default:
            std::cout << "Invalid choice. Using default security question.\n";
            securityQuestion = "Your favorite color";
        }

        std::cout << "Enter your answer to the security question: ";
        std::cin.ignore();
        std::getline(std::cin, securityAnswer);
    }
    else
    {
        securityQuestion = "Not set";
        securityAnswer = "Not set";
    }

    User newUser;
    newUser.username = username;
    newUser.passwordHash = hashedPassword;
    newUser.securityQuestion = securityQuestion;
    newUser.securityAnswer = securityAnswer;

    bool addUserResult = userRepository.addUser(newUser);

    if (addUserResult)
    {
        logger.log("User registered: " + newUser.username);
    }
    else
    {
        std::cout << "Error: User with the same username already exists.\n";
    }
}

void UserManager::loginUser()
{
    std::string username, password;

    std::cout << "Enter username: ";
    std::cin >> username;

    std::cout << "Enter password: ";
    std::cin >> password;

    std::string hashedPassword = Hashing::hashPassword(password);

    std::optional<User> retrievedUser = userRepository.getUser(username);

    if (retrievedUser.has_value() && retrievedUser.value().passwordHash == hashedPassword)
    {
        logger.log("User logged in: " + retrievedUser.value().username);
    }
    else
    {
        logger.log("Failed login attempt for user: " + username);
    }
}
