#ifndef USER_MANAGER_H
#define USER_MANAGER_H

#include "User.hpp"
#include "Repository.hpp"
#include "Log.hpp"
#include "Hashing.hpp"
#include <iostream>

class UserManager
{
public:
    UserManager(UserRepository &repo, Log &log);
    void registerUser();
    void loginUser();

private:
    UserRepository &userRepository;
    Log &logger;
};

#endif // USER_MANAGER_H
