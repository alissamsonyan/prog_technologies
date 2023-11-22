#ifndef SUBSCRIBERS_HPP
#define SUBSCRIBERS_HPP

#include <iostream>

class Subscribers {
public:
    virtual void update(const std::string& context) = 0;
};

#endif // SUBSCRIBERS_HPP
