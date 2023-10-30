#include "UserManager.hpp"
#include "Hasher.hpp"
#include <iostream>

UserManager::UserManager(UserFactory &factory, UserRepository &repo, Logger &log)
    : userFactory(factory), userRepository(repo), logger(log) {}

void UserManager::registerUser()
{
}

void UserManager::loginUser()
{
}
