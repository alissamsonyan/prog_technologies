#ifndef HASHER_HPP
#define HASHER_HPP

#include <string>

class Hasher
{
public:
    static std::string hashPassword(const std::string &password);
};

#endif // HASHER_HPP
