#include "UserFactory.hpp"


User UserFactory::createUser(const std::string& username, const std::string& password) {
    User user;
    user.username = username;
    user.passwordHash = hashPassword(password); 
    return user;
}

std::string UserFactory::hashPassword(const std::string& password) {
    //hashing
    return "hashed_password";
}


