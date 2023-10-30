#include "Repository.hpp"

UserRepository& UserRepository::getInstance() {
    static UserRepository instance;
    return instance;
}

void UserRepository::addUser(const User& user) {
    users[user.username] = user;
}

User UserRepository::getUser(const std::string& username) {
    return users[username];
}
