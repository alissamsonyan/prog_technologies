#ifndef USER_FACTORY_HPP
#define USER_FACTORY_HPP

#include "User.hpp"

class UserFactory
{
public:
    User createUser(const std::string &username, const std::string &password);
    static std::string hashPassword(const std::string &password);
};

//class for hashing

#endif // USER_FACTORY_HPP
