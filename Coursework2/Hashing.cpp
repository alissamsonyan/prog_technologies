#include "Hashing.hpp"

unsigned int simpleHash(const std::string &input)
{
    unsigned int hash = 0;
    for (char ch : input)
    {
        hash = hash * 31 + ch;
    }
    return hash;
}

std::string Hashing::hashPassword(const std::string &password)
{
    
    unsigned int hashedValue = simpleHash(password);

   
    return std::to_string(hashedValue);
}
