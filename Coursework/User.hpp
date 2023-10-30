#ifndef USER_HPP
#define USER_HPP

#include <string>

struct User
{
    std::string username;
    std::string passwordHash;
};

#endif // USER_HPP