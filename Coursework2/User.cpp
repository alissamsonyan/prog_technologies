#include "User.hpp"

std::string User::getUsername() const {
    return username;
}

std::string User::getSecurityQuestion() const {
    return securityQuestion;
}

std::string User::getSecurityAnswer() const {
    return securityAnswer;
}

