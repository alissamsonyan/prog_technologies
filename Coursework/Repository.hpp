#ifndef REPOSITORY_HPP
#define REPOSITORY_HPP

#include "User.hpp"
#include <map>

class UserRepository
{
public:
    static UserRepository &getInstance();
    void addUser(const User &user);
    User getUser(const std::string &username);

private:
    UserRepository() {} 
    std::map<std::string, User> users;
};

#endif // REPOSITORY_HPP
