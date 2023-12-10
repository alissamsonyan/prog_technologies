#ifndef I_COMMAND_HPP
#define I_COMMAND_HPP
#include<iostream>
class ICommand {

public:
    virtual void execute() = 0;

};
#endif // I_COMMAND_HPP