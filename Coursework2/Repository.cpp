#include "Repository.hpp"

UserRepository::UserRepository()
{
}

UserRepository &UserRepository::getInstance()
{
    static UserRepository instance;
    return instance;
}

bool UserRepository::addUser(const User &user)
{
    //TODO: Check if a user with the same username already exists
    if (users.find(user.username) != users.end())
    {
        return false;
    }

    // If not, add the user to the repository and return true
    users[user.username] = user;
    return true;
}

std::optional<User> UserRepository::getUser(const std::string &username)
{
    auto it = users.find(username);
    if (it != users.end())
    {
       
        return it->second;
    }
    else
    {

        return std::nullopt;
    }
}
