#ifndef REPOSITORY_HPP
#define REPOSITORY_HPP

#include "User.hpp"
#include <map>
#include <optional>

class UserRepository
{
public:
    UserRepository(); 

    static UserRepository &getInstance();
    bool addUser(const User &user);
    std::optional<User> getUser(const std::string &username);

private:
    std::map<std::string, User> users;
};

#endif // REPOSITORY_HPP
