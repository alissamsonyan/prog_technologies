#ifndef USER_MANAGER_H
#define USER_MANAGER_H

#include "User.hpp"
#include "Repository.hpp"
#include "Logger.hpp"
#include "UserFactory.hpp"
#include "Hasher.hpp" 

class UserManager
{
public:
    UserManager(UserFactory &factory, UserRepository &repo, Logger &log);
    void registerUser();
    void loginUser();

private:
    UserFactory &userFactory;
    UserRepository &userRepository;
    Logger &logger;
};

#endif
