#ifndef TARGET_HPP
#define TARGET_HPP

#include <string>

class Target {
public:
    virtual ~Target() = default;

    virtual std::string Request() const;
};

#endif // TARGET_HPP
