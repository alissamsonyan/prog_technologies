#ifndef USER_HPP
#define USER_HPP

#include <string>

struct User
{
    std::string username;
    std::string passwordHash;
    std::string securityQuestion;
    std::string securityAnswer;


    User() = default;  
    User(const std::string& username, const std::string& password, const std::string& securityQuestion, const std::string& securityAnswer);

    std::string getUsername() const;
    std::string getPasswordHash() const;
    std::string getSecurityQuestion() const;
    std::string getSecurityAnswer() const;
};

#endif // USER_HPP
